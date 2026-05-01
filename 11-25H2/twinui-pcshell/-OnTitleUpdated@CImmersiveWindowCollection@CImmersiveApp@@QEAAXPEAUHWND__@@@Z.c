/*
 * XREFs of ?OnTitleUpdated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@@Z @ 0x180042928
 * Callers:
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x1800428F0 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180041D70 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnTitleUpdated(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
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
  if ( *((_QWORD *)this + 21) )
  {
    if ( a2 )
    {
      v6 = a2;
      v7 = 0LL;
      v8 = 0;
      TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
                     this,
                     (const struct CTaskWindowFinder *)&v6,
                     &v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      if ( TaskWindow < 0 )
        return;
      v3 = v9;
    }
    v5 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
  }
}
