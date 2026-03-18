/*
 * XREFs of ApiSetEditionPostMouseMoveToQ @ 0x14012D2E8
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14022432C (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 * Callees:
 *     EditionPostMouseMoveToQ @ 0x14012D38C (EditionPostMouseMoveToQ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostMouseMoveToQ(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v10; // r14d
  unsigned int v11; // ebx
  int (*v12)(void); // rax

  v10 = a1;
  v11 = 0;
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4416LL);
  if ( v12 && v12() >= 0 )
    return (unsigned int)EditionPostMouseMoveToQ(v10, a2, a3, a4, a5, a6, a7);
  return v11;
}
