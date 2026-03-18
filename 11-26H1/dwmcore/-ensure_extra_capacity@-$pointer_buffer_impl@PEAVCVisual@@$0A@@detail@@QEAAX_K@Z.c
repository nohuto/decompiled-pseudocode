/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEAAX_K@Z @ 0x180025864
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18002655C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@d.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@AEBA_KXZ @ 0x180018540 (-size@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@AEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CVisual *,0>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  void *v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int64 v10; // r12
  void *v11; // rdi
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = 0LL;
  v5 = detail::pointer_buffer_impl<CVisual *,0>::size(a1);
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v6 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 8);
    }
    else
    {
      v12 = (*(_DWORD *)a1 & 3) - 2LL;
      if ( (*(_DWORD *)a1 & 3) != 2LL )
        goto LABEL_15;
      v6 = 0LL;
    }
    goto LABEL_3;
  }
  while ( 1 )
  {
    v6 = 1LL;
LABEL_3:
    result = v6 - v5;
    if ( result >= a2 )
      break;
    v8 = v5 + a2;
    if ( v5 + a2 >= v5 )
    {
      if ( v8 == 1 )
      {
        *a1 = 3LL;
      }
      else
      {
        v9 = operator new[](8 * v8 + 16);
        v10 = (unsigned __int64)(v9 + 2);
        *v9 = 0LL;
        v9[1] = 0LL;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, (__int64)(v9 + 2), v5);
        v11 = (void *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        v15 = v13;
        v16 = v14;
        stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v15, (__int64)(8 * v5) >> 3);
        std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
          v11,
          (__int64)v11 + 8 * v5,
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
        *a1 = v10 | 1;
        operator delete(v4);
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16) = v5;
        result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        *(_QWORD *)(result - 8) = v8;
      }
      return result;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_15:
    if ( v12 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  return result;
}
