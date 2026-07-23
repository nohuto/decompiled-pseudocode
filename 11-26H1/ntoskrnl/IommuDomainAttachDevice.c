/*
 * XREFs of IommuDomainAttachDevice @ 0x1405A12E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpIommuGetDeviceId @ 0x1404F04C0 (HalpIommuGetDeviceId.c)
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x140590474 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x1405A2624 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDevice(__int64 a1, void *a2, int a3, int a4)
{
  unsigned __int64 v8; // rbx
  int DeviceId; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  void *v13; // r14
  int v14; // edi
  __int64 *v15; // rcx
  __int64 v16; // rax
  char v17; // r15
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // si
  _QWORD *QuantumTarget; // rax
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-8h] BYREF

  Src = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  DeviceId = HalpIommuGetDeviceId((__int64)a2, &Src);
  v13 = Src;
  v14 = DeviceId;
  if ( DeviceId >= 0 )
  {
    if ( a3 || a4 != 1 )
    {
      v14 = -1073741583;
      v17 = 0;
    }
    else
    {
      v14 = HalpIommuCreateDevice((__int64)Src, a2, 0LL, 0LL, &v23);
      if ( v14 < 0 )
        goto LABEL_29;
      v15 = (__int64 *)v23;
      v16 = *(_QWORD *)(v23 + 24);
      if ( v16 )
      {
        v17 = 1;
        if ( v16 == a1 )
        {
          v14 = 0;
          goto LABEL_30;
        }
        IommupFindAndPopCachedDevice(v23, &v24);
        v15 = (__int64 *)v23;
        v8 = v24;
      }
      else
      {
        v17 = 0;
      }
      v14 = HalpIommuJoinDmaDomain((__int64)v15, a1, 0LL);
      if ( v14 >= 0 )
      {
        if ( v8 || (v8 = HalpMmAllocCtxAlloc(v18, 56LL)) != 0 )
        {
          *(_OWORD *)v8 = 0LL;
          *(_OWORD *)(v8 + 16) = 0LL;
          *(_OWORD *)(v8 + 32) = 0LL;
          *(_QWORD *)(v8 + 48) = 0LL;
          *(_QWORD *)(v8 + 32) = v23;
          *(_QWORD *)(v8 + 16) = a2;
          *(_DWORD *)(v8 + 24) = 0;
          *(_DWORD *)(v8 + 28) = 1;
          *(_QWORD *)(v8 + 40) = a1;
          *(_QWORD *)(v8 + 48) = v13;
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
    if ( v8 )
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
      *(_QWORD *)v8 = &IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
      *(_QWORD *)(v8 + 8) = QuantumTarget;
      *QuantumTarget = v8;
      IommuInterfaceStateChangeCallbackPushLock.QuantumTarget = v8;
      KxReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( v14 >= 0 )
    {
      if ( !v17 )
        return (unsigned int)v14;
      v15 = (__int64 *)v23;
      goto LABEL_30;
    }
  }
LABEL_29:
  v15 = (__int64 *)v23;
  if ( v23 )
  {
LABEL_30:
    HalpIommuDeleteDevice(v15, v10, v11, v12);
    if ( v14 >= 0 )
      return (unsigned int)v14;
  }
  if ( v13 )
    HalpMmAllocCtxFree((__int64)v15, (__int64)v13);
  return (unsigned int)v14;
}
