/*
 * XREFs of SmpProcessFileRenames @ 0x1400173C0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpEventWrite @ 0x14000D280 (SmpEventWrite.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D2D4 (SmpFreeSavedRegistryEntry.c)
 *     SmpEventWriteString2 @ 0x14000D480 (SmpEventWriteString2.c)
 *     SmpClearTemporaryFiles @ 0x14000DDB4 (SmpClearTemporaryFiles.c)
 *     SmpFinishPFROLogging @ 0x1400146C4 (SmpFinishPFROLogging.c)
 *     SmpForceDeleteTargetFile @ 0x14001483C (SmpForceDeleteTargetFile.c)
 *     SmpLogPFROError @ 0x140016BF0 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x14001718C (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017244 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpRenameTargetFile @ 0x1400177D8 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140018310 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140018514 (SmpTryOverwriteReadonlyFile.c)
 */

void __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r12
  __int64 *v2; // rax
  int v3; // r15d
  __int64 v4; // rbx
  char v5; // r13
  unsigned __int16 *v6; // rdi
  char v7; // r14
  unsigned __int16 v8; // cx
  _WORD *v9; // rax
  _WORD *v10; // rax
  int v11; // edi
  __int64 v12; // r9
  USHORT Length; // cx
  PWSTR Buffer; // rax
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r8
  struct _UNICODE_STRING *v19; // [rsp+30h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES v21[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int8 OldValue; // [rsp+D8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  OldValue = 1;
  Handle = 0LL;
  DestinationString = 0LL;
  v1 = 0;
  memset(v21, 0, 44);
  if ( SmpAllowProtectedRenames && RtlAdjustPrivilege(0x12u, 1u, 0, &OldValue) < 0 )
    OldValue = 1;
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v2 = (__int64 *)SmpFileRenameList;
  v3 = 0;
  v4 = SmpFileRenameList;
  ValueData = 0;
  while ( v2 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v5 = 0;
    v19 = (struct _UNICODE_STRING *)v4;
    v6 = (unsigned __int16 *)(v4 + 16);
    v7 = 1;
    SmpEventWriteString2((__int64)&SmpFileRenameList, (unsigned __int16 *)(v4 + 16), (unsigned __int16 *)(v4 + 32));
    v8 = *(_WORD *)(v4 + 16);
    if ( v8 >= 4u )
    {
      v9 = *(_WORD **)(v4 + 24);
      if ( *v9 == 42 )
      {
        v5 = 1;
        v7 = v9[1] != 48;
        v8 -= 4;
        *v6 = v8;
        *(_WORD *)(v4 + 18) -= 4;
        *(_QWORD *)(v4 + 24) = v9 + 2;
      }
    }
    if ( *(_WORD *)(v4 + 32) )
    {
      v21[0].RootDirectory = 0LL;
      v21[0].Length = 48;
      v21[0].ObjectName = (PUNICODE_STRING)(v4 + 16);
      v21[0].Attributes = 64;
      *(_OWORD *)&v21[0].SecurityDescriptor = 0LL;
      v11 = SmpOpenTargetFile(&Handle, 0x110000u, v21, 0, 3u);
      if ( v11 >= 0 )
      {
        if ( v7 != 1 || SmpPathCanBeTrustedIsNotARedirection(Handle, (unsigned __int16 *)(v4 + 16), 0) )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v4 + 40));
          Length = DestinationString.Length;
          Buffer = DestinationString.Buffer;
          if ( DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
          {
            DestinationString.MaximumLength -= 4;
            Length = DestinationString.Length - 4;
            Buffer = DestinationString.Buffer + 2;
            DestinationString.Length -= 4;
            DestinationString.Buffer += 2;
          }
          if ( *Buffer == 33 || *Buffer == 64 )
          {
            v15 = 1;
            DestinationString.Buffer = Buffer + 1;
            DestinationString.MaximumLength -= 2;
            DestinationString.Length = Length - 2;
          }
          else
          {
            v15 = 0;
          }
          LOBYTE(v12) = v7;
          v16 = SmpRenameTargetFile(&DestinationString, Handle, v15, v12);
          v11 = v16;
          if ( v16 < 0 )
          {
            if ( v15 )
            {
              if ( v16 == -1073741790 )
              {
                LOBYTE(v17) = v7;
                v11 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v17);
                if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741638 )
                {
                  LOBYTE(v18) = v7;
                  v11 = SmpShuffleMove(&DestinationString, Handle, v18);
                  if ( v11 >= 0 )
                    ValueData = 1;
                }
              }
            }
          }
        }
        else
        {
          v11 = -1073740533;
        }
      }
    }
    else
    {
      v10 = *(_WORD **)(v4 + 24);
      if ( *v10 == 64 )
      {
        *(_QWORD *)(v4 + 24) = v10 + 1;
        *v6 = v8 - 2;
      }
      v11 = SmpForceDeleteTargetFile((struct _UNICODE_STRING *)(v4 + 16), v7);
    }
    if ( Handle )
      NtClose(Handle);
    if ( v11 < 0 )
    {
      SmpLogFailureString((__int64)"SmpProcessFileRenames", 0x1C25u, *(_QWORD *)(v4 + 24), v11);
      v1 |= SmpLogPFROError(v4 + 16, (const wchar_t *)(v4 + 32), v11);
    }
    else
    {
      ++v3;
    }
    if ( v5 == 1 )
    {
      *(_WORD *)(v4 + 16) += 4;
      *(_WORD *)(v4 + 18) += 4;
      *(_QWORD *)(v4 + 24) -= 4LL;
    }
    v4 = *(_QWORD *)v4;
    SmpFreeSavedRegistryEntry(v19);
    v2 = (__int64 *)SmpFileRenameList;
  }
  if ( !OldValue )
    RtlAdjustPrivilege(0x12u, 0, 0, &OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( a1 )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  SmpFinishPFROLogging(v3, v1);
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
