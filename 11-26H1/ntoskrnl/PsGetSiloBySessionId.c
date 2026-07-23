/*
 * XREFs of PsGetSiloBySessionId @ 0x1409F6C94
 * Callers:
 *     SessionIsInteractive @ 0x14042683C (SessionIsInteractive.c)
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     PsIsServiceSession @ 0x1409F6BDC (PsIsServiceSession.c)
 *     SeQueryServerSiloToken @ 0x1409F6C30 (SeQueryServerSiloToken.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetSiloBySessionId(__int64 a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)PsGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[93] + 160LL);
  ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  result = 0LL;
  *a2 = v4;
  return result;
}
