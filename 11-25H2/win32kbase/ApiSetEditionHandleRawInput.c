/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x140195760
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionHandleRawInput @ 0x140110B5C (EditionHandleRawInput.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        unsigned int a9,
        __int64 a10)
{
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  int (*v15)(void); // rax

  v12 = a2;
  v13 = a1;
  v14 = 0;
  v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5720LL);
  if ( v15 && v15() >= 0 )
    return (unsigned int)EditionHandleRawInput(v13, v12, a3, a4, a5, a6, a7, a8, a9, a10);
  return v14;
}
