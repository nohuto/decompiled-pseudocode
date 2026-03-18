/*
 * XREFs of ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018CB8C
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::AddBatchCommand(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = *a2;
  v9 = v4;
  v5 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v6 = -2147024362;
    v8 = 183;
    goto LABEL_7;
  }
  v6 = 0;
  if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v9);
    if ( v6 >= 0 )
      goto LABEL_4;
    v8 = 194;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x90u, 0LL);
    return (unsigned int)v6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = v4;
  *(_DWORD *)(a1 + 24) = v5;
LABEL_4:
  *a2 = 0LL;
  return (unsigned int)v6;
}
