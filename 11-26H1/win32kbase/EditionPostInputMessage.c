/*
 * XREFs of EditionPostInputMessage @ 0x14006DB88
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ApiSetEditionPostInputMessage @ 0x1400CE394 (ApiSetEditionPostInputMessage.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64, int, __int64, __int64); // r11

  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64, int, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4408LL);
  if ( v15 )
    return v15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  else
    return 0LL;
}
