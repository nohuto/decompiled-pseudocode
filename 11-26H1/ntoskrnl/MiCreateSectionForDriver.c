/*
 * XREFs of MiCreateSectionForDriver @ 0x140AEEB60
 * Callers:
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 * Callees:
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     KeComputeSha256 @ 0x1404D2210 (KeComputeSha256.c)
 *     MiGetBaseNameFromImageFileName @ 0x1404DC2B0 (MiGetBaseNameFromImageFileName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140C193B8 (KdPullRemoteFile.c)
 */

__int64 __fastcall MiCreateSectionForDriver(UNICODE_STRING *p_DestinationString, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  int v8; // r15d
  wchar_t *Pool2; // rcx
  int v11; // r10d
  unsigned __int16 Length; // bx
  __int64 v13; // rcx
  UNICODE_STRING *v14; // rsi
  unsigned __int8 *v15; // rdi
  int v16; // ebx
  int v18; // ecx
  int v19; // r13d
  int v20; // [rsp+40h] [rbp-C0h]
  int v21; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v29[32]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v4) = 0;
  *a4 = 0LL;
  v25 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v7 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v8 = 8;
  stru_140E2D2D0.SchedulerApcFill3[8] = 1;
  FileHandle = 0LL;
  Source = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( !a2 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      Pool2 = 0LL;
      if ( (NtGlobalFlag2 & 8) != 0 )
      {
        DestinationString.Length = 176;
        if ( (int)MiGetBaseNameFromImageFileName(&p_DestinationString->Length, (__int64)&Source) < 0 )
        {
          Length = Source.Length;
        }
        else
        {
          Length = Source.Length;
          if ( Source.Length && (v13 = (unsigned int)(v11 + 2), v13 + (unsigned __int64)Source.Length <= 0xFFFF) )
          {
            LOWORD(v11) = v11 + 2 + Source.Length;
            DestinationString.Length = v13 + Source.Length;
          }
          else
          {
            Length = 0;
            Source.Length = 0;
          }
        }
        DestinationString.MaximumLength = v11;
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
        DestinationString.Buffer = Pool2;
      }
      else
      {
        Length = Source.Length;
      }
      v14 = p_DestinationString;
      if ( Pool2 )
      {
        KeComputeSha256((__int64)p_DestinationString->Buffer, p_DestinationString->Length, (__int64)v29);
        RtlCopyUnicodeString(&DestinationString, &stru_14000EE38);
        v15 = v29;
        v4 = 32LL;
        do
        {
          RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", *v15);
          RtlAppendUnicodeToString(&DestinationString, &pszDest);
          ++v15;
          --v4;
        }
        while ( v4 );
        if ( Length )
        {
          RtlAppendUnicodeToString(&DestinationString, L"_");
          RtlAppendUnicodeStringToString(&DestinationString, &Source);
        }
        p_DestinationString = &DestinationString;
      }
      if ( (int)KdPullRemoteFile(v14, p_DestinationString) < 0 )
        p_DestinationString = v14;
      else
        DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", v14);
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = p_DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
    if ( v16 < 0 )
    {
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0);
      return (unsigned int)v16;
    }
    v7 = (__int64)FileHandle;
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  v18 = ((a3 >> 31) & 0x400000) + 0x100000;
  v19 = ((unsigned int)a3 >> 27) & 8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  if ( (stru_140E366D8.QuantumTarget & 0x400000000LL) == 0 )
    v8 = v19;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = MiCreateSystemSection(&v25, a2, (int)&ObjectAttributes, (__int64)a4, 16, v18, v8, v7, v20, v21, -1, v4, v4);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  if ( v16 < 0 )
  {
    MiLogFailedDriverLoad(p_DestinationString, 0LL, 0LL, (unsigned int)v16);
    return (unsigned int)v16;
  }
  *a4 = v25;
  return 0LL;
}
