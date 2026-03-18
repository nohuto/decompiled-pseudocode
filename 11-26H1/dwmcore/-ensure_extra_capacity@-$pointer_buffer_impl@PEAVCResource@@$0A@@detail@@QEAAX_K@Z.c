/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z @ 0x180160574
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0 (-reserve_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?replace@?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCDrawListEntry@@@2@@Z @ 0x180018594 (-replace@-$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@AEAAPEADPEAU-$aligned_storage_fo.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?size@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@AEBA_KXZ @ 0x1800E07D0 (-size@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@AEBA_KXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CResource *,0>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  void *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = detail::pointer_buffer_impl<CResource *,0>::size(a1);
  if ( (*(_DWORD *)a1 & 3) == 0 )
  {
LABEL_6:
    v5 = 1LL;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)a1 & 3) == 1LL )
    goto LABEL_15;
  if ( (*(_DWORD *)a1 & 3) != 2LL )
  {
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_6;
  }
  v5 = 0LL;
LABEL_7:
  while ( 1 )
  {
    result = v5 - v4;
    if ( result >= a2 )
      break;
    v7 = v4 + a2;
    if ( v4 + a2 >= v4 )
    {
      if ( v7 == 1 )
      {
        *a1 = 3LL;
      }
      else
      {
        v8 = operator new[](8 * v7 + 16);
        v9 = (__int64)(v8 + 2);
        *v8 = 0LL;
        v8[1] = 0LL;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, (__int64)(v8 + 2), v4);
        v10 = (void *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        v15 = v13;
        v16 = v14;
        v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                        &v15,
                        (__int64)(8 * v4) >> 3);
        std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
          v10,
          (__int64)v10 + 8 * v4,
          v11);
        v12 = (void *)detail::pointer_buffer_impl<CDrawListEntry *,0>::replace(a1, v9);
        operator delete(v12);
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16) = v4;
        result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        *(_QWORD *)(result - 8) = v7;
      }
      return result;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_15:
    v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 8);
  }
  return result;
}
