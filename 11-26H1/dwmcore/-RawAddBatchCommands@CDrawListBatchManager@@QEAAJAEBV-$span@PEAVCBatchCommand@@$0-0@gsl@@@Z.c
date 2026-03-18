/*
 * XREFs of ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x180185CF0
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CDrawListBatchManager::RawAddBatchCommands(__int64 a1, const void **a2)
{
  unsigned int v2; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v4 = *(unsigned int *)a2;
  v5 = v2 + v4;
  if ( v2 + (unsigned int)v4 < v2 )
  {
    v7 = -2147024362;
    v8 = 183;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xA1u, 0LL);
    return v7;
  }
  if ( v5 <= *(_DWORD *)(a1 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8LL * v2), a2[1], 8 * v4);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v5;
    return result;
  }
  result = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, v4, (void *)a2[1]);
  v7 = result;
  if ( (int)result < 0 )
  {
    v8 = 194;
    goto LABEL_6;
  }
  return result;
}
