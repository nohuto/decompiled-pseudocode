/*
 * XREFs of ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802EAEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800AD91C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::SwitchToLastActiveApp(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2)
{
  int v3; // ebx
  HWND v4; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  CApplicationManagerUtility *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = -2147319765;
  v6 = 0LL;
  v7 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_BYTE *)this + 113) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
      v3 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 10))(
             **((_QWORD **)this + 10),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v6);
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, CApplicationManagerUtility **))(*(_QWORD *)v6 + 312LL))(
               v6,
               0LL,
               &v7);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 >= 0 )
    v3 = CApplicationManagerUtility::SetForegroundWindow(v7, v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return (unsigned int)v3;
}
