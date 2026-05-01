/*
 * XREFs of ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1804C4E34
 * Callers:
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804C43CC (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewControllerBase::_CommitDismissView(CMultitaskingViewControllerBase *this)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, GUID *, __int64 *); // rbx
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  char v13; // [rsp+31h] [rbp-Fh]
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_BYTE *)this + 96) )
  {
    v12 = *((_BYTE *)this + 96);
    v13 = *((_BYTE *)this + 97);
    v2 = v13;
    v3 = *((_QWORD *)this + 13);
    v14 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v11 = 0LL;
    *((_WORD *)this + 48) = 0;
    v4 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v16, &v11);
    v5 = *v4;
    *v4 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    v17 = 0LL;
    if ( v2 )
    {
      v6 = *((_QWORD *)this + 5);
      if ( v6 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        v8 = v7(v6, &GUID_334ba746_d848_47e3_beb7_05c9254f34fc, &v17);
        if ( v8 >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v3);
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          return;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13A,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v8);
      }
    }
    v16 = 0LL;
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      v10 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      if ( v10(v9, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &v16) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    goto LABEL_10;
  }
}
