/*
 * XREFs of KeCommitSmtState @ 0x1405F4150
 * Callers:
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

int KeCommitSmtState()
{
  int result; // eax
  int v1; // ecx
  unsigned int Data; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v8; // [rsp+98h] [rbp+3Fh]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v8 = 0;
  ResultLength = 0;
  Data = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ValueName.Buffer = L"FeatureSettings";
  *(_QWORD *)&ValueName.Length = 2097182LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.IptSaveArea;
  KeyValueInformation = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_8;
  result = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
  {
    v1 = 0;
  }
  else
  {
    if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      goto LABEL_8;
    v1 = HIDWORD(KeyValueInformation);
  }
  Data = v1 & 0xFFE3FFFF | KiFeatureSettings & 0x1C0000;
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
LABEL_8:
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
