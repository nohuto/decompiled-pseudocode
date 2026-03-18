/*
 * XREFs of ??$_Emplace_back_internal@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXAEAPEAVCMegaRectBatchCommand@@@Z @ 0x1800E92AC
 * Callers:
 *     ??$emplace_back@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAAAEAPEAVCMegaRectBatchCommand@@AEAPEAV2@@Z @ 0x18025EC10 (--$emplace_back@AEAPEAVCMegaRectBatchCommand@@@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@P.c)
 * Callees:
 *     ?_Growmap@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAX_K@Z @ 0x1800E93A0 (-_Growmap@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::deque<CMegaRectBatchCommand *>::_Emplace_back_internal<CMegaRectBatchCommand * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque<CMegaRectBatchCommand *>::_Growmap(a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 2 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 1) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v9;
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((v6 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL))) + 8 * (v6 & 1)) = *a2;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
