/*
 * XREFs of IommuDisableDevicePasid @ 0x14059E170
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IommuHvSetAddressSpace @ 0x14059FF70 (IommuHvSetAddressSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *j; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned int v15; // ebp
  ULONG_PTR v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  KSPIN_LOCK *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int8 v28; // [rsp+30h] [rbp-58h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 88);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4));
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 32));
  v7 = 0LL;
  for ( i = *(_QWORD **)(v4 + 40); i != (_QWORD *)(v4 + 40); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i[2] == v5 )
      break;
  }
  v9 = v7 + 3;
  v10 = 0LL;
  for ( j = (_QWORD *)v7[3]; j != v9; j = (_QWORD *)*j )
  {
    v10 = j;
    if ( j[5] == v2 )
      break;
  }
  v12 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
    goto LABEL_44;
  v13 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v13 != v10 )
    goto LABEL_44;
  v14 = HalpHvIommu == 0;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( !v14 )
  {
    v15 = *(_DWORD *)(v4 + 16);
    v16 = *(_QWORD *)(v2 + 40);
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v16, v15) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, v16, v15, 0LL);
    CurrentIrql = v28;
    v3 = a2;
  }
  if ( (_QWORD *)*v9 != v9 )
  {
    v7 = 0LL;
    goto LABEL_26;
  }
  if ( !HalpHvIommu )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16), *(_QWORD *)(v3 + 40));
  v17 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v18 = (_QWORD *)v7[1], (_QWORD *)*v18 != v7) )
LABEL_44:
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_26:
  if ( HalpHvIommu && *(_QWORD *)(v4 + 40) == v4 + 40 )
    IommuHvSetAddressSpace(a1, 0LL);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  --*(_DWORD *)(v2 + 36);
  v19 = v10[2];
  if ( *(_QWORD **)(v19 + 8) != v10 + 2 )
    goto LABEL_44;
  v20 = (_QWORD *)v10[3];
  if ( (_QWORD *)*v20 != v10 + 2 )
    goto LABEL_44;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  if ( !*(_DWORD *)(v2 + 36) && !HalpHvIommu )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16), *(_QWORD *)(v3 + 40));
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 32));
  v21 = (KSPIN_LOCK *)(v5 + (-(__int64)(HalpHvIommu != 0) & 0xFFFFFFFFFFFFFE90uLL) + 400);
  KxAcquireSpinLock(v21);
  v22 = v2 + 88;
  v23 = 512LL;
  do
  {
    v24 = *(_DWORD *)(v22 + 4);
    if ( (v24 & 1) != 0 && ((v24 >> 1) & 0xFFFFF) == *(_DWORD *)(v4 + 16) )
      *(_QWORD *)v22 = 0LL;
    v22 += 8LL;
    --v23;
  }
  while ( v23 );
  KxReleaseSpinLock(v21);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v25, (__int64)v10);
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4), NewIrql);
  if ( v7 )
    HalpMmAllocCtxFree(v26, (__int64)v7);
  return 0LL;
}
