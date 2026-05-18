/*
 * XREFs of sub_18007AB00 @ 0x18007AB00
 * Callers:
 *     sub_180042190 @ 0x180042190 (sub_180042190.c)
 *     sub_180048BE0 @ 0x180048BE0 (sub_180048BE0.c)
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 *     sub_18008E9D0 @ 0x18008E9D0 (sub_18008E9D0.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 */

bool __fastcall sub_18007AB00(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  const void *v5; // rax
  __int64 v6; // rdx
  const void *v7; // r8

  sub_1800148EC(a1 + 24);
  v5 = (const void *)sub_1800148EC(v4 + 24);
  return sub_18001CFB0(v5, *(_QWORD *)(v6 + 40), v7, *(_QWORD *)(a1 + 40))
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
