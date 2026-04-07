/*
 * XREFs of ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210
 * Callers:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000C1A4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18000C584 (--$_Freenode@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEA.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ @ 0x18000D090 (-EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ.c)
 *     ??$emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18000D120 (--$emplace@AEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@-$list@V-$weak_ptr@VCCache.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000D360 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowBorder::CCachedBorderBrush::GetBorderBrush(
        float a1,
        int a2,
        float *a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  signed __int32 v9; // ecx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int128 v16; // kr00_16
  __int64 v17; // rdx
  __int64 *v18; // rcx
  const char *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  int BorderBrush; // eax
  unsigned int v27; // ebx
  int v28; // [rsp+20h] [rbp-58h]
  unsigned __int128 v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h]
  __int64 v31; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CWindowBorder::CCachedBorderBrush::EnsureBorderBrushCache();
  v10 = *(__int64 **)(CWindowBorder::CCachedBorderBrush::s_cache + 24);
  while ( 1 )
  {
    v10 = (__int64 *)*v10;
    if ( v10 == *(__int64 **)(CWindowBorder::CCachedBorderBrush::s_cache + 24) )
      break;
    v29 = 0LL;
    v11 = v10[3];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      while ( v12 )
      {
        v9 = v12 + 1;
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
        if ( v13 == v12 )
        {
          v14 = v10[2];
          *(_QWORD *)&v29 = v14;
          v15 = v10[3];
          *((_QWORD *)&v29 + 1) = v15;
          v16 = __PAIR128__(v15, v14);
          goto LABEL_8;
        }
      }
    }
    v16 = v29;
LABEL_8:
    if ( *(float *)(v16 + 16) == a1
      && *(_DWORD *)(v16 + 20) == a2
      && *(float *)_mm_loadu_si128((const __m128i *)(v16 + 28)).m128i_i32 == *a3
      && *(float *)(v16 + 32) == a3[1]
      && *(float *)(v16 + 36) == a3[2]
      && *(float *)(v16 + 40) == a3[3]
      && *(_DWORD *)(v16 + 44) == a4
      && *(_DWORD *)(v16 + 24) == a5 )
    {
      v17 = CWindowBorder::CCachedBorderBrush::s_cache;
      if ( v10 != **(__int64 ***)(CWindowBorder::CCachedBorderBrush::s_cache + 24) )
      {
        *(_QWORD *)v10[1] = *v10;
        v18 = (__int64 *)*v10;
        v18[1] = v10[1];
        --*(_QWORD *)(v17 + 32);
        std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Freenode<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
          v18,
          v10);
        v20 = CWindowBorder::CCachedBorderBrush::s_cache + 24;
        v21 = **(_QWORD **)(CWindowBorder::CCachedBorderBrush::s_cache + 24);
        if ( *(_QWORD *)(CWindowBorder::CCachedBorderBrush::s_cache + 32) == 0x7FFFFFFFFFFFFFFLL )
          std::_Dwm_Xlength_error(v19);
        v30 = CWindowBorder::CCachedBorderBrush::s_cache + 24;
        v31 = 0LL;
        v22 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
        v23 = (_QWORD *)v22;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_QWORD *)(v22 + 24) = 0LL;
        if ( *((_QWORD *)&v16 + 1) )
        {
          *(_OWORD *)(v22 + 16) = v16;
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 12LL));
        }
        ++*(_QWORD *)(v20 + 8);
        v24 = *(_QWORD **)(v21 + 8);
        *v23 = v21;
        v23[1] = v24;
        *(_QWORD *)(v21 + 8) = v23;
        *v24 = v23;
      }
      std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(a6, &v29);
      if ( *((_QWORD *)&v16 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
          std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)&v16 + 1));
        }
      }
      return 0LL;
    }
    if ( *((_QWORD *)&v16 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)&v16 + 1));
    }
  }
  BorderBrush = CWindowBorder::CCachedBorderBrush::CreateBorderBrush(v9, a2, (_DWORD)a3, a4, a5, (__int64)a6);
  v27 = BorderBrush;
  if ( BorderBrush >= 0 )
  {
    std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::emplace<std::shared_ptr<CWindowBorder::CCachedBorderBrush> &>(
      CWindowBorder::CCachedBorderBrush::s_cache + 24,
      &v29,
      **(_QWORD **)(CWindowBorder::CCachedBorderBrush::s_cache + 24),
      a6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderBrush,
    v28);
  return v27;
}
