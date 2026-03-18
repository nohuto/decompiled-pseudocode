/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1401BAE70
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 * Callees:
 *     EditionKeyEventLLHook @ 0x14014CA60 (EditionKeyEventLLHook.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
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
  unsigned int v16; // ebx
  int (*v17)(void); // rax

  v16 = 0;
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5312LL);
  if ( v17 && v17() >= 0 )
    return (unsigned int)EditionKeyEventLLHook(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return v16;
}
