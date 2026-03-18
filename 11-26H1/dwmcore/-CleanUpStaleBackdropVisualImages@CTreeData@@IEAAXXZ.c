/*
 * XREFs of ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x1801B266C
 * Callers:
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801B25AC (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B28F0 (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CTreeData::CleanUpStaleBackdropVisualImages(CTreeData *this)
{
  _QWORD *v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rbp
  void **v6; // rdi
  void **v7; // rax
  __int64 v8; // rbx
  char *v9; // [rsp+50h] [rbp+8h] BYREF
  char *v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 144);
  v3 = *((_QWORD *)this + 18);
  if ( *((_QWORD *)this + 19) != v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
    while ( v3 != *((_QWORD *)this + 19) )
    {
      v5 = *(_QWORD *)v3;
      if ( (unsigned __int64)(v4 - *(_QWORD *)(*(_QWORD *)v3 + 1776LL)) > 0xA )
      {
        v6 = (void **)DwmDbg::DbgString::DbgString(&v9, word_1802F327A);
        v7 = (void **)DwmDbg::DbgString::DbgString(&v10, "BVI-StaleDelete");
        CBackdropVisualImage::LogEtwEvent(v5, v7, v6);
        v8 = (v3 - *v1) >> 3;
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
          v1,
          v8,
          1LL);
        v3 = *v1 + 8 * v8;
      }
      else
      {
        v3 += 8LL;
      }
    }
  }
}
