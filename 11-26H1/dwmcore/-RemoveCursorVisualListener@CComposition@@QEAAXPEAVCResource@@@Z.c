/*
 * XREFs of ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022B188
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801345AC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x180257890 (-ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURER.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CComposition::RemoveCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CComposition *v2; // rdi
  _QWORD *v4; // rsi
  const __m128i *trivial_8; // rax
  __int64 *v6; // rbp
  __int64 *i; // rbx
  struct CResource *VisualNoRef; // rax
  CComposition *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  v2 = g_pComposition;
  v4 = (_QWORD *)((char *)g_pComposition + 6152);
  trivial_8 = _std_find_trivial_8(
                *((const __m128i **)g_pComposition + 769),
                *((const __m128i **)g_pComposition + 770),
                (unsigned __int64)a2);
  std::vector<CLight *>::erase((__int64)v4, &v9, (__int64)trivial_8);
  v6 = (__int64 *)*((_QWORD *)v2 + 767);
  for ( i = (__int64 *)*((_QWORD *)v2 + 766); i != v6; i += 4 )
  {
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)i);
    if ( VisualNoRef )
      CResource::UnRegisterNotifierInternal(a2, VisualNoRef);
    if ( *v4 == *((_QWORD *)v2 + 770) )
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(i + 3);
  }
}
