/*
 * XREFs of IsImmersiveBroker @ 0x1401065E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBroker(__int64 *a1, int a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi

  if ( (a1[101] & 0x30) == 0x20 )
    return 1LL;
  v5 = 0;
  if ( *a1 )
  {
    v4 = *a1;
    if ( v4 == *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 70544) )
      return 1LL;
  }
  LOBYTE(v5) = *a1 == *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  return v5;
}
