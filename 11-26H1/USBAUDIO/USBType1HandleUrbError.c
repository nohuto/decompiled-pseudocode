/*
 * XREFs of USBType1HandleUrbError @ 0x14003F5D0
 * Callers:
 *     USBType1ProcessPin @ 0x140002240 (USBType1ProcessPin.c)
 * Callees:
 *     USBType1ClearLeftovers @ 0x140007B68 (USBType1ClearLeftovers.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x14000B868 (USBType1AsyncEndpointAbortFeedback.c)
 *     USBHwDataPipeReset @ 0x14002D724 (USBHwDataPipeReset.c)
 */

__int64 __fastcall USBType1HandleUrbError(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // r8d

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  if ( *(_BYTE *)(v3 + 112) )
  {
    *(_BYTE *)(v3 + 116) = 0;
    v4 = USBHwDataPipeReset(a1);
    USBType1AsyncEndpointAbortFeedback(a1);
    v5 = *(_DWORD *)(v3 + 872);
    *(_BYTE *)(v3 + 116) = 1;
    *(_DWORD *)(v1 + 104) = v5;
    *(_DWORD *)(v3 + 136) = (v5 % 0x3E8) << 14;
  }
  else
  {
    v4 = USBHwDataPipeReset(a1);
  }
  USBType1ClearLeftovers((_QWORD *)v1);
  return v4;
}
