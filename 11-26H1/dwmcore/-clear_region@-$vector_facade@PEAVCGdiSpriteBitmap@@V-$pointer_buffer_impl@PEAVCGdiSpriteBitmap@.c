/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001F564
 * Callers:
 *     ?erase_unchecked@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCGdiSpriteBitmap@@@2@V?$basic_iterator@QEAVCGdiSpriteBitmap@@@2@0@Z @ 0x1800DF678 (-erase_unchecked@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitm.c)
 *     ??1?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AA684 (--1-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detai.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 result; // rax
  void *v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  v6 = a2 + a3;
  v7 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(a1);
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1 )
    {
      v8 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_7;
    }
    if ( (*a1 & 3) == 2 )
    {
      v8 = 0LL;
      goto LABEL_7;
    }
    if ( (*a1 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v8 = (unsigned __int64)a1;
LABEL_7:
  result = (unsigned __int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v8, v7);
  if ( v6 != v7 )
  {
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, a2);
    v10 = (void *)(v8 + 8 * v6);
    v11 = v8 + 8 * v7;
    v15 = v13;
    v16 = v14;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v15, (v11 - (__int64)v10) >> 3);
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               v10,
               v11,
               (void *)(v13 + 8 * v14));
  }
  if ( a3 )
  {
    result = *(_DWORD *)a1 & 3;
    if ( (*(_DWORD *)a1 & 3) == 0 )
    {
LABEL_15:
      *a1 = 2LL;
      return result;
    }
    v12 = result - 1;
    if ( v12 )
    {
      result = v12 - 1;
      if ( result )
      {
        if ( result != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        if ( a3 != -1 )
          goto LABEL_15;
      }
    }
    else
    {
      result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
      *(_QWORD *)(result - 16) -= a3;
    }
  }
  return result;
}
