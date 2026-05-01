/*
 * XREFs of ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x180312AC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::Run @ 0x1803142F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180172894 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x180225040 (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180297EC8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInfo@Applicatio.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802A9D60 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z @ 0x18030E190 (--$-0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z.c)
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180312814 (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall BroadcastDVRComponent::NotifyGameBarToUpdateKGL(
        BroadcastDVRComponent *this,
        const unsigned __int16 *a2)
{
  HSTRING v2; // rbx
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v8; // edx
  __int64 v9; // r8
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22 = 0LL;
  v2 = *Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[24])a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_59ba2fbb_24cb_4c02_a4c4_8294569d54f1, &v22);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v19 = 0LL;
    v5 = v22;
    v6 = *(void (__fastcall **)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    Windows::Internal::StringReference::_ConstructorHelper(
      (Windows::Internal::StringReference *)string,
      c_wzGameBarProtocolScheme);
    v6(v5, string[0], &v19);
    v18 = 0LL;
    v7 = v19;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo *> *>>(
           v7,
           v8,
           v9);
    if ( v4 < 0
      || (v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v7)[8])(
                 v7,
                 &v18),
          v4 < 0) )
    {
      v11 = (unsigned int)v4;
      v12 = 1182LL;
      goto LABEL_18;
    }
    v20 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v20);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 1185LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)v11);
      goto LABEL_19;
    }
    if ( v20 )
    {
      v21 = 0LL;
      v13 = (__int64 *)Windows::Internal::StringReference::StringReference(string, L"Windows.Foundation.Uri");
      v14 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
              *v13,
              &v21);
      v4 = v14;
      if ( v14 < 0 )
      {
        v15 = 1191LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
LABEL_19:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        goto LABEL_20;
      }
      v23 = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      Windows::Internal::StringReference::_ConstructorHelper(
        (Windows::Internal::StringReference *)string,
        c_wzGameBarUpdateKGLUri);
      v14 = BroadcastDVRComponent::LaunchGameOverlayWithUri(v16, string, &v23);
      v4 = v14;
      if ( v14 < 0 )
      {
        v15 = 1193LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v4 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x498,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_20:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return (unsigned int)v4;
}
