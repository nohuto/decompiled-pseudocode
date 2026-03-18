/*
 * XREFs of EditionPostInputMessage @ 0x1400F168C
 * Callers:
 *     ApiSetEditionPostInputMessage @ 0x140196610 (ApiSetEditionPostInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64, int, __int64, __int64); // r11

  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64, int, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4856LL);
  if ( v15 )
    return v15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  else
    return 0LL;
}
