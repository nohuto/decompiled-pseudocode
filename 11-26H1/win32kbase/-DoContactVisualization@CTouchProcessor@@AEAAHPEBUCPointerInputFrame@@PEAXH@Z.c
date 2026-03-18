/*
 * XREFs of ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x140065F04
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x140065B14 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 *     ApiSetEditionContactVisualization @ 0x140065F78 (ApiSetEditionContactVisualization.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualization(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        void *a3,
        int a4)
{
  int v4; // ebx
  const struct CPointerInputFrame *v6; // rdi
  __int64 v8; // rax

  v4 = 0;
  v6 = a2;
  if ( a4 )
  {
    LOBYTE(a2) = 19;
    v8 = HMValidateHandleWithDescriptor(a3, (__int64)a2, 0);
    if ( v8 )
      v4 = *(_DWORD *)(*(_QWORD *)(v8 + 456) + 816LL);
    else
      v4 = 1;
  }
  return ApiSetEditionContactVisualization(*((_DWORD *)v6 + 12), *((_QWORD *)v6 + 30), (_DWORD)a3, a4, v4);
}
