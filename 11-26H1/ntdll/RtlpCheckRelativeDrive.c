/*
 * XREFs of RtlpCheckRelativeDrive @ 0x18009B244
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlpResetDriveEnvironment @ 0x18009B16C (RtlpResetDriveEnvironment.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpCheckRelativeDrive(wchar_t a1)
{
  size_t v2; // rax
  int v3; // eax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  struct _TEB *v9; // rcx
  __int64 v10; // rdx
  __int16 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+3Ah] [rbp-CEh]
  int v14; // [rsp+3Ch] [rbp-CCh]
  __int64 *v15; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  wchar_t String[2]; // [rsp+98h] [rbp-70h] BYREF
  int v21; // [rsp+9Ch] [rbp-6Ch]
  __int64 v22; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v23[536]; // [rsp+B0h] [rbp-58h] BYREF

  String[1] = a1;
  v14 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  String[0] = 61;
  v21 = 58;
  IoStatusBlock = 0LL;
  v2 = 2 * wcslen(String);
  v16 = 0LL;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  v22 = 0x5C003F003F005CLL;
  v13 = 520;
  v15 = (__int64 *)v23;
  v3 = RtlQueryEnvironmentVariable(0LL, String, (unsigned __int64)(unsigned __int16)v2 >> 1, v23, 260LL, &v16);
  if ( v16 > 0x7FFF || v3 < 0 )
  {
    *(_WORD *)v15 = a1;
    *((_WORD *)v15 + 1) = 58;
    *((_WORD *)v15 + 2) = 92;
    *((_WORD *)v15 + 3) = 0;
    v12 = 6;
    return RtlpResetDriveEnvironment(a1);
  }
  ObjectAttributes.Length = 48;
  v12 = 2 * v16 + 8;
  v13 = 544;
  ObjectAttributes.RootDirectory = 0LL;
  v15 = &v22;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtCurrentTeb();
  WowTebOffset = v4->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
  v6 = 3880LL;
  if ( (_DWORD)v4 != LODWORD(v4->NtTib.SubSystemTib) )
    v6 = 5808LL;
  v7 = *(_DWORD *)((char *)&v4->NtTib.ExceptionList + v6);
  if ( (_DWORD)v4 == LODWORD(v4->NtTib.SubSystemTib) )
    LODWORD(v4->glDispatchTable[167]) = 16;
  else
    v4->HardErrorMode = 16;
  v8 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( (v7 & 0xFFFFFF8F) == 0 )
  {
    v9 = NtCurrentTeb();
    v10 = v9->WowTebOffset;
    if ( (int)v10 < 0 )
      v9 = (struct _TEB *)((char *)v9 + v10);
    if ( (_DWORD)v9 == LODWORD(v9->NtTib.SubSystemTib) )
      LODWORD(v9->glDispatchTable[167]) = v7;
    else
      v9->HardErrorMode = v7;
  }
  if ( v8 < 0 )
    return RtlpResetDriveEnvironment(a1);
  return NtClose(FileHandle);
}
