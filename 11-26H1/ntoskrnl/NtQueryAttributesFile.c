/*
 * XREFs of NtQueryAttributesFile @ 0x140986B10
 * Callers:
 *     DifNtQueryAttributesFileWrapper @ 0x140684C80 (DifNtQueryAttributesFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 */

NTSTATUS __cdecl NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // r15
  PFILE_BASIC_INFORMATION v5; // rbx
  char UCharFromUser; // al
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS v8; // ebx
  char v9; // al
  PVOID v10; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-270h] BYREF
  _DWORD v13[12]; // [rsp+50h] [rbp-268h] BYREF
  POBJECT_ATTRIBUTES v14; // [rsp+80h] [rbp-238h]
  int v15; // [rsp+90h] [rbp-228h]
  __int16 v16; // [rsp+96h] [rbp-222h]
  int v17; // [rsp+A8h] [rbp-210h]
  PFILE_BASIC_INFORMATION v18; // [rsp+B0h] [rbp-208h]
  _OWORD *v19; // [rsp+B8h] [rbp-200h]
  char v20; // [rsp+D9h] [rbp-1DFh]
  _BYTE *v21; // [rsp+E0h] [rbp-1D8h]
  int v22; // [rsp+E8h] [rbp-1D0h]
  PVOID P[2]; // [rsp+F0h] [rbp-1C8h]
  __int128 v24; // [rsp+100h] [rbp-1B8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-1A8h]
  _OWORD v26[3]; // [rsp+130h] [rbp-188h] BYREF
  __int64 v27; // [rsp+160h] [rbp-158h]
  _BYTE v28[272]; // [rsp+170h] [rbp-148h] BYREF

  memset_0(v28, 0, sizeof(v28));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( &FileInformation[1] < FileInformation || (unsigned __int64)&FileInformation[1] > 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    do
    {
      UCharFromUser = RtlReadUCharFromUser(v5);
      RtlWriteUCharToUser(v5, UCharFromUser);
      v5 = (PFILE_BASIC_INFORMATION)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000uLL) + 4096);
    }
    while ( v5 != (PFILE_BASIC_INFORMATION)((((unsigned __int64)&FileInformation->FileAttributes + 7) & 0xFFFFFFFFFFFFF000uLL)
                                          + 4096) );
  }
  memset_0(v13, 0, 0xE0uLL);
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v13[0] = 14680072;
  v16 = 7;
  v17 = 1;
  v15 = 2113536;
  v18 = FileInformation;
  v19 = v26;
  v20 = 1;
  v21 = v28;
  v14 = ObjectAttributes;
  v22 = 32;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(P[0]) = 40;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v8 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (__int64)v13,
         (__int64)CurrentSilo,
         &Handle);
  if ( P[1] )
  {
    v9 = FsRtlpCleanupEcps(P[1]);
    v10 = P[1];
    if ( v9 )
      v10 = 0LL;
    P[1] = v10;
  }
  if ( v13[8] == -1096154543 )
    return v13[4];
  if ( v8 >= 0 )
  {
    ObCloseHandle(Handle, PreviousMode);
    return -1073741788;
  }
  return v8;
}
