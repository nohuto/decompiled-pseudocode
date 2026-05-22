/*
 * XREFs of ?OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z @ 0x18007FFBC
 * Callers:
 *     ?OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z @ 0x1800CD130 (-OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::OnInputRegistryKeyChange(InputStateManager *this, HKEY a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  DWORD cbData[4]; // [rsp+30h] [rbp-10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  cbData[0] = 4;
  Data = 0;
  v4 = RegQueryValueExW(a2, L"WakeOnInputDeviceTypes", 0LL, &Type, (LPBYTE)&Data, cbData);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( v5 || Type != 4 )
    *((_DWORD *)this + 48) = 6;
  else
    *((_DWORD *)this + 48) = Data;
  Type = 0;
  cbData[0] = 4;
  Data = 0;
  v6 = RegQueryValueExW(a2, L"UnDimOnInputDeviceTypes", 0LL, &Type, (LPBYTE)&Data, cbData);
  v7 = v6 < 0;
  if ( v6 > 0 )
    v7 = 1;
  if ( v7 || Type != 4 )
    *((_DWORD *)this + 49) = -1;
  else
    *((_DWORD *)this + 49) = Data;
}
