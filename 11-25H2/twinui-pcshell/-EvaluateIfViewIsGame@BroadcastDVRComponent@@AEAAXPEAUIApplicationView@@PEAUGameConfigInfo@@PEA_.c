/*
 * XREFs of ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C
 * Callers:
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800B1750 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x18031725C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803174E0 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180317B44 (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x1800B358C (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B6C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18010F044 (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180186F60 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEAG@Z @ 0x1802EDB7C (-close_reset@-$close_invoke_helper@$00P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall BroadcastDVRComponent::EvaluateIfViewIsGame(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        char *a4,
        HWND *a5,
        void **a6,
        LPVOID *a7)
{
  char v11; // di
  int (__fastcall *v12)(_QWORD **, GUID *, __int64 *); // rbx
  unsigned __int16 **v13; // r8
  HWND v14; // rbx
  HWND Ancestor; // rax
  int ImmersiveAppIdFromWindow; // eax
  __int64 *v17; // rcx
  __int64 v18; // r9
  char v19; // bl
  const unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  int (__fastcall *v23)(_QWORD **, GUID *, __int64 *); // rbx
  __int64 v24; // rbx
  int (__fastcall *v25)(__int64, __int64 **); // rdi
  __int64 v26; // rax
  char v27; // r15
  BroadcastDVRComponent *v28; // rcx
  __int64 v29; // rbx
  int (__fastcall *v30)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v31; // rax
  __int64 v32; // rbx
  int (__fastcall *v33)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v34; // rax
  void *v35; // rbx
  PCWSTR StringRawBuffer; // rax
  LPVOID *v37; // rbx
  void *v38; // rdi
  void *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  PCWSTR v43; // rax
  void *v44; // [rsp+40h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  __int64 v48; // [rsp+60h] [rbp-20h] BYREF
  void *v49[3]; // [rsp+68h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+48h] BYREF
  bool v51; // [rsp+D0h] [rbp+50h] BYREF
  __int64 *v52; // [rsp+D8h] [rbp+58h] BYREF

  v49[1] = a2;
  if ( a2 )
    ((void (__fastcall *)(_QWORD **))(*a2)[1])(a2);
  v48 = 0LL;
  hwnd = 0LL;
  v49[0] = 0LL;
  v11 = 0;
  LOBYTE(pv) = 0;
  *(_WORD *)a3 = 0;
  *(_BYTE *)(a3 + 2) = 0;
  *a4 = 0;
  v12 = (int (__fastcall *)(_QWORD **, GUID *, __int64 *))**a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
  if ( v12(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v48) >= 0 )
  {
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v48 + 24LL))(v48, &hwnd) >= 0 )
    {
      v14 = hwnd;
      Ancestor = GetAncestor(hwnd, 2u);
      if ( Ancestor )
        v14 = Ancestor;
      v49[0] = v14;
    }
    if ( !*(_QWORD *)(a1 + 256) )
      goto LABEL_11;
    pv = 0LL;
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hwnd, (HWND)&pv, v13);
    v17 = *(__int64 **)(a1 + 256);
    v18 = *v17;
    if ( ImmersiveAppIdFromWindow >= 0 )
    {
      v11 = 1;
      if ( (*(int (__fastcall **)(__int64 *, LPVOID, __int64))(v18 + 40))(v17, pv, a3) < 0 )
        *(_BYTE *)a3 = 0;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        a7,
        &pv);
      goto LABEL_12;
    }
    if ( (*(int (__fastcall **)(__int64 *, HWND, __int64))(v18 + 32))(v17, hwnd, a3) < 0 )
LABEL_11:
      *(_BYTE *)a3 = 0;
LABEL_12:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_14;
  }
  v47 = 0LL;
  v52 = 0LL;
  v46 = 0LL;
  v23 = (int (__fastcall *)(_QWORD **, GUID *, __int64 *))**a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
  if ( v23(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v47) >= 0 )
  {
    v24 = v47;
    v25 = *(int (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v47 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
    if ( v25(v24, &v52) < 0 )
    {
LABEL_35:
      v11 = (char)pv;
      goto LABEL_36;
    }
    v44 = 0LL;
    v26 = *v52;
    v44 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, void **))(v26 + 32))(v52, &v44) < 0 )
      goto LABEL_52;
    v27 = 1;
    *(_BYTE *)(a3 + 3) = 1;
    v28 = *(BroadcastDVRComponent **)(a1 + 256);
    if ( !v28
      || (*(int (__fastcall **)(BroadcastDVRComponent *, void *, __int64))(*(_QWORD *)v28 + 40LL))(v28, v44, a3) < 0 )
    {
      *(_BYTE *)a3 = 0;
    }
    v51 = 0;
    if ( (int)BroadcastDVRComponent::IsExpandedResources(v28, (struct IApplicationView *)a2, &v51) >= 0 && v51 )
      *(_BYTE *)a3 = 1;
    v29 = (__int64)v52;
    v30 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*v52 + 24);
    v31 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v46);
    if ( v30(v29, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v31) >= 0 )
      (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v46 + 32LL))(v46, &hwnd);
    v32 = (__int64)v52;
    v33 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*v52 + 24);
    v34 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v46);
    if ( v33(v32, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v34) >= 0 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v46 + 32LL))(v46, v49);
    v35 = v44;
    if ( v44 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( !(unsigned int)_o__wcsicmp(StringRawBuffer, v35) )
        goto LABEL_29;
      v35 = v44;
    }
    v43 = WindowsGetStringRawBuffer(qword_180899F20, 0LL);
    if ( (unsigned int)_o__wcsicmp(v43, v35) )
      v27 = 0;
LABEL_29:
    *a4 = v27;
    v37 = a7;
    if ( a7 != &v44 )
    {
      v38 = v44;
      if ( *a7 )
        wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*a7);
      *v37 = v38;
      v39 = 0LL;
      v44 = 0LL;
      goto LABEL_33;
    }
LABEL_52:
    v39 = v44;
LABEL_33:
    if ( v39 )
      CoTaskMemFree(v39);
    goto LABEL_35;
  }
LABEL_36:
  v40 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = (__int64)v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
LABEL_14:
  *a6 = v49[0];
  *a5 = hwnd;
  v19 = *a4;
  v20 = WindowsGetStringRawBuffer(*(HSTRING *)(a3 + 32), 0LL);
  GameDVRTraceProvider::BroadcastDVRComponent_EvaluateIfViewIsGame(
    hwnd,
    v49[0],
    *(_BYTE *)a3,
    *(_BYTE *)(a3 + 1),
    *(_BYTE *)(a3 + 3),
    v20,
    v19,
    v11);
  v21 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return ((__int64 (__fastcall *)(_QWORD **))(*a2)[2])(a2);
}
