/*
 * XREFs of RtlDeleteHashTable @ 0x1800D8F80
 * Callers:
 *     RtlpCreateHashTable @ 0x1800D8DB8 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlDeleteHashTable(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v4; // ebp
  _QWORD *v5; // rsi

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) <= 0x80u )
  {
    if ( !v2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v4 = 0;
    v5 = *(_QWORD **)(a1 + 32);
    do
    {
      if ( !*v5 )
        break;
      RtlFreeHeap_0();
      ++v4;
      ++v5;
    }
    while ( v4 < 0x10 );
LABEL_3:
    result = RtlFreeHeap_0();
  }
LABEL_4:
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap_0();
  return result;
}
