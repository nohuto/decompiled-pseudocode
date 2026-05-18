/*
 * XREFs of sub_1800276EC @ 0x1800276EC
 * Callers:
 *     sub_1800276EC @ 0x1800276EC (sub_1800276EC.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_1800286EC @ 0x1800286EC (sub_1800286EC.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 * Callees:
 *     sub_1800276EC @ 0x1800276EC (sub_1800276EC.c)
 *     sub_1800277A0 @ 0x1800277A0 (sub_1800277A0.c)
 */

__int64 __fastcall sub_1800276EC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_1800277A0(v7, v6) )
  {
    sub_1800276EC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
