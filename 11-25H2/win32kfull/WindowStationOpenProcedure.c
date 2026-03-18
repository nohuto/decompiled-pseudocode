/*
 * XREFs of WindowStationOpenProcedure @ 0x1401DB1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowStationOpenProcedure(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _QWORD *i; // rax

  v3 = *(_DWORD **)(a1 + 32);
  if ( *(_WORD *)(a1 + 40)
    && !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 24))
    && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) != *v3 )
  {
    return 3221225506LL;
  }
  if ( (v3[16] & 0x100) == 0 )
    return 0LL;
  for ( i = (_QWORD *)(W32GetUserSessionState(a1, a2) + 63520); *i; i = (_QWORD *)(*i + 8LL) )
    ;
  LockObjectAssignment(i, v3);
  v3[16] &= ~0x100u;
  return 0x40000000LL;
}
