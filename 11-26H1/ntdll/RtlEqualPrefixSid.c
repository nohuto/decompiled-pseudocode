/*
 * XREFs of RtlEqualPrefixSid @ 0x18004C420
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x18004B420 (RtlpCopyEffectiveAce.c)
 *     RtlpCompareKnownObjectAces @ 0x18004C4E0 (RtlpCompareKnownObjectAces.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  int v3; // r8d
  int v4; // eax
  int v5; // r10d
  int v6; // r9d
  _DWORD *v7; // r8
  signed __int64 v8; // rdx
  int v9; // r9d

  if ( *(_BYTE *)Sid1 != *(_BYTE *)Sid2 )
    return 0;
  if ( *((_BYTE *)Sid1 + 2) != *((_BYTE *)Sid2 + 2) )
    return 0;
  if ( *((_BYTE *)Sid1 + 3) != *((_BYTE *)Sid2 + 3) )
    return 0;
  if ( *((_BYTE *)Sid1 + 4) != *((_BYTE *)Sid2 + 4) )
    return 0;
  if ( *((_BYTE *)Sid1 + 5) != *((_BYTE *)Sid2 + 5) )
    return 0;
  if ( *((_BYTE *)Sid1 + 6) != *((_BYTE *)Sid2 + 6) )
    return 0;
  if ( *((_BYTE *)Sid1 + 7) != *((_BYTE *)Sid2 + 7) )
    return 0;
  v3 = *((unsigned __int8 *)Sid1 + 1);
  if ( (_BYTE)v3 != *((_BYTE *)Sid2 + 1) )
    return 0;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_12;
    v9 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v9 )
      v9 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v4 = 5;
    if ( v9 )
LABEL_12:
      v4 = 1;
    v5 = 0;
    v6 = v3 - v4;
    v7 = (char *)Sid1 + 8;
    v8 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
    while ( v5 < v6 )
    {
      if ( *v7 != *(_DWORD *)((char *)v7 + v8) )
        return 0;
      ++v5;
      ++v7;
    }
  }
  return 1;
}
