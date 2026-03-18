/*
 * XREFs of DrvDxgkGetMonitorDeviceObject @ 0x14014AB30
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkGetMonitorDeviceObject(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 456))(a1, a2, a3, a4);
}
