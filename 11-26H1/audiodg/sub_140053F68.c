/*
 * XREFs of sub_140053F68 @ 0x140053F68
 * Callers:
 *     sub_140017ED8 @ 0x140017ED8 (sub_140017ED8.c)
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_14005F054 @ 0x14005F054 (sub_14005F054.c)
 *     sub_140093194 @ 0x140093194 (sub_140093194.c)
 * Callees:
 *     _o_ceilf @ 0x14004A628 (_o_ceilf.c)
 */

__int64 __fastcall sub_140053F68(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  v4 = v3 / *(float *)a1;
  o_ceilf();
  v5 = 0LL;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  v6 = 8LL;
  if ( v5 + (unsigned int)(int)v4 > 8 )
    v6 = v5 + (unsigned int)(int)v4;
  if ( v2 >= v6 )
    return v2;
  if ( v2 < 0x200 && 8 * v2 >= v6 )
    return 8 * v2;
  return v6;
}
