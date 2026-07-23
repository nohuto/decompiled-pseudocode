/*
 * XREFs of IoGetFsZeroingOffset @ 0x1404C1F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetFsZeroingOffset(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || (*(_BYTE *)(v2 + 2) & 0x10) == 0 )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 200) + 40LL);
  return result;
}
