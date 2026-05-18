/*
 * XREFs of sub_18008C0EC @ 0x18008C0EC
 * Callers:
 *     sub_18008C2CC @ 0x18008C2CC (sub_18008C2CC.c)
 * Callees:
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 *     sub_18008C9EC @ 0x18008C9EC (sub_18008C9EC.c)
 */

__int64 __fastcall sub_18008C0EC(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *Src,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  void *v13; // rdi

  v13 = (void *)sub_18008C9EC(Src, a2, a12, a6, a7);
  sub_18008C5BC(a1, a12, (__int64)a6, a7, a8);
  return sub_18008C5BC(v13, a5 - a12, (__int64)a6, a7, a8);
}
