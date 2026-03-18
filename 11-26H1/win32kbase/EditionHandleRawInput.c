/*
 * XREFs of EditionHandleRawInput @ 0x14014DD00
 * Callers:
 *     ApiSetEditionHandleRawInput @ 0x140198B74 (ApiSetEditionHandleRawInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionHandleRawInput(
        __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        unsigned int a9,
        __int64 a10)
{
  unsigned int v13; // ebp
  __int64 v14; // r9
  __int64 (__fastcall *v15)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int16, __int16, unsigned int, __int64); // r11
  __int64 v16; // r8

  v13 = a1;
  v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int16, __int16, unsigned int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5288LL);
  if ( !v15 )
    return 0LL;
  v16 = a9;
  LOBYTE(v14) = a4;
  LOBYTE(v16) = a3;
  return v15(v13, a2, v16, v14, a5, a6, a7, a8, a9, a10);
}
