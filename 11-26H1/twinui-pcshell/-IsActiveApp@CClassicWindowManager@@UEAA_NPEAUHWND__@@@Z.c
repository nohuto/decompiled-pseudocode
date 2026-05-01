/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180094D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180096140 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CClassicWindowManager::IsActiveApp(CClassicWindowManager *this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  bool v6; // di
  __int64 v7; // r8
  __int64 v8; // rcx
  struct IUnknown *v10; // rbx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  struct IUnknown *v12; // rbx
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v14; // [rsp+68h] [rbp+38h] BYREF
  HWND v15; // [rsp+70h] [rbp+40h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = 0;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v13 = 0LL;
  v14 = 0LL;
  v15 = a2;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              (char *)this + 112,
              &v15,
              v7,
              &v14,
              v4,
              v5) >= 0 )
  {
    v10 = v14;
    v11 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8LL * (_QWORD)v14);
    if ( (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v13) >= 0 )
    {
      if ( v10 )
      {
        v6 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13) )
        {
          v12 = *(struct IUnknown **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
          v14 = v12;
          if ( v12 )
          {
            ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->AddRef)(v12);
            v6 = SHIsSameObject(v12, **((struct IUnknown ***)this + 15));
            ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
          }
        }
      }
      else
      {
        v6 = 1;
      }
    }
  }
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v6;
}
