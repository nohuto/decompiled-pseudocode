/*
 * XREFs of MiShareValidPage @ 0x1407096FC
 * Callers:
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiActivePageCombineCandidate @ 0x1402954F0 (MiActivePageCombineCandidate.c)
 *     MiVadSupportsCombine @ 0x1402E9A8C (MiVadSupportsCombine.c)
 *     MiSharePageGetFlushList @ 0x1402E9CD8 (MiSharePageGetFlushList.c)
 *     MiMakeCombineCandidateClean @ 0x14031B3EC (MiMakeCombineCandidateClean.c)
 *     MiConfirmPageIsZero @ 0x14031C190 (MiConfirmPageIsZero.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiPageMightBeZero @ 0x140463D40 (MiPageMightBeZero.c)
 *     MiCheckProcessCombineSequence @ 0x1404919D0 (MiCheckProcessCombineSequence.c)
 *     MiGetCombineDomain @ 0x14049C990 (MiGetCombineDomain.c)
 */

__int64 __fastcall MiShareValidPage(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  char v6; // bl
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 *v15; // r11
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 FlushList; // rax
  BOOL IsZero; // eax
  __int64 *ProcessorFlushList; // rax
  int v24; // esi
  ULONG_PTR v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 CombineDomain; // rax
  __int64 v30; // r8
  __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v32; // [rsp+90h] [rbp+8h] BYREF
  int v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  v6 = a3;
  v31 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(v3 + 32);
  v10 = *(_QWORD *)(v31 + 104);
  v11 = *(_DWORD *)(v31 + 152);
  v35 = v7;
  v34 = v10;
  v32 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !(unsigned int)MiActivePageCombineCandidate(0xFFFFDE0000000000uLL, v31, v12, (__int64)v32) )
    return 0LL;
  v16 = 0LL;
  if ( v11 == 1 )
  {
    v16 = MiVadSupportsCombine(v14, v8);
    if ( !v16 )
      return 0LL;
    v15 = v32;
  }
  v17 = *(_DWORD *)(a2 + 32);
  v18 = *(_QWORD *)(a2 + 8);
  v33 = v17;
  if ( (v6 & 0x40) != 0 || (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 28) < 8u )
    {
      v19 = 176LL;
      goto LABEL_14;
    }
    MiMakeCombineCandidateClean(v15, v16);
    MiFlushSingleTbEntry(v8, v11 != 1);
  }
  else
  {
    if ( v18 != qword_140E361A8 )
      goto LABEL_30;
    if ( (v17 & 0x18) == 0 && (v6 & 0x20) != 0 && *(_DWORD *)(a1 + 28) < 3u )
    {
      v19 = 216LL;
LABEL_14:
      FlushList = MiSharePageGetFlushList((__int64 *)a1, v13);
      MiInsertTbFlushEntry(FlushList, v8, 1LL, 0);
      *(_QWORD *)a2 = *(_QWORD *)(a1 + v19);
      *(_QWORD *)(a1 + v19) = a2;
      return 0LL;
    }
  }
  if ( v18 == qword_140E361A8 && MiPageMightBeZero(v9, v12, (__int64)v32) )
  {
    LODWORD(v32) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    IsZero = MiConfirmPageIsZero(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( IsZero )
    {
      ProcessorFlushList = *(__int64 **)(a1 + 120);
      if ( ProcessorFlushList )
      {
        v24 = 0;
      }
      else
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        *(_QWORD *)(a1 + 120) = ProcessorFlushList;
        v24 = 1;
      }
      v25 = (ULONG_PTR)(ProcessorFlushList + 517);
      MiInitializeTbFlushList((__int64)(ProcessorFlushList + 517), v9, *((_DWORD *)ProcessorFlushList + 1037), 2, 1);
      MiInsertTbFlushEntry(v26, v8, 1LL, 0);
      MiFreeWsleList(v9, v27, v25, 0);
      if ( v24 )
      {
        MiReleaseProcessorFlushList();
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v28 = v34;
      ++*(_QWORD *)(a1 + 32);
      ++*(_DWORD *)(a1 + 132);
      ++*(_QWORD *)(v28 + 8);
      return 0LL;
    }
  }
LABEL_30:
  if ( *(_QWORD *)(a2 + 24) != qword_140E2EBD0 && v11 == 1 )
  {
    CombineDomain = MiGetCombineDomain(1, v9);
    if ( v30 != CombineDomain
      || (*(_DWORD *)(v35 + 1876) & 0x1000) != 0
      || !MiCheckProcessCombineSequence(v35, *(_DWORD *)(v31 + 288)) )
    {
      return 0LL;
    }
  }
  if ( (v33 & 0x18) != 0 )
    *(_DWORD *)(a1 + 20) |= 4u;
  return 1LL;
}
