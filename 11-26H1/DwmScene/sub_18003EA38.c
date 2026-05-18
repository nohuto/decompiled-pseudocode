/*
 * XREFs of sub_18003EA38 @ 0x18003EA38
 * Callers:
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003E864 @ 0x18003E864 (sub_18003E864.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 *     sub_1800D3050 @ 0x1800D3050 (sub_1800D3050.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F008 @ 0x18001F008 (sub_18001F008.c)
 */

bool __fastcall sub_18003EA38(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // eax

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    sub_1800141BC(a2 + 32);
    v4 = sub_1800141BC(v3);
    LOBYTE(v8) = sub_18001F008(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48));
    return v8 >= 0;
  }
  return v2;
}
