/*
 * XREFs of IsImmersiveBroker @ 0x1400C66F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBroker(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi

  if ( (a1[101] & 0x30) == 0x20 )
    return 1LL;
  v4 = 0;
  if ( *a1 )
  {
    v3 = *a1;
    if ( v3 == *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70552) )
      return 1LL;
  }
  LOBYTE(v4) = *a1 == *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  return v4;
}
