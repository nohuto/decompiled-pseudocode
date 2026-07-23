/*
 * XREFs of WerpEscalationIsDisabled @ 0x18013AC5C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D3D64 (WerpEscalationReadUlongFromKey.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

__int64 WerpEscalationIsDisabled()
{
  unsigned int v0; // ebx
  int v1; // edi
  NTSTATUS v2; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+70h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v1 = 0;
  v6 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v2 = WerpEscalationReadUlongFromKey(KeyHandle, (wchar_t *)L"DisableEscalation", &v6);
    v1 = v6;
    if ( v2 < 0 )
      v1 = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
