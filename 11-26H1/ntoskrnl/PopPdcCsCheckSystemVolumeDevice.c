/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x140CDBBC4
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140B29C18 (PopNetIsDisconnectStandbyActive.c)
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _SINGLE_LIST_ENTRY *v2; // r9
  HANDLE v3; // rcx
  int v4; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  __int64 v6; // [rsp+60h] [rbp-29h] BYREF
  int v7; // [rsp+68h] [rbp-21h]
  int v8; // [rsp+6Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  __int64 InputBuffer; // [rsp+B0h] [rbp+27h] BYREF
  int v12; // [rsp+B8h] [rbp+2Fh]
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v14; // [rsp+C8h] [rbp+3Fh]

  InputBuffer = 0LL;
  v12 = 0;
  OutputBuffer = 0LL;
  v14 = 0;
  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80] )
  {
    v6 = *(_QWORD *)&KiSystemServiceTraceCallbackLock.SystemCallNumber;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)&KiSystemServiceTraceCallbackLock.116 + 4);
    FileHandle = 0LL;
    v8 = 1;
    v7 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      InputBuffer = 7LL;
      IoStatusBlock = 0LL;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             &InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
      {
        if ( (_BYTE)v14 )
          PopBsdSkipLogging = 1;
        else
          BYTE1(v8) = 1;
      }
    }
    PopPdcCsDeviceNotification((__int64)&v6);
    v3 = FileHandle;
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock((__int64)v3, v0, v1, v2);
    PopNetIsDisconnectStandbyActive(&v4);
    HIBYTE(PpmIdlePolicyLock.Padding[3]) = (unsigned int)(v4 - 3) > 1;
    PopReleasePolicyLock();
  }
}
