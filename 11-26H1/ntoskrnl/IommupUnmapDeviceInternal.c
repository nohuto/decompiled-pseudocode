/*
 * XREFs of IommupUnmapDeviceInternal @ 0x14059FB94
 * Callers:
 *     IommuUnmapDevice @ 0x14059F520 (IommuUnmapDevice.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupHvUnmapDevice @ 0x1405A1180 (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupUnmapDeviceInternal(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v6; // rdi
  _QWORD *i; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r14
  _QWORD *j; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx

  v3 = *(_QWORD **)(a2 + 88);
  if ( HalpHvIommu )
    IommupHvUnmapDevice(v3[5]);
  else
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v3[3] + 16LL), *(_QWORD *)(a2 + 40));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v6 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v6 = i;
    if ( i[2] == v3[3] )
      break;
  }
  v8 = v6 + 3;
  v9 = 0LL;
  for ( j = (_QWORD *)v6[3]; j != v8; j = (_QWORD *)*j )
  {
    v9 = j;
    if ( (_QWORD *)j[5] == v3 )
      break;
  }
  v11 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 )
    goto LABEL_32;
  v12 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v12 != v9 )
    goto LABEL_32;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (_QWORD *)*v8 != v8 )
  {
    v6 = 0LL;
    goto LABEL_22;
  }
  v13 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v14 = (_QWORD *)v6[1], (_QWORD *)*v14 != v6) )
LABEL_32:
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
LABEL_22:
  v15 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_32;
  v16 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v16 != v3 )
    goto LABEL_32;
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v18 = HalpHvIommu == 0;
  *(_QWORD *)(a2 + 88) = 0LL;
  if ( v18 )
  {
    v18 = (*(_DWORD *)(a2 + 56))-- == 1;
    if ( v18 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
    }
  }
  HalpMmAllocCtxFree(v17, (__int64)v3);
  HalpMmAllocCtxFree(v19, (__int64)v9);
  if ( v6 )
    HalpMmAllocCtxFree(v20, (__int64)v6);
  return 0LL;
}
