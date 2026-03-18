/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z @ 0x18001847C
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@AEBA_KXZ @ 0x180018540 (-size@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@AEBA_KXZ.c)
 *     ?replace@?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCDrawListEntry@@@2@@Z @ 0x180018594 (-replace@-$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@AEAAPEADPEAU-$aligned_storage_fo.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x180141C90 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = detail::pointer_buffer_impl<CVisual *,0>::size();
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v7 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 8);
      goto LABEL_6;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
      goto LABEL_12;
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v7 = 1LL;
LABEL_6:
  while ( 1 )
  {
    result = v7 - v4;
    if ( result >= a2 )
      break;
    v6 = v4 + a2;
    if ( v4 + a2 >= v4 )
    {
      if ( v6 == 1 )
      {
        *a1 = 3LL;
      }
      else
      {
        v8 = operator new[](8 * v6 + 16);
        v17 = 0LL;
        *v8 = 0LL;
        v9 = (__int64)(v8 + 2);
        v8[1] = 0LL;
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v17);
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, v9, v4);
        v10 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
        v14 = v12;
        v15 = v13;
        std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
          &v12,
          v10,
          v10 + 8 * v4,
          &v14);
        v17 = 0LL;
        v11 = (void *)detail::pointer_buffer_impl<CDrawListEntry *,0>::replace(a1, v9);
        operator delete(v11);
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16) = v4;
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 8) = v6;
        return std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v17);
      }
      return result;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_12:
    v7 = 0LL;
  }
  return result;
}
