/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AED50
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18015A010 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801AC3D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1801AD9F4 (--$_Move_unchecked@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801ADE2C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AE248 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801AE9B0 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801AE9DC (-IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AF324 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  struct EdgyControllerClientProxy **v8; // rcx
  const char *v9; // r9
  _QWORD *v10; // rdx
  bool IsEdge; // al
  bool v12; // zf
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 *i; // rbx
  __int64 *j; // rsi
  __int64 *v20; // rbx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v23[4]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v6 = (__int64)Edge << 7;
  v7 = (_QWORD *)(v6 + *(_QWORD *)this);
  if ( Edge::IsClientPresent((__int64)v7, 2) )
  {
    if ( v7[13] == v7[14] )
    {
      if ( Edge::IsEdge(v8, a3) )
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v7 + 5);
    }
    else
    {
      IsEdge = Edge::IsEdge(v8, a3);
      _mm_lfence();
      v12 = !IsEdge;
      v13 = *(_QWORD *)this;
      if ( v12 )
      {
        v17 = *(_QWORD *)(v13 + v6 + 112);
        for ( i = *(__int64 **)(v13 + v6 + 104); i != (__int64 *)v17 && (struct EdgyControllerClientProxy *)*i != a3; ++i )
          ;
        if ( i != (__int64 *)v17 )
        {
          for ( j = i + 1; j != (__int64 *)v17; ++j )
          {
            if ( (struct EdgyControllerClientProxy *)*j != a3 )
              Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=(i++, j);
          }
          if ( i != (__int64 *)v17 )
          {
            v20 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
                               v17,
                               v7[14],
                               (__int64)i);
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
              v20,
              (__int64 *)v7[14]);
            v7[14] = v20;
          }
        }
      }
      else
      {
        v14 = *(__int64 **)(v13 + v6 + 104);
        v15 = *v14;
        if ( v7[5] != *v14 )
        {
          v22 = *v14;
          Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v22);
          v22 = v7[5];
          v7[5] = v15;
          Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v22);
        }
        v16 = *(_QWORD *)this;
        std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
          *(_QWORD *)(v16 + v6 + 104) + 8LL,
          *(_QWORD *)(v16 + v6 + 112),
          *(_QWORD *)(v16 + v6 + 104));
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)(*(_QWORD *)(v16 + v6 + 112) - 8LL));
        *(_QWORD *)(v16 + v6 + 112) -= 8LL;
      }
    }
  }
  else
  {
    if ( !Edge::IsEdge(v8, a3) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x196,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v9);
    v10 = v7 + 1;
    if ( v7[4] > 7uLL )
      v10 = (_QWORD *)*v10;
    std::wstring::wstring((__int64)v23, (__int64)v10);
    std::vector<Edge>::erase(this, &v22, v6 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate(v23);
  }
  return 0LL;
}
