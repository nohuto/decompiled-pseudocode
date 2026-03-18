/*
 * XREFs of ApiSetEditionLLMouseWheelHook @ 0x14019CEDC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EditionLLMouseWheelHook @ 0x140159738 (EditionLLMouseWheelHook.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionLLMouseWheelHook(__int64 a1, unsigned int a2, __int128 *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4320LL);
  if ( v9 && v9() >= 0 )
  {
    v11 = *a3;
    return (unsigned int)EditionLLMouseWheelHook(a1, a2, &v11, a4);
  }
  return v8;
}
