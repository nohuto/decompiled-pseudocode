/*
 * XREFs of PsspDumpObject_Event @ 0x180100F90
 * Callers:
 *     PsspWalkHandleTable @ 0x1800B6540 (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x18015FA00 (NtQueryEvent.c)
 */

__int64 __fastcall PsspDumpObject_Event(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 8 )
    return 3221225507LL;
  else
    return NtQueryEvent(a1, 0LL, a2, 8LL, a4);
}
