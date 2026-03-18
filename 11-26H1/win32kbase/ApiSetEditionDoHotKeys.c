/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x14019B8C0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionDoHotKeys @ 0x140154428 (EditionDoHotKeys.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(
        __int64 a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  char v9; // r14
  unsigned int v10; // ebx
  int (*v11)(void); // rax
  __int64 v12; // rcx

  v9 = a1;
  v10 = 0;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5296LL);
  if ( v11 && v11() >= 0 )
  {
    LOBYTE(v12) = v9;
    return (unsigned int)EditionDoHotKeys(v12, a2, a3, a4, a5, a6);
  }
  return v10;
}
