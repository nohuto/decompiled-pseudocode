/*
 * XREFs of ApiSetEditionPostMouseMoveToQ @ 0x140196714
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z @ 0x140221A60 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z.c)
 * Callees:
 *     EditionPostMouseMoveToQ @ 0x1400E7BD8 (EditionPostMouseMoveToQ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostMouseMoveToQ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  int (*v11)(void); // rax

  v10 = 0;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4864LL);
  if ( v11 && v11() >= 0 )
    return (unsigned int)EditionPostMouseMoveToQ(a1, a2, a3, a4, a5, a6);
  return v10;
}
