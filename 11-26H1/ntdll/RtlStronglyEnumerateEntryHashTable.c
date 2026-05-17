/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800D8990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x1800D8D50 (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 ChainHead; // rdx
  _QWORD *v6; // rcx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  while ( v2 < *(_DWORD *)(v4 + 8) )
  {
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      v6 = *(_QWORD **)v3;
      ChainHead = *(_QWORD *)(v3 + 24);
    }
    else
    {
      ChainHead = RtlpGetChainHead(v4, v2);
      v6 = (_QWORD *)ChainHead;
    }
    while ( 1 )
    {
      result = (_QWORD *)*v6;
      v6 = result;
      if ( result == (_QWORD *)ChainHead )
        break;
      if ( result[2] )
      {
        *(_DWORD *)(v3 + 32) = v2;
        *(_QWORD *)(v3 + 24) = ChainHead;
        *(_QWORD *)v3 = result;
        return result;
      }
    }
    ++v2;
  }
  return 0LL;
}
