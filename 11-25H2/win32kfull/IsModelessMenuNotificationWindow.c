/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x14003F08C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x140281D18 (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x14003F0BC (GetpwndNotifypMenuState.c)
 */

__int64 __fastcall IsModelessMenuNotificationWindow(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = GetpwndNotifypMenuState(a1);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 8) & 0x100) != 0;
  return v2;
}
