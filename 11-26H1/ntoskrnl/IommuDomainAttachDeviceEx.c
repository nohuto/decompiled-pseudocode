/*
 * XREFs of IommuDomainAttachDeviceEx @ 0x14059ED10
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140587CE0 (HalpIommuDeviceGetDomainTypes.c)
 *     IommupDeviceGetPasidDevice @ 0x140587E80 (IommupDeviceGetPasidDevice.c)
 *     IommupDomainAttachPasidDevice @ 0x140588004 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x140588288 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x14058DCF4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x14058DE4C (HalpIommuLeaveDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x14059FE34 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDeviceEx(ULONG_PTR a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rdx
  int DomainTypes; // r8d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // si
  _QWORD *QuantumTarget; // rax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(a2, a2);
  if ( !_bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return (unsigned int)-1073741790;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    if ( v9 == a1 )
      return 0;
    IommupFindAndPopCachedDevice(a2, &v15);
    v3 = v15;
  }
  if ( !*(_BYTE *)(a2 + 266) )
  {
    v8 = HalpIommuJoinDmaDomain(a2, a1, &v14);
    if ( v8 < 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a2 + 24) || !IommupDeviceGetPasidDevice(a2, v6, 0, (struct _KLOCK_ENTRIES *)&v16) )
  {
    v8 = -1073741823;
    goto LABEL_21;
  }
  v4 = v16;
  v8 = IommupDomainAttachPasidDevice(a1, v16);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a2 + 24) = a1;
LABEL_15:
    if ( v3 || (v3 = HalpMmAllocCtxAlloc(v10, 56LL)) != 0 )
    {
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_OWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(v3 + 32) = a2;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(v3 + 28) = 1;
      *(_QWORD *)(v3 + 40) = a1;
      *(_QWORD *)(v3 + 48) = *(_QWORD *)a2;
    }
    else
    {
      v8 = -1073741670;
      if ( *(_BYTE *)(a2 + 266) )
        IommupDomainDetachPasidDevice(v4);
      else
        HalpIommuLeaveDmaDomain(a2, a1);
    }
  }
LABEL_21:
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KxAcquireSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
    QuantumTarget = (_QWORD *)IommuInterfaceStateChangeCallbackPushLock.QuantumTarget;
    if ( *(struct _KTHREAD **)IommuInterfaceStateChangeCallbackPushLock.QuantumTarget != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress )
      __fastfail(3u);
    *(_QWORD *)v3 = &IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
    *(_QWORD *)(v3 + 8) = QuantumTarget;
    *QuantumTarget = v3;
    IommuInterfaceStateChangeCallbackPushLock.QuantumTarget = v3;
    KxReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v8;
}
