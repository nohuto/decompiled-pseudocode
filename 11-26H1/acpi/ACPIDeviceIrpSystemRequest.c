/*
 * XREFs of ACPIDeviceIrpSystemRequest @ 0x1400457B0
 * Callers:
 *     ACPIRootIrpSetPower @ 0x140045690 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x140026A88 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpForwardRequest @ 0x140026CE0 (ACPIDeviceIrpForwardRequest.c)
 */

__int64 __fastcall ACPIDeviceIrpSystemRequest(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rbx
  unsigned int Length; // esi
  int EaLength; // r14d
  int v9; // edx
  unsigned int v10; // esi
  char v11; // r8
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  int Status; // ebp
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = (Length >> 8) & 0xF;
  LODWORD(CurrentStackLocation) = HIWORD(Length) & 0xF;
  v10 = (unsigned __int16)Length >> 12;
  LODWORD(v18) = (_DWORD)CurrentStackLocation;
  if ( v10 == 5 && (v9 == 2 || (unsigned int)(v9 - 3) <= 1) )
    v10 = v9;
  v11 = 0;
  v12 = byte_140075A82;
  v13 = byte_140075A82;
  if ( DeviceExtension )
  {
    v14 = *(_QWORD *)(DeviceExtension + 8);
    v11 = v6;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(v6 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v10 < 7 )
      v15 = AcpiSystemStateTranslation[v10];
    else
      LOBYTE(v15) = -1;
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v13,
      0xAu,
      0x21u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      v15,
      v11,
      v12,
      v13);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
    return ACPIDeviceInitializePowerRequest(
             v6,
             v10,
             &v18,
             (void (__fastcall *)(__int64, __int64, __int64))ACPIDeviceIrpForwardRequest,
             (__int64)a2,
             EaLength,
             1,
             0);
  ACPIDeviceIrpForwardRequest(v6, a2, Status);
  return (unsigned int)Status;
}
