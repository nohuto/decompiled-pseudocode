/*
 * XREFs of UsbhBusIfLocationReference @ 0x140001750
 * Callers:
 *     UsbhBusifGetLocationInterface @ 0x140001D60 (UsbhBusifGetLocationInterface.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhBusIfLocationReference(__int64 a1)
{
  __int64 result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement((volatile signed __int32 *)(result + 3420));
  return result;
}
