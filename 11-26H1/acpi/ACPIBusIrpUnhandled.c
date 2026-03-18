/*
 * XREFs of ACPIBusIrpUnhandled @ 0x1400311D0
 * Callers:
 *     ACPIInternalDeviceQueryResourceRequirements @ 0x1400B1540 (ACPIInternalDeviceQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIBusIrpUnhandled(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // ebp
  __int64 DeviceExtension; // rax
  unsigned int Status; // edi
  _QWORD *v6; // rbx
  char v7; // r10
  const char *v8; // r8
  const char *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp-18h]

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v6 = (_QWORD *)DeviceExtension;
  IofCompleteRequest(a2, 0);
  v7 = 0;
  v8 = byte_140075A82;
  v9 = byte_140075A82;
  if ( v6 )
  {
    v10 = v6[1];
    v7 = (char)v6;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v6[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = (const char *)v6[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (__int64)v9;
    v11 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v11 = 26;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qsLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      5,
      65,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      (__int64)ACPIDispatchPnpTableNames[v11],
      Status,
      v7,
      (__int64)v8,
      v13);
  }
  return Status;
}
