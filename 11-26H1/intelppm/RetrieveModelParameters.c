/*
 * XREFs of RetrieveModelParameters @ 0x14002A6A4
 * Callers:
 *     InitEnergyCounters @ 0x14002A270 (InitEnergyCounters.c)
 * Callees:
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall RetrieveModelParameters(unsigned int *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // rdx
  double v5; // xmm0_8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 result; // rax

  memset(a1, 0, 0x98uLL);
  a1[1] = dword_1400198A8[0] / 0x3E8u;
  v2 = 0LL;
  v3 = dword_1400198D0;
  while ( (unsigned int)v2 < v3 )
  {
    if ( (*((_DWORD *)&unk_1400198D4 + 3 * v2 + 1) & 1) != 0 )
    {
      v4 = *((unsigned int *)&unk_1400198D4 + 3 * v2);
      v5 = *((float *)&unk_1400198D4 + 3 * v2 + 2);
      if ( *((_WORD *)&unk_1400198D4 + 6 * v2 + 3) )
      {
        if ( *((_WORD *)&unk_1400198D4 + 6 * v2 + 3) == 1 )
        {
          v7 = a1[2];
          if ( (_DWORD)v7 == 4 )
            goto LABEL_16;
          a1[v7 + 3] = v4;
          *(double *)&a1[2 * v7 + 22] = v5;
          a1[2] = v7 + 1;
        }
        else if ( *((_WORD *)&unk_1400198D4 + 6 * v2 + 3) == 2 )
        {
          v6 = a1[7];
          if ( (_DWORD)v6 == 4 )
            goto LABEL_16;
          a1[v6 + 8] = v4;
          *(double *)&a1[2 * v6 + 30] = v5;
          a1[7] = v6 + 1;
        }
      }
      else
      {
        if ( (unsigned int)v4 >= 5 )
          goto LABEL_16;
        *(double *)&a1[2 * v4 + 12] = v5;
      }
    }
    v2 = (unsigned int)(v2 + 1);
  }
  if ( a1[2] )
    *a1 |= 1u;
LABEL_16:
  result = *a1;
  if ( (result & 1) == 0 )
  {
    result = (__int64)memset(a1, 0, 0x98uLL);
    a1[2] = 1;
    a1[3] = 1593;
  }
  return result;
}
