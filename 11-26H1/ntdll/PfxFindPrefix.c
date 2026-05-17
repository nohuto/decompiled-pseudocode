/*
 * XREFs of PfxFindPrefix @ 0x18013C8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B7F60 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x18013C688 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x18013C828 (ComputeNameLength.c)
 */

_QWORD *__fastcall PfxFindPrefix(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  __int64 i; // rdi
  _QWORD *j; // rsi
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rbx

  v4 = ComputeNameLength();
  for ( i = *(_QWORD *)(a1 + 8); *(__int16 *)(i + 2) > v4; i = *(_QWORD *)(i + 8) )
    a1 = i;
LABEL_4:
  if ( *(__int16 *)(i + 2) <= 0 )
    return 0LL;
  for ( j = (_QWORD *)(i + 16); ; j = (_QWORD *)j[2] )
  {
    while ( 1 )
    {
      if ( !j )
      {
        a1 = i;
        i = *(_QWORD *)(i + 8);
        goto LABEL_4;
      }
      v7 = j - 2;
      v8 = CompareNamesCaseSensitive(j[3], a2);
      if ( v8 != 3 )
        break;
      j = (_QWORD *)j[1];
    }
    if ( v8 )
      break;
  }
  if ( *(_WORD *)v7 == 514 )
  {
    v9 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    *(_WORD *)i = 514;
    v7 = RtlSplay(j) - 2;
    *(_WORD *)v7 = 513;
    *(_QWORD *)(a1 + 8) = v7;
    v7[1] = v9;
  }
  return v7;
}
