/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800BC830
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BC668 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(unsigned __int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // ecx

  LOWORD(result) = qword_1801C5EC8 ^ *(_WORD *)(a1 + 40) ^ (a1 >> 12);
  v5 = HIDWORD(*(_QWORD *)(a1 + 8 * ((unsigned __int64)a3 >> 5) + 64));
  if ( _bittest64(&v5, a3 & 0x1F) )
  {
    v6 = *(unsigned __int16 *)((unsigned __int16)result + a2 - 2);
    v7 = v6 & 0x3FF;
    if ( (v6 & 0x8000u) != 0 )
      v7 = 1;
    if ( a4 )
      *a4 = (v6 >> 14) & 1;
    return (unsigned int)(unsigned __int16)result - v7;
  }
  else
  {
    result = (unsigned __int16)result;
    if ( a4 )
      *a4 = 0;
  }
  return result;
}
