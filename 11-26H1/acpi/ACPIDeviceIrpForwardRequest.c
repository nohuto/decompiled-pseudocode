/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x140026CE0
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1400457B0 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1400254E0 (ACPIDispatchForwardPowerIrp.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v4; // rax
  char v7; // r8
  const char *v9; // rdx
  __int64 v11; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = byte_140075A82;
  v7 = 0;
  v9 = byte_140075A82;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(a1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x20u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      a3,
      v7,
      v4,
      v9);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 556) = 0;
  if ( a3 < 0 )
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIDispatchForwardPowerIrp((ULONG_PTR)CurrentStackLocation->DeviceObject, a2);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
