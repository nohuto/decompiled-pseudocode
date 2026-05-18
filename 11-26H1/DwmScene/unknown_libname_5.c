/*
 * XREFs of unknown_libname_5 @ 0x18002F180
 * Callers:
 *     sub_1800357BC @ 0x1800357BC (sub_1800357BC.c)
 * Callees:
 *     sub_180031F70 @ 0x180031F70 (sub_180031F70.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    sub_180031F70(a3, i);
    a3 += 16LL;
  }
  return a3;
}
