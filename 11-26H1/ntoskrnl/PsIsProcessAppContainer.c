/*
 * XREFs of PsIsProcessAppContainer @ 0x1409D6220
 * Callers:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x140269D30 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     NtReadFile @ 0x1408F9410 (NtReadFile.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409D5658 (ExpGetSystemFirmwareTableInformation.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1409D6288 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // si
  void *v5; // rdi
  NTSTATUS v6; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, a3, a4);
  v6 = SeQueryInformationToken(v5, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v5);
  if ( v6 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v4;
}
