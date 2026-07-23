/*
 * XREFs of PopOpenKey @ 0x1404E1080
 * Callers:
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x140603038 (PpmInitIllegalThrottleLogging.c)
 *     PopLoadResumeContext @ 0x140B59F44 (PopLoadResumeContext.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const wchar_t *a2)
{
  NTSTATUS v4; // edi
  size_t v5; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE v10; // [rsp+C0h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v10 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.WriteTransferCount;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v8[0] = 0LL;
    v8[1] = a2;
    if ( a2 )
    {
      v5 = 2 * wcslen(a2);
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v8[0]) = v5;
      WORD1(v8[0]) = v5 + 2;
    }
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&v10, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 < 0 )
      v10 = 0LL;
    else
      *a1 = v10;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v4;
}
