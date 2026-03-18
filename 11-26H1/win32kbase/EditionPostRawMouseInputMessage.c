/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x14008A200
 * Callers:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x14008A158 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5))(__int64, __int64, _QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                            + 48)
                                                                                + 6496LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))result(a1, a2, a3, a4, a5);
  return result;
}
