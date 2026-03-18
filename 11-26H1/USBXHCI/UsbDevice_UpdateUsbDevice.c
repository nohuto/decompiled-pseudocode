/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x14003C83C
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x14003C610 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E800 (UsbDevice_RunUpdateTunnelStateDsm.c)
 * Callees:
 *     Etw_DeviceUpdate @ 0x140001114 (Etw_DeviceUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039514 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     RootHub_SetPortResumeTime @ 0x14004A45C (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004B32C (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_Usb4TunnelState @ 0x14004B534 (RootHub_Usb4TunnelState.c)
 */

char __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // al

  v4 = 1;
  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 && *(_BYTE *)(a2 + 52) )
    *(_BYTE *)(a1 + 144) = 1;
  if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 124) = *(_OWORD *)v5;
    *(_WORD *)(a1 + 140) = *(_WORD *)(v5 + 16);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 576) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 143));
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 577) = 1;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v6 + 744) & 0x10000000LL) == 0 && (*(_DWORD *)(a2 + 24) & 0x80u) != 0 )
  {
    v7 = RootHub_Usb4TunnelState(*(_QWORD *)(v6 + 152), *(unsigned int *)(a1 + 44));
    *(_BYTE *)(a2 + 67) = v7;
    if ( v7 == 2 || v7 == 4 )
      v4 = 0;
    *(_BYTE *)(a2 + 66) = v4;
  }
  XilUsbDevice_QueryAttributesFromTrustlet(a1);
  return Etw_DeviceUpdate(0LL, a1);
}
