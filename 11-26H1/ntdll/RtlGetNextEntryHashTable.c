/*
 * XREFs of RtlGetNextEntryHashTable @ 0x1800E33D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetNextEntryHashTable(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax
  _QWORD *v4; // rcx

  v2 = **(_QWORD ***)(a2 + 8);
  result = (_QWORD *)*v2;
  if ( *v2 == *(_QWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 28) )
  {
    v4 = (_QWORD *)*v2;
    do
    {
      result = v4;
      if ( v4[2] )
        break;
      v2 = v4;
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != *(_QWORD **)a2 );
  }
  if ( result[2] != *(_QWORD *)(a2 + 16) )
    return 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
