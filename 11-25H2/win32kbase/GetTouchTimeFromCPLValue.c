/*
 * XREFs of GetTouchTimeFromCPLValue @ 0x1400AF8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400B14CC (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 */

__int64 __fastcall GetTouchTimeFromCPLValue(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 UserSessionState; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v5 = a3;
  v6 = a2;
  v7 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 17648) && !(unsigned int)LoadPointerDeviceTouchSettings() )
    return v7;
  v9 = *(_QWORD *)(UserSessionState + 17656);
  v10 = *(_DWORD *)(v9 + 16 * v5 + 12);
  if ( v10 == -1 )
    v10 = *(_DWORD *)(v9 + 16 * v5 + 8);
  if ( v10 > 0x64 || v10 == 50 )
    return v7;
  v11 = 100 - v10;
  if ( !a4 )
    v11 = v10;
  return v7 + v6 * v11 / 0x64 - (v6 >> 1);
}
