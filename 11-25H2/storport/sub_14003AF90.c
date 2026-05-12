/*
 * XREFs of sub_14003AF90 @ 0x14003AF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     sub_140077A5C @ 0x140077A5C (sub_140077A5C.c)
 */

void __fastcall sub_14003AF90(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, __int64 PowerState, _BYTE *Context)
{
  __int64 v4; // rdx
  int v6; // ecx
  int v7; // r8d

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 620);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      sub_140021110((__int64)Context, 0LL, 0LL);
    sub_140077A5C(Context, v4, PowerState);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_1400541AC(v6, (unsigned int)&unk_14014A840, v7, **((_QWORD **)Context + 620), *((_DWORD *)Context + 14), 1);
  }
}
