/*
 * XREFs of MmCreateMirror @ 0x14086EB30
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int v5; // [rsp+64h] [rbp-Ch]
  int Data; // [rsp+80h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+20h] BYREF

  v5 = 0;
  ValueName.Buffer = L"Kernel-MemoryMirroringSupported";
  Type = 0;
  *(_QWORD *)&ValueName.Length = 4194366LL;
  Data = 0;
  ResultDataSize = 4;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0 || Data != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  v3[0] = off_140E006B0[0];
  v3[1] = off_140E006B8[0];
  v3[2] = off_140E006C0[0];
  v4 = 2;
  v3[3] = (unsigned __int64)off_140E006D0 & -(__int64)((dword_140FBF214 & 2) != 0);
  return MmDuplicateMemory(v3);
}
