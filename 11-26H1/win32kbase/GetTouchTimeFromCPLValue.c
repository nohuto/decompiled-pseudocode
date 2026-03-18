/*
 * XREFs of GetTouchTimeFromCPLValue @ 0x140198990
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 */

__int64 __fastcall GetTouchTimeFromCPLValue(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  int v8; // edx
  int v9; // ecx
  __int64 UserSessionState; // rdi
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v5 = a3;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_DWORD *)(UserSessionState + 17640) && !(unsigned int)LoadPointerDeviceTouchSettings(v9, v8, v11) )
    return a1;
  v12 = *(_QWORD *)(UserSessionState + 17648);
  v13 = *(_DWORD *)(v12 + 16 * v5 + 12);
  if ( v13 == -1 )
    v13 = *(_DWORD *)(v12 + 16 * v5 + 8);
  if ( v13 > 0x64 || v13 == 50 )
    return a1;
  v14 = 100 - v13;
  if ( !a4 )
    v14 = v13;
  return a1 + a2 * v14 / 0x64 - (a2 >> 1);
}
