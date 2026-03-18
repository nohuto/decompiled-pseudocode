/*
 * XREFs of ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x1401A0F50
 * Callers:
 *     SetProtocolType @ 0x140148C80 (SetProtocolType.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgProtocolType<unsigned short>::operator=(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) = v2;
  return W32GetUserSessionState(v4, v3) + 68752;
}
