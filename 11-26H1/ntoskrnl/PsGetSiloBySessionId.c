/*
 * XREFs of PsGetSiloBySessionId @ 0x140A3B134
 * Callers:
 *     SessionIsInteractive @ 0x1404378AC (SessionIsInteractive.c)
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 *     PsIsServiceSession @ 0x140A3B080 (PsIsServiceSession.c)
 *     SeQueryServerSiloToken @ 0x140A3B0D0 (SeQueryServerSiloToken.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
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
