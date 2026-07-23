/*
 * XREFs of PipProcessStartPhase1 @ 0x1409B29C0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140499454 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1407B029C (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407B0558 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407B061C (PpProfileQueryHardwareProfileChange.c)
 *     IopUncacheInterfaceInformation @ 0x1409B21E4 (IopUncacheInterfaceInformation.c)
 *     PiDmaGuardProcessPreStart @ 0x1409B2AD4 (PiDmaGuardProcessPreStart.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v8 = 0;
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2),
          started = PpProfileQueryHardwareProfileChange(0, 2, (int)&v8, 0LL),
          started >= 0) )
    {
      PiDmaGuardProcessPreStart(MaxDataSize);
      started = PnpStartDeviceNode(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}
