/*
 * XREFs of MiFreePhysicalPageChain @ 0x1403D12C8
 * Callers:
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x140706770 (MiFreePhysicalRange.c)
 *     MiReadyLargeAwePageForFree @ 0x140707164 (MiReadyLargeAwePageForFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiReturnProcessPhysicalPages @ 0x140B47810 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiFreePhysicalPageChain(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 result; // rax
  int v8; // ecx
  __int64 v9; // r12
  _BYTE *v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // r8
  unsigned __int8 v25; // r8
  __int64 *v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int8 v30; // [rsp+20h] [rbp-E0h]
  _WORD *v31; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE *LeafPfnBuddy; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[4096]; // [rsp+90h] [rbp-70h] BYREF

  v3 = a1;
  memset_0(&BugCheckParameter2, 0, 0x1030uLL);
  v4 = 0LL;
  LeafPfnBuddy = v41;
  v5 = 0LL;
  v6 = 0;
  result = MiGetAweInfoPartition(v3);
  v8 = *(_DWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 16);
  v10 = (_BYTE *)*a2;
  v33 = result;
  v36 = v9;
  if ( (v8 & 4) != 0 )
  {
    if ( v10 )
    {
      v11 = (__int64)&v10[-*(_QWORD *)((char *)&stru_140E2ED08.116 + 4)] >> 3;
      if ( (v11 & 0x3FFFFF) != 0 )
      {
        do
        {
          v11 &= 0x3FFFFFuLL;
          v12 = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v11) >> 17;
          v4 = v12 ^ (v12 ^ v4) & 0xFFFFFFFFFFC00000uLL;
          result = MiFreePhysicalRange(v12, v9 * v11);
          LODWORD(v11) = v4;
        }
        while ( (v4 & 0x3FFFFF) != 0 );
      }
    }
    return result;
  }
  if ( v9 != 1 )
  {
    v13 = -1LL;
    v31 = 0LL;
    v14 = 0LL;
    if ( !v10 )
      return result;
    while ( 1 )
    {
      LeafPfnBuddy = (_BYTE *)MiGetLeafPfnBuddy(v10, 0LL);
      v5 += v9;
      v17 = ((unsigned __int64)((unsigned __int128)((__int64)&v10[-v15] * (__int128)v16) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((__int64)&v10[-v15] * (__int128)v16) >> 64) >> 3);
      MiReadyLargeAwePageForFree(v10);
      v18 = *((_QWORD *)v10 + 5) >> 43;
      if ( v13 == -1 )
        goto LABEL_15;
      if ( (v18 & 0x3FF) != *v31 )
        goto LABEL_14;
      if ( v14 + v13 != v17 )
        break;
      v14 += v9;
LABEL_17:
      result = (__int64)LeafPfnBuddy;
      v19 = 0x2AAAAAAAAAAAAAABLL;
      v10 = LeafPfnBuddy;
      if ( !LeafPfnBuddy )
      {
        v3 = a1;
        if ( v14 )
          result = MiFreeContiguousLargePageRun(a1, v13, v14);
        goto LABEL_39;
      }
    }
    if ( v9 + v17 == v13 )
    {
      v14 += v9;
    }
    else
    {
LABEL_14:
      MiFreeContiguousLargePageRun(a1, v13, v14);
      v18 = *((_QWORD *)v10 + 5) >> 43;
LABEL_15:
      v14 = v9;
      v31 = *(_WORD **)(stru_140E2ED08.ThreadLock + 8 * (v18 & 0x3FF));
    }
    v13 = v17;
    goto LABEL_17;
  }
  if ( v10 )
  {
    do
    {
      v35 = MiGetLeafPfnBuddy(v10, 0LL);
      v22 = (unsigned __int128)((__int64)(v10 + 0x220000000000LL) * (__int128)v21) >> 64;
      v23 = (unsigned __int64)v22 >> 63;
      v34 = ((unsigned __int64)v22 >> 63) + (v22 >> 3);
      CurrentIrql = KeGetCurrentIrql();
      v30 = CurrentIrql;
      if ( CurrentIrql != (_BYTE)v20 )
        __writecr8(v20);
      if ( KiIrqlFlags )
      {
        LOBYTE(v22) = v20;
        LOBYTE(v23) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v23, v22);
      }
      LODWORD(v31) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *((__int64 *)v10 + 3) < 0 );
      }
      *((_QWORD *)v10 + 3) = (*((_QWORD *)v10 + 3) + 1LL) ^ (*((_QWORD *)v10 + 3) ^ (*((_QWORD *)v10 + 3) + 1LL)) & 0xC000000000000000uLL;
      *((_QWORD *)v10 + 2) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      v25 = v30;
      if ( v30 < 2u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
          v25 = v30;
        }
        __writecr8(v25);
      }
      if ( v6 == 512 )
      {
        BugCheckParameter2 = 0LL;
        v38 = 135216;
        v39 = 0LL;
        v40 = 0x200000LL;
        MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, v3);
        v5 += 512LL;
        v26 = (__int64 *)v41;
        v6 = 0;
      }
      else
      {
        v26 = (__int64 *)LeafPfnBuddy;
      }
      ++v6;
      *v26 = v34;
      result = v35;
      LeafPfnBuddy = v26 + 1;
      v19 = 2LL;
      v10 = (_BYTE *)v35;
    }
    while ( v35 );
    v9 = v36;
    if ( v6 )
    {
      HIWORD(v38) = 2;
      v40 = v6 << 12;
      BugCheckParameter2 = 0LL;
      LOWORD(v38) = 8 * (v6 + 6);
      v39 = 0LL;
      MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, v3);
      result = v6;
      v5 += v6;
    }
LABEL_39:
    if ( v5 )
    {
      v27 = v33;
      v28 = -v5;
      _InterlockedAdd64((volatile signed __int64 *)(v33 + 23464), -v5);
      result = *(unsigned int *)(v3 + 8);
      if ( (result & 1) != 0 )
      {
        result = MiReturnProcessPhysicalPages(KeGetCurrentThread()->ApcState.Process, v5, v28, v19);
        v27 = v33;
      }
      if ( v9 != 1 )
        _InterlockedAdd64((volatile signed __int64 *)(v27 + 23488), v28);
    }
  }
  return result;
}
