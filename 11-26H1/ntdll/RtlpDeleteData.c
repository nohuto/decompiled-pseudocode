/*
 * XREFs of RtlpDeleteData @ 0x1800E91B8
 * Callers:
 *     RtlDeleteAce @ 0x1800E9120 (RtlDeleteAce.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpDeleteData(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r11d
  char *v5; // rbx
  char v6; // al
  __int64 v7; // rcx
  unsigned __int64 result; // rax

  v4 = a2;
  if ( a2 < a3 )
  {
    v5 = (char *)(a2 + a1);
    do
    {
      v6 = *v5;
      v7 = v4 - a2;
      ++v4;
      ++v5;
      *(_BYTE *)(v7 + a1) = v6;
    }
    while ( v4 < a3 );
  }
  result = a3 - a2;
  if ( a3 >= a2 )
    return (unsigned __int64)memset_thunk_772440563353939046((void *)(a1 + (unsigned int)result), 0, a2);
  return result;
}
