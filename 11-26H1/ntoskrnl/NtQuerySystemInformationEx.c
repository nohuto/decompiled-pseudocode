/*
 * XREFs of NtQuerySystemInformationEx @ 0x1408398D0
 * Callers:
 *     DifNtQuerySystemInformationExWrapper @ 0x140689AB0 (DifNtQuerySystemInformationExWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  PVOID Address; // r15
  SIZE_T v7; // rsi
  int v8; // r14d
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  ULONG v17; // r8d
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  __int32 v31; // ecx
  __int32 v32; // ecx
  __int32 v33; // ecx
  __int32 v34; // ecx
  int v35; // ecx
  int v36; // ecx
  char PreviousMode; // di
  SIZE_T Length; // [rsp+28h] [rbp-30h]

  Address = SystemInformation;
  v7 = InputBufferLength;
  v8 = (int)InputBuffer;
  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass > SystemInterruptSteeringInformation )
  {
    if ( SystemInformationClass > SystemSingleProcessorRelationshipInformation )
    {
      v31 = SystemInformationClass - 232;
      if ( !v31 )
        goto LABEL_43;
      v32 = v31 - 6;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_43;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_43;
        v35 = v34 - 9;
        if ( !v35 )
          goto LABEL_43;
        v36 = v35 - 5;
        if ( v36 )
        {
          if ( v36 == 2 )
            goto LABEL_43;
          return -1073741821;
        }
      }
    }
    else
    {
      if ( SystemInformationClass == SystemSingleProcessorRelationshipInformation )
        goto LABEL_43;
      v24 = SystemInformationClass - 181;
      if ( v24 )
      {
        v25 = v24 - 13;
        if ( !v25 )
          goto LABEL_43;
        v26 = v25 - 15;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
            goto LABEL_43;
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 11;
            if ( !v29 )
              goto LABEL_43;
            v30 = v29 - 1;
            if ( v30 && v30 != 7 )
              return -1073741821;
          }
        }
      }
    }
LABEL_23:
    v17 = 8;
    goto LABEL_44;
  }
  if ( SystemInformationClass == SystemInterruptSteeringInformation )
    goto LABEL_43;
  if ( SystemInformationClass > SystemLogicalProcessorAndGroupInformation )
  {
    v18 = SystemInformationClass - 108;
    if ( !v18 )
      goto LABEL_15;
    v19 = v18 - 13;
    if ( !v19 )
      goto LABEL_15;
    v20 = v19 - 20;
    if ( !v20 )
      goto LABEL_15;
    v21 = v20 - 19;
    if ( !v21 )
      goto LABEL_15;
    v22 = v21 - 5;
    if ( !v22 )
      goto LABEL_23;
    v23 = v22 - 10;
    if ( !v23 || v23 == 3 )
      goto LABEL_23;
    return -1073741821;
  }
  if ( SystemInformationClass == SystemLogicalProcessorAndGroupInformation )
    goto LABEL_43;
  v10 = SystemInformationClass - 8;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 15;
  if ( !v11 )
    goto LABEL_15;
  v12 = v11 - 19;
  if ( !v12 )
    goto LABEL_15;
  v13 = v12 - 19;
  if ( !v13 )
    goto LABEL_15;
  v14 = v13 - 11;
  if ( !v14 )
  {
LABEL_43:
    v17 = 4;
    goto LABEL_44;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 10;
    if ( v16 )
    {
      if ( v16 != 17 )
        return -1073741821;
    }
  }
LABEL_15:
  v17 = 2;
LABEL_44:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(InputBuffer, v7, v17);
  LODWORD(Length) = SystemInformationLength;
  LOBYTE(SystemInformation) = PreviousMode;
  return ExpQuerySystemInformation(
           SystemInformationClass,
           v8,
           v7,
           (int)SystemInformation,
           Address,
           Length,
           (__int64)ReturnLength);
}
