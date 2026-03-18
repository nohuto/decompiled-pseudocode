/*
 * XREFs of ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x14011E6FC
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FE898 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     ApiSetEditionContactVisualization @ 0x14011E770 (ApiSetEditionContactVisualization.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualization(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  __int64 v8; // rax

  v4 = 0;
  if ( a4 )
  {
    v8 = HMValidateHandleWithDescriptor(a3, 0x13u, 0);
    if ( v8 )
      v4 = *(_DWORD *)(*(_QWORD *)(v8 + 456) + 816LL);
    else
      v4 = 1;
  }
  return ApiSetEditionContactVisualization(*((_DWORD *)a2 + 12), *((_QWORD *)a2 + 30), a3, a4, v4);
}
