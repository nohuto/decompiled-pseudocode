/*
 * XREFs of DpEvalAcpiMethod @ 0x1403B1CC0
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     DpiAcpiGetAcpiChildName @ 0x140193AF0 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1403B21B4 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        int a2,
        int *a3,
        ULONG a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned int Status; // ebx
  __int64 v10; // r15
  int v11; // r9d
  int v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  IRP *v15; // rax
  _QWORD *ChildDescriptor; // rax
  int v18; // r9d
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  char v21; // [rsp+58h] [rbp-29h]
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  char v25; // [rsp+D8h] [rbp+57h]

  v21 = 0;
  v25 = 0;
  Status = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 184;
    return Status;
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 197;
    return Status;
  }
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
      WdLogGlobalForLineNumber = 210;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 216;
    return Status;
  }
  if ( !*(_BYTE *)(v10 + 1156) )
  {
    Status = -1073741637;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 227;
    return Status;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 244;
    return Status;
  }
  v12 = *a3;
  if ( *a3 != 1634885968 )
  {
    if ( v12 == 543451477 )
    {
      *a3 = 1130980673;
      AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v10, a2);
      if ( !AcpiChildName )
        goto LABEL_35;
      RtlInitAnsiString(&DestinationString, AcpiChildName);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( v12 != 2017818181 )
        goto LABEL_13;
      if ( a2 != -1 )
      {
        Status = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 300;
        return Status;
      }
      *a3 = 1130980673;
      LODWORD(p_DestinationString) = 0;
    }
    return (unsigned int)DpiAcpiEvalAcpiMethodEx(
                           a1,
                           (int)p_DestinationString,
                           (int)a3,
                           v11,
                           OutputBuffer,
                           OutputBufferLength,
                           1);
  }
  v25 = 1;
  *a3 = 1130980673;
LABEL_13:
  if ( a2 == -1 )
  {
    v13 = *(struct _DEVICE_OBJECT **)(v10 + 24);
    memset(&Event, 0, sizeof(Event));
    IoStatusBlock = 0LL;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v13);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = IoBuildDeviceIoControlRequest(
            0x32C004u,
            AttachedDeviceReference,
            a3,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( v15 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v15);
      if ( Status != 259 )
        goto LABEL_16;
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( !Status )
      {
        Status = IoStatusBlock.Status;
LABEL_16:
        if ( (Status & 0x80000000) != 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 425;
        }
        else if ( OutputBufferLength && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
        {
          Status = -1072431089;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 445;
        }
        goto LABEL_21;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 409;
    }
    else
    {
      Status = -1073741670;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 386;
    }
LABEL_21:
    if ( AttachedDeviceReference )
      ObfDereferenceObject(AttachedDeviceReference);
    return Status;
  }
  KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
  ChildDescriptor = DpiFdoGetChildDescriptor(v10, a2);
  if ( ChildDescriptor )
  {
    v21 = 1;
    RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
    Status = DpiAcpiEvalAcpiMethodEx(a1, (int)&DestinationString, (int)a3, v18, OutputBuffer, OutputBufferLength, v25);
  }
  KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
  if ( !v21 )
  {
LABEL_35:
    Status = -1073741810;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 498;
  }
  return Status;
}
