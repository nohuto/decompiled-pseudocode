/*
 * XREFs of ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x18008D178
 * Callers:
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18014C050 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x180173FB4 (-UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18008CBC0 (-clear@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18008CC18 (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 */

void __fastcall CVisual::ClearAllBackdropVisualImages(CVisual *this)
{
  __int64 v1; // r8
  __int64 v3; // rax
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  _QWORD *i; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 28);
  if ( *(int *)v1 >= 0 )
    goto LABEL_6;
  v3 = *(unsigned int *)(v1 + 4);
  v4 = (_BYTE *)(v1 + 8);
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 1 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_13;
    }
    goto LABEL_4;
  }
LABEL_13:
  if ( (unsigned int)v5 < (unsigned int)v3 )
  {
LABEL_4:
    v6 = (_QWORD ***)(v1 + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v5);
    goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  v7 = *v6;
  if ( v7 )
  {
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
      detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear(i - 26);
  }
LABEL_6:
  v8 = (__int64)(*((_QWORD *)this + 59) - *((_QWORD *)this + 58)) >> 3;
  if ( v8 )
  {
    v9 = 8 * v8;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, *((_QWORD *)this + 58), v8);
    detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(v10, v9 + v10);
    *((_QWORD *)this + 59) -= v9;
  }
}
