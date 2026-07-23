/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x18015D3F0
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKeyEx @ 0x1801613B0 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  v2[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  v2[0] = 13500620LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKeyEx(&KeyHandle, 0x20119u, &ObjectAttributes, 0) >= 0;
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
