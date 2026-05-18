/*
 * XREFs of sub_18009BCB0 @ 0x18009BCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_18009BCB0(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(*(_QWORD *)a1 + 124LL);
  if ( result == *(_BYTE *)(*(_QWORD *)a2 + 124LL) )
    return *(_DWORD *)(*(_QWORD *)a1 + 128LL) > *(_DWORD *)(*(_QWORD *)a2 + 128LL);
  return result;
}
