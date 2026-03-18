/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x140198B74
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionHandleRawInput @ 0x14014DD00 (EditionHandleRawInput.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
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
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  int (*v15)(void); // rax

  v13 = a1;
  v14 = 0;
  v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5280LL);
  if ( v15 && v15() >= 0 )
    return (unsigned int)EditionHandleRawInput(v13, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v14;
}
