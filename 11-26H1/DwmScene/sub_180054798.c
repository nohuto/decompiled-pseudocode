/*
 * XREFs of sub_180054798 @ 0x180054798
 * Callers:
 *     sub_180054798 @ 0x180054798 (sub_180054798.c)
 *     sub_180054C34 @ 0x180054C34 (sub_180054C34.c)
 *     sub_180055BDC @ 0x180055BDC (sub_180055BDC.c)
 * Callees:
 *     sub_180054798 @ 0x180054798 (sub_180054798.c)
 *     sub_1800547F0 @ 0x1800547F0 (sub_1800547F0.c)
 */

__int64 __fastcall sub_180054798(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_1800547F0(v7, v6) )
  {
    sub_180054798(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
