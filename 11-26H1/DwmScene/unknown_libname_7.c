/*
 * XREFs of unknown_libname_7 @ 0x18003A064
 * Callers:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 *     sub_18003984C @ 0x18003984C (sub_18003984C.c)
 *     sub_180039974 @ 0x180039974 (sub_180039974.c)
 *     sub_180039C48 @ 0x180039C48 (sub_180039C48.c)
 *     sub_180039F74 @ 0x180039F74 (sub_180039F74.c)
 *     sub_18003C6A8 @ 0x18003C6A8 (sub_18003C6A8.c)
 *     sub_1800552D0 @ 0x1800552D0 (sub_1800552D0.c)
 *     sub_18006EFE8 @ 0x18006EFE8 (sub_18006EFE8.c)
 *     sub_1800D51D4 @ 0x1800D51D4 (sub_1800D51D4.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall unknown_libname_7(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    sub_180011F5C(a3, i);
    a3 += 2;
  }
  return a3;
}
