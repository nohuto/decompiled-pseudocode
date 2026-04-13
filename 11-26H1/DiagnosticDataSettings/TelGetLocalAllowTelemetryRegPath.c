/*
 * XREFs of TelGetLocalAllowTelemetryRegPath @ 0x180003BF0
 * Callers:
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180006010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const wchar_t *TelGetLocalAllowTelemetryRegPath()
{
  HMODULE ModuleHandleW; // rax
  __int64 (*ProcAddress)(void); // rax
  char v2; // al
  const WCHAR *v3; // rcx

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled");
  if ( !ProcAddress )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  v2 = ProcAddress();
  v3 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  if ( v2 )
    return L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  return v3;
}
