/*
 * XREFs of IoGetCopyInformationExtension @ 0x1404D2AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || !_bittest16((const signed __int16 *)(v2 + 2), 9u) )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 200) + 64LL);
  return result;
}
