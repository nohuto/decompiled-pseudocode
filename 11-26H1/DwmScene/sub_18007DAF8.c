/*
 * XREFs of sub_18007DAF8 @ 0x18007DAF8
 * Callers:
 *     sub_18007D280 @ 0x18007D280 (sub_18007D280.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180027B20 @ 0x180027B20 (sub_180027B20.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 */

__int64 __fastcall sub_18007DAF8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    sub_180010EC8(v3);
  result = sub_180027B20((void **)(a1 + 88));
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    sub_18007ACE8(v5, *(_QWORD *)(a1 + 64));
    result = sub_18000E26C(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    result = sub_18000E26C(v6, (*(_QWORD *)(a1 + 48) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
