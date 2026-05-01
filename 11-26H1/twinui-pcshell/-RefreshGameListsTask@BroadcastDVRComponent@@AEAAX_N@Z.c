/*
 * XREFs of ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180313D04
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___::Run @ 0x180314320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180034F30 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803115FC (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180312EDC (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::RefreshGameListsTask(BroadcastDVRComponent *this, unsigned __int8 a2)
{
  _QWORD **v3; // rbx
  __int64 v4; // rcx
  unsigned __int8 v5; // dl
  __int64 v6; // rsi
  _QWORD *v7; // rax
  int v8; // edi
  HWND v9; // rbx
  int v10; // r9d
  char v11; // r8
  _QWORD **v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-18h]
  void *Src; // [rsp+A0h] [rbp+38h] BYREF
  unsigned __int8 v16; // [rsp+A8h] [rbp+40h] BYREF
  HWND v17; // [rsp+B0h] [rbp+48h] BYREF
  void *v18; // [rsp+B8h] [rbp+50h] BYREF

  v16 = a2;
  v3 = (_QWORD **)*((_QWORD *)this + 38);
  v12 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v13, (_QWORD *)this + 39);
  v5 = 0;
  v6 = v13;
  if ( v13 )
    v5 = *(_BYTE *)(v13 + 16);
  GameDVRTraceProvider::BroadcastDVRComponent_RefreshGameListsTask(v4, v5);
  v7 = (_QWORD *)**((_QWORD **)this + 33);
  Src = v7;
  while ( v7 != *((_QWORD **)this + 33) )
  {
    *(_DWORD *)(v7[5] + 56LL) |= 1u;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&Src);
    v7 = Src;
  }
  if ( v3 )
  {
    v16 = 0;
    v17 = 0LL;
    v18 = 0LL;
    v8 = *(unsigned __int8 *)(v6 + 16);
    Src = 0LL;
    BroadcastDVRComponent::EvaluateIfViewIsGame((__int64)this, v3, v6 + 16, (char *)&v16, &v17, &v18, &Src);
    *(_DWORD *)(v6 + 56) ^= (*(_DWORD *)(v6 + 56) ^ (4 * v16)) & 4;
    if ( (*(_BYTE *)(v6 + 16) == 0) == v8 )
    {
      v9 = v17;
      *(_QWORD *)v6 = v17;
      *(_QWORD *)(v6 + 8) = v18;
      *(_DWORD *)(v6 + 56) &= ~1u;
      if ( Src )
        std::wstring::operator=((char *)(v6 + 72), Src);
      if ( *(_BYTE *)(v6 + 16) )
      {
        v10 = 5;
        v11 = 1;
      }
      else
      {
        v10 = 0;
        v11 = 0;
      }
      BroadcastDVRComponent::OnAddRemoveGameTask((__int64)this, v9, v11, v10, 0);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
}
