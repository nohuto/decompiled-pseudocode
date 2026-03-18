/*
 * XREFs of RawMouseThrottlingTimerActive @ 0x14013F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RawMouseThrottlingTimerActive(int a1, int a2, int a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3136);
  if ( v3 )
    LOBYTE(v3) = *(_BYTE *)(v3 + 1336);
  return v3;
}
