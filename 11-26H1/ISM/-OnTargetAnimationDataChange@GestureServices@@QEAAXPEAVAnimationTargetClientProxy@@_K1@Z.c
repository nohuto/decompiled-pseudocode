/*
 * XREFs of ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180145C80
 * Callers:
 *     ?OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x180078A50 (-OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?OnConnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x18007B760 (-OnConnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180149130 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 * Callees:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006B61C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180092D04 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$hash.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180149D3C (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 */

void __fastcall GestureServices::OnTargetAnimationDataChange(
        GestureServices *this,
        struct AnimationTargetClientProxy *a2,
        __int64 a3,
        __int64 a4)
{
  GestureHandler *v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct AnimationTargetClientProxy *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  if ( a3 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find(
      (_QWORD *)this + 33,
      &v11,
      (const unsigned __int8 *)&v12);
    if ( v11 != *((struct AnimationTargetClientProxy **)this + 34) )
    {
      v6 = (GestureHandler *)*((_QWORD *)v11 + 3);
      v7 = *((_DWORD *)v6 + 59);
      if ( !v7 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x183,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
          (const char *)0x8000FFFFLL,
          v9);
      v8 = v7 - 1;
      *((_DWORD *)v6 + 59) = v8;
      if ( !v8 && !*((_DWORD *)v6 + 58) )
      {
        GestureHandler::SendAnimationEndedIfNeeded(v6);
        GestureHandler::CleanupAnimationDataIfNeeded(v6);
      }
    }
  }
  if ( a4 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find(
      (_QWORD *)this + 33,
      &v12,
      (const unsigned __int8 *)&v13);
    if ( v12 != *((_QWORD *)this + 34) )
      ++*(_DWORD *)(*(_QWORD *)(v12 + 24) + 236LL);
  }
}
