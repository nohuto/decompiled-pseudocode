/*
 * XREFs of sub_1400189CC @ 0x1400189CC
 * Callers:
 *     sub_14000C910 @ 0x14000C910 (sub_14000C910.c)
 *     sub_14001DF50 @ 0x14001DF50 (sub_14001DF50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400189CC(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 0x440000) != 0 )
  {
    v1 = 0;
LABEL_3:
    if ( v1 < *(unsigned __int16 *)(a1 + 330) )
    {
      v2 = 0;
      result = v1;
      while ( 1 )
      {
        if ( v2 >= *(unsigned __int16 *)(a1 + 328) )
        {
          ++v1;
          goto LABEL_3;
        }
        result = *(_QWORD *)(208LL * v1 + *(_QWORD *)(a1 + 936) + 32);
        if ( *(_QWORD *)(32LL * v2 + result + 16) )
          break;
        ++v2;
      }
      *(_DWORD *)(a1 + 4056) |= 0x4000u;
      result = *(unsigned int *)(a1 + 128);
      if ( (result & 0x40) != 0 )
        MEMORY[4] = -1;
    }
  }
  return result;
}
