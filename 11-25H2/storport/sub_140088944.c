/*
 * XREFs of sub_140088944 @ 0x140088944
 * Callers:
 *     sub_140124930 @ 0x140124930 (sub_140124930.c)
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 *     sub_140126494 @ 0x140126494 (sub_140126494.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140088944(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  __int64 *v5; // rcx
  __int64 v6; // rbx

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)(v1 + 16);
  if ( v3 < 8 )
    return 3221225485LL;
  v5 = *(__int64 **)(a1 + 24);
  v6 = *v5;
  memmove(v5, v5 + 1, v3 - 8);
  *(_QWORD *)(*(unsigned int *)(v1 + 16) + *(_QWORD *)(a1 + 24) - 8LL) = v6;
  return 0LL;
}
