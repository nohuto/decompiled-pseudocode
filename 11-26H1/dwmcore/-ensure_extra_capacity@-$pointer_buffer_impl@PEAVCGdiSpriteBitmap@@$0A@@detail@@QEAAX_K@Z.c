/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEAAX_K@Z @ 0x1800DFDD0
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCGdiSpriteBitmap@@_K0@Z @ 0x1800DF9D4 (-reserve_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitma.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?size@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@AEBA_KXZ @ 0x1800E07D0 (-size@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@AEBA_KXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  void *v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r13
  _QWORD *v10; // rax
  unsigned __int64 v11; // r12
  void *v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = 0LL;
  v5 = detail::pointer_buffer_impl<CResource *,0>::size();
  if ( (*(_DWORD *)a1 & 3) == 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)a1 & 3) == 1LL )
  {
    v7 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 8);
  }
  else
  {
    v6 = (*(_DWORD *)a1 & 3) - 2LL;
    if ( (*(_DWORD *)a1 & 3) != 2LL )
      goto LABEL_15;
    v7 = 0LL;
  }
  while ( 1 )
  {
    result = v7 - v5;
    if ( result >= a2 )
      break;
    v9 = v5 + a2;
    if ( v5 + a2 >= v5 )
    {
      if ( v9 == 1 )
      {
        *a1 = 3LL;
      }
      else
      {
        v10 = operator new[](8 * v9 + 16);
        v11 = (unsigned __int64)(v10 + 2);
        *v10 = 0LL;
        v10[1] = 0LL;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, (__int64)(v10 + 2), v5);
        v12 = (void *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        v15 = v13;
        v16 = v14;
        stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v15, (__int64)(8 * v5) >> 3);
        std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
          v12,
          (__int64)v12 + 8 * v5,
          (void *)(v13 + 8 * v14));
        if ( (*(_DWORD *)a1 & 3) != 0 )
        {
          if ( (*(_DWORD *)a1 & 3) == 1LL )
          {
            v4 = (void *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16);
          }
          else if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
          {
            ModuleFailFastForHRESULT(-2147418113, retaddr);
          }
        }
        *a1 = v11 | 1;
        operator delete(v4);
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16) = v5;
        result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        *(_QWORD *)(result - 8) = v9;
      }
      return result;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_15:
    if ( v6 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_18:
    v7 = 1LL;
  }
  return result;
}
