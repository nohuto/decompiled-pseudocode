/*
 * XREFs of EditionKeyEventLLHook @ 0x14014CA60
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x1401BAE70 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD, char, __int16, int, int, int, __int64, int, __int64); // r11

  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, __int16, int, int, int, __int64, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5320LL);
  if ( v16 )
    return v16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return 0LL;
}
