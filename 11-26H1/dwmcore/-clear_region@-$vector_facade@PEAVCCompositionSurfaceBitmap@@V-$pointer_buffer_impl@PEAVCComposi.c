/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E0654
 * Callers:
 *     ?erase_unchecked@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCCompositionSurfaceBitmap@@@2@V?$basic_iterator@QEAVCCompositionSurfaceBitmap@@@2@0@Z @ 0x1800DF6F8 (-erase_unchecked@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCComp.c)
 *     ??1?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800DF9A0 (--1-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurface.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  void *v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  v7 = a2 + a3;
  v8 = detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(a1);
  if ( v7 <= v8 )
  {
    v3 = *a1;
    if ( (*a1 & 3) != 0 )
    {
      if ( (*a1 & 3) == 1 )
        goto LABEL_3;
      if ( (*a1 & 3) == 2 )
      {
        v9 = 0LL;
        goto LABEL_4;
      }
      if ( (*a1 & 3) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v9 = (unsigned __int64)a1;
    goto LABEL_4;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_3:
  v9 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_4:
  result = (unsigned __int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v9, v8);
  if ( v7 != v8 )
  {
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, a2);
    v11 = (void *)(v9 + 8 * v7);
    v12 = v9 + 8 * v8;
    v16 = v14;
    v17 = v15;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v16, (v12 - (__int64)v11) >> 3);
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               v11,
               v12,
               (void *)(v14 + 8 * v15));
  }
  if ( a3 )
  {
    result = *(_DWORD *)a1 & 3;
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_13;
    v13 = result - 1;
    if ( !v13 )
    {
      result = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1);
      *(_QWORD *)(result - 16) -= a3;
      return result;
    }
    result = v13 - 1;
    if ( result )
    {
      if ( result != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( a3 != -1 )
LABEL_13:
        *a1 = 2LL;
    }
  }
  return result;
}
