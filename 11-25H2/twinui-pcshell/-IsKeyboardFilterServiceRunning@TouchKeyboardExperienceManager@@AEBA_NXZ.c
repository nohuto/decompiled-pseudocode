/*
 * XREFs of ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1802179E4
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800EB3EC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A5C3C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(TouchKeyboardExperienceManager *this)
{
  bool v1; // bl
  SC_HANDLE v2; // rax
  SC_HANDLE v3; // rdi
  SC_HANDLE v4; // rsi
  DWORD pcbBytesNeeded; // [rsp+30h] [rbp-48h] BYREF
  BYTE Buffer[16]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v2 = OpenSCManagerW(0LL, 0LL, 4u);
  v3 = v2;
  if ( v2 )
  {
    v4 = OpenServiceW(v2, L"MsKeyboardFilter", 4u);
    if ( v4 )
    {
      pcbBytesNeeded = 0;
      v9 = 0;
      *(_OWORD *)Buffer = 0LL;
      v8 = 0LL;
      if ( QueryServiceStatusEx(v4, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
        v1 = *(_DWORD *)&Buffer[4] == 4;
      CloseServiceHandle(v4);
    }
    CloseServiceHandle(v3);
  }
  return v1;
}
