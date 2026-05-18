/*
 * XREFs of sub_180038F30 @ 0x180038F30
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

volatile signed __int32 *__fastcall sub_180038F30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v6; // rcx

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 128) = v2;
  result = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v4;
  if ( result )
    result = (volatile signed __int32 *)sub_180010F00(result);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
    return (volatile signed __int32 *)sub_180010F00(v6);
  return result;
}
