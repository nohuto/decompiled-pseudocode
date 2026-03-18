/*
 * XREFs of ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802088B0
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x180122110 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::_lambda_1_ @ 0x18020897C (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--_lambda_1_.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18020899C (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

void __fastcall CCaptureRenderTarget::AddCursorInvalidRects(CVisualTree **this)
{
  struct CVisualTree *v2; // r11
  CVisual *v3; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // r10
  char v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+50h] [rbp+17h] BYREF
  __int128 v12; // [rsp+58h] [rbp+1Fh]
  __int128 v13; // [rsp+68h] [rbp+2Fh]
  __int64 (__fastcall ***v14)(); // [rsp+88h] [rbp+4Fh]
  char v15; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+6Fh] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+B0h] [rbp+77h] BYREF

  RootVisualTree = CVisualTree::GetRootVisualTree(this[14]);
  v16 = *((_QWORD *)v2 + 9);
  if ( RootVisualTree == v2 && this[327] )
  {
    v3 = this[327];
    do
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v3);
      if ( VisualTreeNoRef )
        RootVisualTree = VisualTreeNoRef;
      v3 = *(CVisual **)(v5 + 88);
    }
    while ( v3 );
    v16 = v6;
  }
  v15 = 0;
  v7 = (__int128 *)CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::_lambda_1_(
                     (unsigned int)&v10,
                     (_DWORD)this,
                     (unsigned int)&RootVisualTree,
                     (unsigned int)&v15,
                     (__int64)&v16);
  v11 = off_1802E72C0;
  v12 = *v7;
  v8 = v7[1];
  v14 = &v11;
  v13 = v8;
  CComposition::ForEachCursorVisual(v9, &v11);
}
