/*
 * XREFs of PsIsProcessAppContainer @ 0x1409A7110
 * Callers:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x1409293A0 (NtReadFile.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1409A7178 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
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
