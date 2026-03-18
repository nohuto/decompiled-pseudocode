/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x140B1B7B4
 * Callers:
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x140805960 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1408059A0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x140B1B790 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned __int64 OutputBufferLength; // rax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( !a4 )
  {
    LODWORD(OutputBufferLength) = 0;
LABEL_3:
    InputBuffer[2] = a3;
    InputBuffer[0] = a1;
    v7 = a2;
    InputBuffer[1] = 0;
    InputBuffer[3] = 0;
    return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  OutputBufferLength = 4LL * a3;
  if ( OutputBufferLength <= 0xFFFFFFFF )
    goto LABEL_3;
  return -1073741675;
}
