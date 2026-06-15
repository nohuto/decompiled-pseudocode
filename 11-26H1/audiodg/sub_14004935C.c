/*
 * XREFs of sub_14004935C @ 0x14004935C
 * Callers:
 *     sub_14002B828 @ 0x14002B828 (sub_14002B828.c)
 *     sub_14002B868 @ 0x14002B868 (sub_14002B868.c)
 *     sub_14003501C @ 0x14003501C (sub_14003501C.c)
 *     sub_1400560EC @ 0x1400560EC (sub_1400560EC.c)
 *     sub_1400B0144 @ 0x1400B0144 (sub_1400B0144.c)
 *     sub_1400B0175 @ 0x1400B0175 (sub_1400B0175.c)
 *     sub_1400B18D3 @ 0x1400B18D3 (sub_1400B18D3.c)
 * Callees:
 *     sub_1400493CC @ 0x1400493CC (sub_1400493CC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004935C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 result; // rax

  v3 = a3;
  for ( i = a1 + a3 * a2; ; sub_1400B6010(i) )
  {
    result = v3--;
    if ( !result )
      break;
    i -= a2;
  }
  return result;
}
