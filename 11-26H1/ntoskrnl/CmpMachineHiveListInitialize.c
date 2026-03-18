/*
 * XREFs of CmpMachineHiveListInitialize @ 0x140B639D4
 * Callers:
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14084AE80 (CmpBuildMachineHiveMountPoint.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140AE1E78 (CmpQueryHiveRedirectionFileList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char CmpMachineHiveListInitialize()
{
  _UNKNOWN **v0; // rax
  unsigned int i; // edi
  __int64 v2; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v4; // rbp
  UNICODE_STRING *v5; // rbx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-B8h] BYREF
  char v8; // [rsp+40h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

  v0 = &retaddr;
  for ( i = 0; i < 7; ++i )
  {
    v2 = 23LL * i;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    *(_QWORD *)&ValueName.Length = 0x800000LL;
    ValueName.Buffer = (wchar_t *)&v8;
    CmpBuildMachineHiveMountPoint(i, &ValueName);
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v4 = Pool2;
    if ( !Pool2 )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, i, 0LL);
    v5 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 21];
    *v5 = 0LL;
    WORD1(CmpMachineHiveList[v2 + 21]) = 128;
    CmpMachineHiveList[v2 + 22] = Pool2;
    LOBYTE(v0) = CmpQueryHiveRedirectionFileList(&ValueName, v5);
    if ( !(_BYTE)v0 || v5->Length == 2 )
    {
      *v5 = 0LL;
      v5->MaximumLength = 128;
      v5->Buffer = v4;
      RtlAppendUnicodeToString((PUNICODE_STRING)&CmpMachineHiveList[v2 + 21], L"\\SystemRoot\\System32\\Config\\");
      LOBYTE(v0) = RtlAppendUnicodeToString((PUNICODE_STRING)&CmpMachineHiveList[v2 + 21], CmpMachineHiveList[v2]);
    }
  }
  return (char)v0;
}
