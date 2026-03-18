/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1403D0BE8
 * Callers:
 *     _pGetAdditionalTiming @ 0x14038D1C0 (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(int a1, char a2)
{
  _DWORD *result; // rax

  if ( a1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 281;
  }
  for ( result = qword_140169578; result && (a1 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
