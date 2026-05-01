/*
 * XREFs of RtlQueryResourcePolicy @ 0x18009801C
 * Callers:
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18008B868 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     RhpCaptureSnapshots @ 0x18008CAB0 (RhpCaptureSnapshots.c)
 *     RhpCaptureSnapshots_0 @ 0x180097C44 (RhpCaptureSnapshots_0.c)
 * Callees:
 *     RtlGetNtSystemRoot_0 @ 0x1800702F4 (RtlGetNtSystemRoot_0.c)
 *     NtClose_0 @ 0x180070318 (NtClose_0.c)
 *     RtlRunOnceExecuteOnce_0 @ 0x18007033C (RtlRunOnceExecuteOnce_0.c)
 *     RtlpGetVolumeHandle @ 0x1800982C8 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800983FC (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18009862C (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 RtlQueryResourcePolicy(int a1, _NT_PRODUCT_TYPE a2, int *a3, ...)
{
  int VolumeHandle; // ebx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  const wchar_t *NtSystemRoot_0; // rax
  unsigned __int64 v10; // rax
  bool v11; // cc
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+20h] BYREF
  va_list Handlea; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Handlea, a3);
  Handle = va_arg(va1, HANDLE);
  ProductType = a2;
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( !a1 )
  {
    ProductType = 0;
    if ( !RtlGetNtProductType(&ProductType) || ProductType != NtProductWinNt )
      goto LABEL_25;
    v10 = MEMORY[0x7FFE0310];
    if ( !MEMORY[0x7FFE0310] )
      v10 = MEMORY[0x7FFE02E8];
    v11 = v10 <= 0x83400;
    v8 = 10;
    if ( !v11 )
LABEL_25:
      v8 = 20;
    goto LABEL_26;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      NtSystemRoot_0 = L"C:\\data\\programs\\windowsapps";
    else
      NtSystemRoot_0 = (const wchar_t *)RtlGetNtSystemRoot_0();
    return (unsigned int)RtlpQueryDiskSpacePolicy(NtSystemRoot_0, a3);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    {
      *a3 = 20;
      return 0;
    }
    RtlRunOnceExecuteOnce_0();
    v8 = RtlpDiskSpeedPolicy;
LABEL_26:
    *a3 = v8;
    return 0;
  }
  if ( v6 == 1 )
  {
    v7 = RtlGetNtSystemRoot_0();
    Handle = 0LL;
    VolumeHandle = RtlpGetVolumeHandle(v7, (HANDLE *)Handlea);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a3);
      if ( VolumeHandle >= 0 )
        VolumeHandle = 0;
    }
    if ( Handle )
      NtClose_0(Handle);
  }
  else
  {
    return (unsigned int)-1073741821;
  }
  return (unsigned int)VolumeHandle;
}
