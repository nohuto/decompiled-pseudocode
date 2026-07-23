/*
 * XREFs of MiRotateToFrameBufferNoCopy @ 0x140AEF51C
 * Callers:
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 * Callees:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiSanitizePage @ 0x14049A4BC (MiSanitizePage.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D0AD0 (MiObtainRotateProtectionRanges.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404D8460 (MiDeleteRotateAndStopFaults.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiRotateComplete @ 0x1404DBF04 (MiRotateComplete.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBufferNoCopy(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int VadFlags; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 *v10; // rsi
  unsigned int v11; // r15d
  unsigned __int64 *v12; // r14
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 result; // rax
  int VadCacheAttribute; // [rsp+40h] [rbp-40h]
  unsigned __int64 v27; // [rsp+48h] [rbp-38h]
  PVOID P[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-10h]

  CurrentThread = 0LL;
  v29 = 0LL;
  if ( a4 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  P[1] = P;
  P[0] = P;
  v27 = (a4 << 12) + a2 - 1;
  VadFlags = MiReadVadFlags(a1);
  v7 = 0;
  VadCacheAttribute = MiGetVadCacheAttribute(VadFlags);
  v10 = (__int64 *)(v9 + 48);
  v11 = 0;
  v12 = (unsigned __int64 *)(v9 + 48);
  v13 = VadCacheAttribute;
  while ( v11 < v8 )
  {
    if ( MiIsPfn(*v12) )
    {
      result = MiLegitimatePageForDriversToMap(48 * *v12 - 0x220000000000LL, v14, v15);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v16 = MiSanitizePage(*v12);
      v17 = MiReferenceIoPages(1u, v16, 1LL, v13, 0LL, 0LL);
      if ( v17 < 0 )
        goto LABEL_21;
      v13 = VadCacheAttribute;
      ++v7;
    }
    v8 = a4;
    ++v11;
    ++v12;
  }
  v17 = MiObtainRotateProtectionRanges(a1, a2, v27, (__int64 **)P);
  if ( v17 < 0 )
  {
LABEL_21:
    while ( v7 )
    {
      if ( !MiIsPfn(*v10) )
      {
        MiDereferenceIoPages(1LL, *v10, 1uLL);
        --v7;
      }
      ++v10;
    }
    return (unsigned int)v17;
  }
  *((_QWORD *)&v29 + 1) = a1;
  CurrentThread = KeGetCurrentThread();
  MiDeleteRotateAndStopFaults(a2, v27, &v29);
  while ( 1 )
  {
    v20 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v21 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v21 + 8) = P;
    v22 = -2147483632;
    v23 = v20[2];
    v24 = (v20[3] - v23) >> 12;
    if ( (v20[4] & 7) != 1 )
      v22 = 16;
    MiMapLockedPagesInUserSpaceHelper(v23, (__int64)v10, 0LL, VadCacheAttribute, v24, a1, v22);
    ExFreePoolWithTag(v20, 0);
    v10 += v24;
  }
  MiRotateComplete((unsigned __int64 *)&v29, v18, v19);
  return 0LL;
}
