/*
 * XREFs of RawMouseThrottlingTimerActive @ 0x1400F8B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RawMouseThrottlingTimerActive(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136);
  if ( v2 )
    LOBYTE(v2) = *(_BYTE *)(v2 + 1344);
  return v2;
}
