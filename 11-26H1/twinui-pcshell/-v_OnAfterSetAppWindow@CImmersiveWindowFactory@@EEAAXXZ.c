/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1806CA600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801D2138 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(CImmersiveWindowFactory *this)
{
  DWORD ProcessId; // ebx
  int CallingProcessHandle; // edi
  LPVOID v4; // rbx
  int (__fastcall *v5)(LPVOID, GUID *, GUID *, HANDLE *); // rdi
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 33) )
  {
    ProcessId = 0;
    dwProcessId = 0;
    Process = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
    if ( CallingProcessHandle >= 0 )
      ProcessId = GetProcessId(Process);
    CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
    if ( CallingProcessHandle >= 0
      && GetWindowThreadProcessId(*((HWND *)this + 12), &dwProcessId)
      && ProcessId == dwProcessId )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      if ( CoCreateInstance(
             &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
             0LL,
             0x404u,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             &ppv) >= 0 )
      {
        Process = 0LL;
        v4 = ppv;
        v5 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, HANDLE *))(*(_QWORD *)ppv + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&Process);
        if ( v5(v4, &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b, &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b, &Process) >= 0 )
          (*(void (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)Process + 40LL))(Process, *((_QWORD *)this + 12));
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&Process);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    }
  }
}
