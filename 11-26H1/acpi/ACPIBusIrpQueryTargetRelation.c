/*
 * XREFs of ACPIBusIrpQueryTargetRelation @ 0x1400C662C
 * Callers:
 *     ACPIDockIrpQueryDeviceRelations @ 0x1400AB9F0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400C61D0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400C63C0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqss @ 0x140018464 (WPP_RECORDER_SF_qDqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIBusIrpQueryTargetRelation(PVOID Object, char a2, PVOID *a3)
{
  _QWORD *DeviceExtension; // rbx
  __int64 Pool2; // rax
  char v8; // di
  NTSTATUS v9; // esi
  _QWORD *v10; // rax
  const char *v12; // rax
  const char *v13; // rdx
  __int64 v14; // r8
  const char *v15; // rax
  char v16; // r10
  const char *v17; // rdx
  __int64 v18; // r8

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Pool2 = ExAllocatePool2(64LL, 16LL, 1232102209LL);
  v8 = 0;
  *a3 = (PVOID)Pool2;
  if ( Pool2 )
  {
    v9 = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
    if ( v9 < 0 )
    {
      v15 = byte_140075A82;
      v16 = 0;
      v17 = byte_140075A82;
      if ( DeviceExtension )
      {
        v18 = DeviceExtension[1];
        v16 = (char)DeviceExtension;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v15 = (const char *)DeviceExtension[76];
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = (const char *)DeviceExtension[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x38u,
          (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
          a2,
          v9,
          v16,
          v15,
          v17);
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    else
    {
      v10 = *a3;
      *(_DWORD *)v10 = 1;
      v10[1] = Object;
    }
    return (unsigned int)v9;
  }
  else
  {
    v12 = byte_140075A82;
    v13 = byte_140075A82;
    if ( DeviceExtension )
    {
      v14 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)DeviceExtension[76];
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x37u,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        a2,
        16,
        v8,
        v12,
        v13);
    return 3221225626LL;
  }
}
