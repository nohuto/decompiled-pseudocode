/*
 * XREFs of NtTranslateFilePath @ 0x140A2D4D0
 * Callers:
 *     DifNtTranslateFilePathWrapper @ 0x1406936F0 (DifNtTranslateFilePathWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpTranslateArcPath @ 0x140842E3C (ExpTranslateArcPath.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140B597F4 (ExpTranslateNtPath.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int ULongFromUser; // r15d
  ULONG v9; // edi
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  void *v12; // rsi
  int v14; // eax
  ULONG v15; // eax
  NTSTATUS v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  NTSTATUS v21; // eax
  _QWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-48h]
  PVOID v24; // [rsp+38h] [rbp-40h]
  PVOID P; // [rsp+40h] [rbp-38h]

  P = 0LL;
  v24 = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return -1073741822;
  if ( OutputType - 1 > 4 )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v22[0]) = PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(&InputFilePath->Length);
  else
    ULongFromUser = InputFilePath->Length;
  v23 = ULongFromUser;
  if ( ULongFromUser < 0xC )
    return -1073741811;
  if ( PreviousMode )
  {
    ProbeForRead(InputFilePath, ULongFromUser, 4u);
    v14 = RtlReadULongFromUser(OutputFilePathLength);
    RtlWriteULongToUser(OutputFilePathLength, v14);
    v15 = RtlReadULongFromUser(OutputFilePathLength);
    v9 = v15;
    HIDWORD(v22[0]) = v15;
    if ( !OutputFilePath )
    {
      v9 = 0;
      HIDWORD(v22[0]) = 0;
      v15 = 0;
    }
    if ( v15 )
      ProbeForWrite(OutputFilePath, v15, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v9 = OutputFilePath != 0LL ? *OutputFilePathLength : 0;
    HIDWORD(v22[0]) = v9;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v11 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    return -1073741670;
  if ( PreviousMode )
    RtlCopyFromUser(Pool2, InputFilePath, ULongFromUser);
  else
    RtlCopyVolatileMemory(Pool2, InputFilePath, ULongFromUser);
  v11[1] = ULongFromUser;
  if ( v9 )
  {
    v12 = (void *)ExAllocatePool2(0x40uLL);
    v24 = v12;
    if ( !v12 )
    {
      ExFreePoolWithTag(v11, 0);
      P = 0LL;
      return -1073741670;
    }
  }
  else
  {
    v12 = 0LL;
    v24 = 0LL;
  }
  v16 = ExpVerifyFilePath(v11);
  if ( v16 >= 0 )
  {
    v17 = v11[2];
    if ( OutputType == v17 )
    {
      if ( v9 < ULongFromUser )
        v16 = -1073741789;
      else
        memmove(v12, v11, ULongFromUser);
      v9 = ULongFromUser;
    }
    else
    {
      v18 = v17 - 1;
      if ( !v18 || (v19 = v18 - 1) == 0 )
      {
        v21 = ExpTranslateArcPath((__int64)v11, OutputType, v12, (__int64)v22 + 4);
        goto LABEL_33;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v21 = ExpTranslateNtPath(v11, OutputType, v12, (char *)v22 + 4, v22[0]);
        goto LABEL_33;
      }
      if ( v20 == 1 )
      {
        v21 = ExpTranslateEfiPath(v11, OutputType, v12, (char *)v22 + 4);
LABEL_33:
        v16 = v21;
        v9 = HIDWORD(v22[0]);
        goto LABEL_34;
      }
      v16 = -1073741811;
    }
  }
LABEL_34:
  ExFreePoolWithTag(v11, 0);
  if ( v16 < 0 )
    goto LABEL_38;
  if ( v12 )
  {
    if ( PreviousMode )
      RtlCopyToUser(OutputFilePath, v12, v9);
    else
      RtlCopyVolatileMemory(OutputFilePath, v12, v9);
LABEL_38:
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v24 = 0LL;
    }
  }
  if ( OutputFilePathLength )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(OutputFilePathLength, v9);
    else
      *OutputFilePathLength = v9;
  }
  return v16;
}
