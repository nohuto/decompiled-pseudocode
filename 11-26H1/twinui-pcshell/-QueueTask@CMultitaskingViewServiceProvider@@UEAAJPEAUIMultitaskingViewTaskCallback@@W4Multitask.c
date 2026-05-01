/*
 * XREFs of ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x1800728C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x18007255C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&___lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x1801C73DC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__-_--CTask.c)
 *     ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x1801EDED0 (-_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewServiceProvider::QueueTask(__int64 a1, IUnknown *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  void *v12; // rax
  __int64 v13; // rdi
  int v14; // esi
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v23; // [rsp+90h] [rbp+30h] BYREF
  IUnknown *v24; // [rsp+A8h] [rbp+48h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 96));
  v20 = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v21 = v7;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v9 = -2147019873;
    v16 = 226LL;
    goto LABEL_23;
  }
  if ( (a3 & 3) != 0 )
  {
    v9 = CMultitaskingViewServiceProvider::_EnsureForegroundRight(
           (CMultitaskingViewServiceProvider *)(a1 - 96),
           (a3 & 2) != 0);
    if ( (v9 & 0x80000000) != 0 )
    {
      v16 = 230LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)v9);
LABEL_18:
      if ( v7 >= 0 )
        LeaveCriticalSection(v6);
      return v9;
    }
  }
  v24 = 0LL;
  v23 = 2;
  v18 = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         (__int64 *)&v24,
         &GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
         &v18,
         &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)&v20);
    return v9;
  }
  v17 = 0LL;
  v23 = 2;
  v18 = *(IUnknown **)(a1 + 64);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          &v17,
          &GUID_537b455d_1240_433b_82af_10929138b8be,
          &v18,
          &v23);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    goto LABEL_18;
  }
  v18 = v24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v19 = v17;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v11 = *(_DWORD *)(a1 + 160);
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v13 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8____::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8______lambda_1b237cfa226cb7a358646b393456f6b8____(
            v12,
            &v18);
  else
    v13 = 0LL;
  v14 = SHTaskPoolQueueTask(1LL, 2LL, v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return (unsigned int)v14;
  }
}
