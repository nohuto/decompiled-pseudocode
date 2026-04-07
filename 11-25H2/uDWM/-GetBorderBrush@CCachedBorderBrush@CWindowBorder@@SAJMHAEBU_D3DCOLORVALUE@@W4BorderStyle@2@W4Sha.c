/*
 * XREFs of ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003E3B0
 * Callers:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18003E108 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 * Callees:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003BB18 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18003E990 (--$emplace@AEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@-$list@V-$weak_ptr@VCCache.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowBorder::CCachedBorderBrush::GetBorderBrush(
        float a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        std::_Ref_count_base **a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  std::_Ref_count_base *v13; // rsi
  volatile signed __int32 *v14; // rdi
  int BorderBrush; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  std::_Ref_count_base *v18; // rcx
  const struct std::nothrow_t *v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  volatile signed __int32 *v25; // rbx
  int v27; // [rsp+20h] [rbp-50h]
  std::_Ref_count_base *v28[2]; // [rsp+30h] [rbp-40h]
  char v29[24]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v9 = CWindowBorder::CCachedBorderBrush::s_cache;
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( v9 == CWindowBorder::CCachedBorderBrush::s_cache )
      break;
    *(_OWORD *)v28 = 0LL;
    v10 = *(_QWORD *)(v9 + 24);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
        if ( v12 == v11 )
        {
          v13 = *(std::_Ref_count_base **)(v9 + 16);
          v28[0] = v13;
          v14 = *(volatile signed __int32 **)(v9 + 24);
          v28[1] = (std::_Ref_count_base *)v14;
          goto LABEL_8;
        }
      }
    }
    v14 = 0LL;
    v13 = 0LL;
LABEL_8:
    if ( *(float *)v13 == a1
      && *((_DWORD *)v13 + 1) == a2
      && *(float *)_mm_loadu_si128((const __m128i *)((char *)v13 + 12)).m128i_i32 == *(float *)a3
      && *((float *)v13 + 4) == *(float *)(a3 + 4)
      && *((float *)v13 + 5) == *(float *)(a3 + 8)
      && *((float *)v13 + 6) == *(float *)(a3 + 12)
      && *((_DWORD *)v13 + 7) == a4
      && *((_DWORD *)v13 + 2) == a5 )
    {
      if ( v9 != *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache )
      {
        **(_QWORD **)(v9 + 8) = *(_QWORD *)v9;
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = *(_QWORD *)(v9 + 8);
        --qword_180119970;
        v18 = *(std::_Ref_count_base **)(v9 + 24);
        if ( v18 )
          std::_Ref_count_base::_Decwref(v18);
        std::_Deallocate<16,0>(v9, 32LL);
        v21 = *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache;
        if ( qword_180119970 == 0x7FFFFFFFFFFFFFFLL )
          std::_Dwm_Xlength_error(v20);
        v22 = operator new[](0x20uLL, v19);
        v23 = v22;
        v22[2] = 0LL;
        v22[3] = 0LL;
        if ( v14 )
        {
          v22[2] = v13;
          v22[3] = v14;
          _InterlockedIncrement(v14 + 3);
          v14 = (volatile signed __int32 *)v28[1];
          v13 = v28[0];
        }
        ++qword_180119970;
        v24 = *(_QWORD **)(v21 + 8);
        *v23 = v21;
        v23[1] = v24;
        *(_QWORD *)(v21 + 8) = v23;
        *v24 = v23;
      }
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 2);
        v14 = (volatile signed __int32 *)v28[1];
        v13 = v28[0];
      }
      *a6 = v13;
      v25 = (volatile signed __int32 *)a6[1];
      a6[1] = (std::_Ref_count_base *)v14;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v25);
        }
        v14 = (volatile signed __int32 *)v28[1];
      }
      if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(std::_Ref_count_base *))v28[1])(v28[1]);
        std::_Ref_count_base::_Decwref(v28[1]);
      }
      return 0LL;
    }
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(std::_Ref_count_base *))v28[1])(v28[1]);
        std::_Ref_count_base::_Decwref(v28[1]);
      }
    }
  }
  BorderBrush = CWindowBorder::CCachedBorderBrush::CreateBorderBrush(a1, a2, (_OWORD *)a3, a4, a5, a6);
  v17 = BorderBrush;
  if ( BorderBrush >= 0 )
  {
    std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::emplace<std::shared_ptr<CWindowBorder::CCachedBorderBrush> &>(
      v16,
      v29,
      *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache,
      a6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14C,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderBrush,
    v27);
  return v17;
}
