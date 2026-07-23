/*
 * XREFs of RtlEqualPrefixSid @ 0x1408EB66C
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x1408EA910 (RtlpCopyEffectiveAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  int v3; // r10d
  int v4; // r8d
  int v5; // eax
  _DWORD *v6; // r9
  signed __int64 v7; // rdx
  int v8; // r9d

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
  v4 = 0;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_12;
    v8 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v8 )
      v8 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v5 = 5;
    if ( v8 )
LABEL_12:
      v5 = 1;
    v6 = (char *)Sid1 + 8;
    v7 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
    while ( v4 < v3 - v5 )
    {
      if ( *v6 != *(_DWORD *)((char *)v6 + v7) )
        return 0;
      ++v4;
      ++v6;
    }
  }
  return 1;
}
