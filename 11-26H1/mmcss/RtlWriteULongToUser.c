/*
 * XREFs of RtlWriteULongToUser @ 0x14000D1F4
 * Callers:
 *     RtlWriteULongToUser$thunk$10400971452996433967 @ 0x140007020 (RtlWriteULongToUser$thunk$10400971452996433967.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1400044A6 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULongToUser(_DWORD *a1, int a2)
{
  ProbeForRead_0(a1, 4uLL, 1u);
  *a1 = a2;
}
