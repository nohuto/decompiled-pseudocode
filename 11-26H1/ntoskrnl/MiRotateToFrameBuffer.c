/*
 * XREFs of MiRotateToFrameBuffer @ 0x140AEC740
 * Callers:
 *     MmRotatePhysicalView @ 0x140AEC270 (MmRotatePhysicalView.c)
 * Callees:
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiIsPfn @ 0x14042D9E0 (MiIsPfn.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MmSizeOfMdl @ 0x140488370 (MmSizeOfMdl.c)
 *     MiSanitizePage @ 0x1404A096C (MiSanitizePage.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404DED80 (MiDeleteRotateAndStopFaults.c)
 *     MiGetVadCacheAttribute @ 0x1404E25CC (MiGetVadCacheAttribute.c)
 *     MiRotateComplete @ 0x1404E2824 (MiRotateComplete.c)
 *     MiSlowRotateCopy @ 0x1406F7544 (MiSlowRotateCopy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBuffer(ULONG *a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  SIZE_T v7; // r15
  unsigned int VadFlags; // eax
  int VadCacheAttribute; // edi
  unsigned int v11; // eax
  __int64 v12; // r9
  __int64 *v13; // r14
  int v14; // esi
  unsigned __int64 *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // r8
  int v19; // edi
  int v20; // ebx
  SIZE_T v21; // rax
  __int64 PoolMm; // rax
  struct _MDL *v23; // rbx
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 result; // rax
  int v28; // [rsp+40h] [rbp-78h]
  unsigned __int64 v29; // [rsp+48h] [rbp-70h]
  __int128 v30; // [rsp+50h] [rbp-68h] BYREF
  __int128 v31; // [rsp+60h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  unsigned int v35; // [rsp+E0h] [rbp+28h]

  v31 = 0LL;
  CurrentThread = 0LL;
  v7 = a5 << 12;
  v30 = 0LL;
  if ( a5 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  v29 = v7 + a3 - 1;
  VadFlags = MiReadVadFlags(a2);
  VadCacheAttribute = MiGetVadCacheAttribute(VadFlags);
  v28 = VadCacheAttribute;
  v11 = 0;
  v13 = (__int64 *)(v12 + 48);
  v14 = 0;
  for ( i = (unsigned __int64 *)(v12 + 48); ; ++i )
  {
    v35 = v11;
    if ( v11 >= a5 )
      break;
    if ( MiIsPfn(*i) )
    {
      result = MiLegitimatePageForDriversToMap(48 * *i - 0x220000000000LL, v16, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v17 = MiSanitizePage(*i);
      v19 = MiReferenceIoPages((int)v18 + 1, v17, (unsigned int)((_DWORD)v18 + 1), VadCacheAttribute, v18, v18);
      if ( v19 < 0 )
        goto LABEL_14;
      VadCacheAttribute = v28;
      ++v14;
    }
    v11 = v35 + 1;
  }
  if ( !(unsigned int)MiChargeCommit(a1, a5, 0) )
    goto LABEL_20;
  v20 = MmGetCurrentProcessorColor() | 0x80000000;
  v21 = MmSizeOfMdl((PVOID)a3, v7);
  PoolMm = ExAllocatePoolMm(64LL, v21, 1868983881, v20);
  v23 = (struct _MDL *)PoolMm;
  if ( !PoolMm )
  {
    MiReturnCommit((__int64)a1, a5, 0);
LABEL_20:
    v19 = -1073741670;
LABEL_14:
    while ( v14 )
    {
      if ( !MiIsPfn(*v13) )
      {
        MiDereferenceIoPages(1LL, *v13, 1uLL);
        --v14;
      }
      ++v13;
    }
    return (unsigned int)v19;
  }
  *(_QWORD *)PoolMm = 0LL;
  *(_WORD *)(PoolMm + 10) = 0;
  *(_QWORD *)&v30 = 1LL;
  v24 = v30;
  *(_DWORD *)(PoolMm + 40) = v7;
  v30 = v24;
  *(_DWORD *)(PoolMm + 44) = a3 & 0xFFF;
  *(_WORD *)(PoolMm + 8) = 8 * (((v7 + (a3 & 0xFFF) + 4095) >> 12) + 6);
  *(_QWORD *)(PoolMm + 32) = a3 & 0xFFFFFFFFFFFFF000uLL;
  v19 = MiProbeAndLockPages(PoolMm, &v30);
  if ( v19 < 0 )
  {
    MiReturnCommit((__int64)a1, a5, 0);
    ExFreePoolWithTag(v23, 0);
    goto LABEL_14;
  }
  *((_QWORD *)&v31 + 1) = a2;
  CurrentThread = KeGetCurrentThread();
  MiDeleteRotateAndStopFaults(a3, v29, &v31);
  v23->MdlFlags |= 0x2000u;
  if ( (int)guard_dispatch_icall_no_overrides(a4, (__int64)v23) < 0 )
    MiSlowRotateCopy(a4, (__int64)v23, a2);
  MiMapLockedPagesInUserSpaceHelper(a3, (__int64)v13, &v23[1].Next, v28, a5, a2, 16);
  MiRotateComplete((unsigned __int64 *)&v31, v25, v26);
  MmUnlockPages(v23);
  ExFreePoolWithTag(v23, 0);
  return 0LL;
}
