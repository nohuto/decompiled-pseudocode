/*
 * XREFs of ?OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z @ 0x18018C570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018C9B0 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellCreated(
        CImmersiveShellCreationBehavior *this,
        struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  HRESULT v6; // eax
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  v3 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35D,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return v4;
  }
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 40LL))(ppvOut, 7LL);
  v7 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
