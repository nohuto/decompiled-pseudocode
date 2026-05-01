/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x1800A9430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x18005EB40 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800A95CC (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  unsigned __int64 v3; // rdi
  int TaskWindow; // ebx
  __int64 v5; // rcx
  HWND v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 43) )
  {
    if ( !a2 )
    {
LABEL_5:
      v5 = *(_QWORD *)(*((_QWORD *)this + 42) + 8 * v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
      goto LABEL_6;
    }
    v6 = a2;
    v7 = 0LL;
    v8 = 0;
    TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
                   (CImmersiveApp *)((char *)this + 176),
                   (const struct CTaskWindowFinder *)&v6,
                   &v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    if ( TaskWindow >= 0 )
    {
      v3 = v9;
      goto LABEL_5;
    }
  }
LABEL_6:
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
  CImmersiveApp::_QueuePresentationChangeNotification((char *)this - 112, 2LL);
}
