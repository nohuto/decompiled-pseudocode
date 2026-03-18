/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x140194F74
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionDoHotKeys @ 0x1401151C8 (EditionDoHotKeys.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  char v8; // bp
  char v9; // r14
  unsigned int v10; // ebx
  int (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v8 = a2;
  v9 = a1;
  v10 = 0;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5736LL);
  if ( v11 && v11() >= 0 )
  {
    LOBYTE(v12) = v8;
    LOBYTE(v13) = v9;
    return (unsigned int)EditionDoHotKeys(v13, v12, a3, a4, a5, a6);
  }
  return v10;
}
