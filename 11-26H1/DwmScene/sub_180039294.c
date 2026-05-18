/*
 * XREFs of sub_180039294 @ 0x180039294
 * Callers:
 *     sub_180039384 @ 0x180039384 (sub_180039384.c)
 * Callees:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 *     sub_18003984C @ 0x18003984C (sub_18003984C.c)
 */

__int64 __fastcall sub_180039294(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_18003984C(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_180039550(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_180039550(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
