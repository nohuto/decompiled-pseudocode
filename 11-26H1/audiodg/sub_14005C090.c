/*
 * XREFs of sub_14005C090 @ 0x14005C090
 * Callers:
 *     sub_140007F0C @ 0x140007F0C (sub_140007F0C.c)
 *     sub_140010AA0 @ 0x140010AA0 (sub_140010AA0.c)
 *     sub_140011D40 @ 0x140011D40 (sub_140011D40.c)
 *     sub_140012538 @ 0x140012538 (sub_140012538.c)
 *     sub_140012604 @ 0x140012604 (sub_140012604.c)
 *     sub_140012AD4 @ 0x140012AD4 (sub_140012AD4.c)
 *     sub_140036F58 @ 0x140036F58 (sub_140036F58.c)
 *     sub_14005BF10 @ 0x14005BF10 (sub_14005BF10.c)
 *     sub_14005BF90 @ 0x14005BF90 (sub_14005BF90.c)
 *     sub_14005C130 @ 0x14005C130 (sub_14005C130.c)
 *     sub_14005C2EC @ 0x14005C2EC (sub_14005C2EC.c)
 *     sub_140061228 @ 0x140061228 (sub_140061228.c)
 *     sub_140061CB0 @ 0x140061CB0 (sub_140061CB0.c)
 *     sub_140061DAC @ 0x140061DAC (sub_140061DAC.c)
 *     sub_140062380 @ 0x140062380 (sub_140062380.c)
 *     sub_1400624AC @ 0x1400624AC (sub_1400624AC.c)
 *     sub_1400625D8 @ 0x1400625D8 (sub_1400625D8.c)
 *     sub_140062720 @ 0x140062720 (sub_140062720.c)
 *     sub_140063FBC @ 0x140063FBC (sub_140063FBC.c)
 *     sub_1400640E8 @ 0x1400640E8 (sub_1400640E8.c)
 *     sub_14006ED00 @ 0x14006ED00 (sub_14006ED00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005C090(__int64 a1, __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // eax
  unsigned int *v7; // rdx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1)) + (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1));
  else
    v2 = (double)(int)a2;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v6 = 0;
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    goto LABEL_10;
  }
  if ( (unsigned int)v5 > 0x11 )
  {
LABEL_10:
    v7 = dword_1400C9040;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = dword_1400C9040[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
