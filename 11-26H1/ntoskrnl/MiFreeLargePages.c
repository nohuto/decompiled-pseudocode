/*
 * XREFs of MiFreeLargePages @ 0x1403D0F00
 * Callers:
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiLargePageHasNoDanglingReferences @ 0x1403D00CC (MiLargePageHasNoDanglingReferences.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140716898 (MiFreeLargeProcessPagesToCache.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  unsigned __int64 DemandZeroPte; // rsi
  _KPROCESS *Process; // rcx
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int64 Blink_high; // rcx
  __int64 v12; // rdx
  int v13; // edi
  ULONG_PTR v14; // r15
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  _QWORD *v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // r8
  volatile signed __int32 *v40; // r12
  int v41; // ecx
  unsigned __int8 v42; // r14
  int v43; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h]
  int v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+44h] [rbp-BCh]
  __int64 v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  unsigned __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h]
  _QWORD *v62; // [rsp+B0h] [rbp-50h]
  _QWORD *v63; // [rsp+B8h] [rbp-48h]
  _QWORD v64[32]; // [rsp+C0h] [rbp-40h] BYREF

  v59 = a1;
  v63 = a4;
  v62 = a3;
  v6 = 0;
  v52 = 0LL;
  v7 = 0LL;
  v53 = 0LL;
  v44 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v61 = DemandZeroPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v60 = ActiveProcessors[4].StaticBitmap[14];
  v56 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high);
  LODWORD(ActiveProcessors) = (*(_DWORD *)(a2 + 32) >> 22) & 3;
  v46 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
  v48 = (int)ActiveProcessors;
  v13 = MiPageToNode((a2 + 0x220000000000LL) / 48);
LABEL_2:
  v14 = (a2 + 0x220000000000LL) / 48;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFELL) != 0 )
    v58 = 8 * (*(_QWORD *)a2 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v58 = 0LL;
  v54 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v47 = (*(_DWORD *)(a2 + 32) >> 22) & 3;
  v15 = MiPageToNode(v14);
  v50 = v15;
  v16 = v46;
  if ( v54 == v46 && v47 == v48 && v15 == v13 )
    goto LABEL_15;
  while ( 1 )
  {
    if ( v6 )
    {
      MiFreeLargeProcessPagesToCache(v64, v6);
      v16 = v46;
      v6 = 0;
    }
    if ( (a5 & 1) == 0 && v16 != v56 )
      MiReturnCrossPartitionCharges(v16, 2u, 1, v49);
    v13 = v15;
    v17 = v49;
    v49 = 0LL;
    v18 = v17 + v52;
    v44 = 0LL;
    if ( v46 != v59 )
      v18 = v52;
    v19 = v18;
    v52 = v18;
    v20 = v53 + v7;
    if ( v46 != v59 )
      v20 = v53;
    v21 = v20;
    v53 = v20;
    v46 = v54;
    v48 = v47;
    v22 = v17 + v55;
    v55 += v17;
    if ( !a2 )
      break;
LABEL_15:
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
    v24 = PfnPageSizeIndex;
    v25 = MiPageSizes[PfnPageSizeIndex];
    v49 += v25;
    v45 = v25;
    if ( PfnPageSizeIndex != 2 )
    {
      v26 = v44;
      if ( PfnPageSizeIndex <= 1 )
        goto LABEL_22;
      goto LABEL_17;
    }
    if ( v46 != v56
      || !v60
      || !(unsigned int)MiLargePageHasNoDanglingReferences(a2)
      || (*(_QWORD *)(a2 + 40) & 0x20000000000LL) != 0 )
    {
      goto LABEL_17;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v33) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v33, 2LL);
    }
    v43 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v43);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(a2 + 16) = DemandZeroPte;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v35 = v6++;
    v64[v35] = v14;
    if ( v6 == 32 )
    {
      v36 = 1LL;
      v14 = v64[0] & 0xFFFFFFFFFFFFFE00uLL;
      while ( v36 < 0x20 )
      {
        if ( (v64[v36] & 0xFFFFFFFFFFFFFE00uLL) != v14 )
        {
          v14 = -1LL;
          MiFreeLargeProcessPagesToCache(v64, 32LL);
          v7 = 32 * v45 + v44;
          v44 = v7;
          v6 = 0;
          goto LABEL_18;
        }
        ++v36;
      }
      v37 = 48 * v14 - 0x220000000000LL;
      v38 = v37;
      v39 = KeGetCurrentIrql();
      v57 = v39;
      if ( (_BYTE)v39 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v36) = v39;
        KiRaiseIrqlProcessIrqlFlags(v36, 2LL);
      }
      v40 = (volatile signed __int32 *)(v37 + 24);
      v43 = 0;
      v51 = 48 * v45;
      do
      {
        LODWORD(v45) = 0;
        while ( _interlockedbittestandset64(v40, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)v40 < 0 );
        }
        v41 = v43;
        if ( v43 )
        {
          if ( (*(_QWORD *)(v38 + 40) & 0x20000000000LL) != 0 )
          {
            LODWORD(v45) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v45);
              while ( *(__int64 *)(v37 + 24) < 0 );
            }
            *(_QWORD *)(v37 + 40) |= 0x20000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v41 = v43;
          }
          *(_DWORD *)(v38 + 36) &= 0xE7FFFFFF;
          *(_DWORD *)(v38 + 32) = *(_DWORD *)(v38 + 32) & 0xFFF8FFFF | 0x60000;
        }
        else
        {
          *(_DWORD *)(v38 + 36) = *(_DWORD *)(v38 + 36) & 0xE7FFFFFF | 0x10000000;
        }
        _InterlockedAnd64((volatile signed __int64 *)v40, 0x7FFFFFFFFFFFFFFFuLL);
        v38 += v51;
        v40 = (volatile signed __int32 *)((char *)v40 + v51);
        v43 = v41 + 1;
      }
      while ( (unsigned int)(v41 + 1) < 0x20 );
      v15 = v50;
      DemandZeroPte = v61;
      v42 = v57;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v57);
      __writecr8(v42);
      v26 = v44;
      v24 = 1;
      v6 = 0;
LABEL_22:
      _mm_lfence();
      v29 = v24 + 1;
      v30 = MiPageSizes[v24] / (unsigned __int64)MiPageSizes[v29];
      v31 = (_QWORD *)(48 * v14 - 0x220000000000LL);
      v32 = 1;
      if ( v30 > 1 )
      {
        do
        {
          v31 += 6 * MiPageSizes[v29];
          if ( *v31 )
            *v31 = 0LL;
          ++v32;
        }
        while ( v32 < v30 );
        v44 = v26;
      }
LABEL_17:
      v27 = MiFreeLargePageMemory(v14, v24, 0);
      v7 = v27 + v44;
      v44 += v27;
      goto LABEL_18;
    }
    v7 = v44;
LABEL_18:
    a2 = v58;
    v16 = v46;
    if ( v58 )
      goto LABEL_2;
  }
  *v62 = v21;
  *v63 = v22;
  return v19 - v21;
}
