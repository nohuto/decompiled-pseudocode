/*
 * XREFs of IommuEnableDevicePasid @ 0x14059E450
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IommuEnableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  _DWORD *v16; // r14
  __int64 v17; // r15
  _DWORD *v18; // rdx
  unsigned __int8 CurrentIrql; // r14
  KSPIN_LOCK *v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r9
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rbp
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 88);
  v3 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4));
  v8 = (_QWORD *)HalpMmAllocCtxAlloc(v7, 40LL);
  v10 = v8;
  if ( !v8
    || (v8[2] = *(_QWORD *)(v2 + 24),
        v8[4] = v8 + 3,
        v8[3] = v8 + 3,
        v14 = (_QWORD *)HalpMmAllocCtxAlloc(v9, 64LL),
        (v3 = v14) == 0LL) )
  {
    v11 = -1073741670;
    goto LABEL_3;
  }
  memset_0(v14, 0, 0x40uLL);
  v15 = HalpHvIommu == 0;
  v3[5] = v2;
  v3[6] = v5;
  if ( v15 )
  {
    if ( !*(_BYTE *)(a2 + 266) && (*(_DWORD *)(v2 + 48) & 4) == 0 )
    {
      v11 = -1073741436;
      goto LABEL_3;
    }
    v16 = *(_DWORD **)(v5 + 24);
    v17 = *(_QWORD *)(a2 + 40);
    if ( !v16 )
      v16 = *(_DWORD **)(v17 + 40);
    v18 = *(_DWORD **)(v17 + 16);
    if ( !v18 )
      v18 = *(_DWORD **)(v17 + 40);
    if ( *v18 != *v16 || v18[12] != v16[12] )
    {
      v11 = -1073741776;
      goto LABEL_3;
    }
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 16), v17);
    if ( v11 < 0 )
      goto LABEL_3;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 16), v17);
  }
  else
  {
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), *(unsigned int *)(v5 + 16));
    if ( v11 < 0 )
      goto LABEL_3;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 32));
  v20 = (KSPIN_LOCK *)(v2 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  ++*(_DWORD *)(v2 + 36);
  v21 = (_QWORD *)(v5 + 40);
  v22 = *(_QWORD *)(v5 + 40);
  v23 = (_QWORD *)v22;
  if ( v22 == v5 + 40 )
    goto LABEL_33;
  v24 = *(_QWORD *)(v2 + 24);
  do
  {
    v25 = v23[2];
    v26 = v23;
    if ( v25 == v24 )
      break;
    v23 = (_QWORD *)*v23;
  }
  while ( v23 != v21 );
  if ( !v26 || v25 != v24 )
  {
LABEL_33:
    if ( *(_QWORD **)(v22 + 8) != v21 )
      goto LABEL_40;
    *v10 = v22;
    v26 = v10;
    v10[1] = v21;
    *(_QWORD *)(v22 + 8) = v10;
    *v21 = v10;
    v10 = 0LL;
  }
  v27 = v26 + 3;
  v28 = v26[3];
  if ( *(_QWORD **)(v28 + 8) != v26 + 3 )
    goto LABEL_40;
  v3[1] = v27;
  v29 = (__int64 *)(v2 + 56);
  *v3 = v28;
  *(_QWORD *)(v28 + 8) = v3;
  *v27 = v3;
  v30 = v3;
  v31 = *v29;
  v3 = 0LL;
  v32 = v30 + 2;
  if ( *(__int64 **)(*v29 + 8) != v29 )
LABEL_40:
    __fastfail(3u);
  *v32 = v31;
  v32[1] = v29;
  *(_QWORD *)(v31 + 8) = v32;
  *v29 = (__int64)v32;
  KxReleaseSpinLock(v20);
  KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 32));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4), NewIrql);
  if ( v10 )
    HalpMmAllocCtxFree(v12, (__int64)v10);
  if ( v3 )
    HalpMmAllocCtxFree(v12, (__int64)v3);
  return (unsigned int)v11;
}
