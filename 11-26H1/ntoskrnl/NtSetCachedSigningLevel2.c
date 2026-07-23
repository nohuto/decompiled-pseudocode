/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140B0E2C0
 * Callers:
 *     DifNtSetCachedSigningLevel2Wrapper @ 0x14068E580 (DifNtSetCachedSigningLevel2Wrapper.c)
 *     NtSetCachedSigningLevel @ 0x140B0E290 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x140475D50 (RtlUnicodeStringValidateEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int16 v6; // r15
  HANDLE *v7; // rdi
  wchar_t *Buffer; // r12
  char PreviousMode; // r14
  int v10; // ebx
  void *v11; // r15
  size_t v12; // rbx
  wchar_t *v13; // rax
  int v14; // eax
  ULONG v15; // ecx
  _KPROCESS *Process; // rcx
  char v17; // di
  __int64 v18; // rdx
  size_t v19; // rbx
  HANDLE *Pool2; // rax
  ULONG v21; // edx
  unsigned __int16 v22; // cx
  __int64 v23; // rdx
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-A0h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-90h] BYREF
  void *v27; // [rsp+78h] [rbp-80h]
  HANDLE *v28; // [rsp+88h] [rbp-70h]
  wchar_t *v29; // [rsp+90h] [rbp-68h]
  size_t v30; // [rsp+A8h] [rbp-50h]
  UNICODE_STRING *p_SourceString; // [rsp+B0h] [rbp-48h]
  ULONG v33; // [rsp+118h] [rbp+20h]

  v33 = SourceFileCount;
  v6 = Flags;
  v7 = 0LL;
  SourceString = 0LL;
  Buffer = 0LL;
  v29 = 0LL;
  *(_OWORD *)Size = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0x2000) == 0 )
  {
    if ( !SepRmCapTableLock.ReadOperationCount )
      goto LABEL_3;
    if ( (InputSigningLevel & 0x30) != 0 )
    {
LABEL_25:
      v10 = -1073741584;
      goto LABEL_66;
    }
    if ( SourceFileCount - 1 <= 0xFFF )
    {
      if ( (Flags & 6) == 0 && InputSigningLevel )
        goto LABEL_25;
      v15 = Flags & 1;
      if ( (v6 & 2) != 0 && v15 )
      {
LABEL_31:
        v10 = -1073741585;
        goto LABEL_66;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v6 & 2) != 0 )
          goto LABEL_31;
        v6 |= 1u;
        if ( (v6 & 4) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
            goto LABEL_8;
          v17 = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
          LOBYTE(Process) = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
          LOBYTE(v18) = v17;
          SeCompareSigningLevels((__int64)Process, v18);
          SourceFileCount = v33;
        }
      }
      else if ( !v15 && (v6 & 2) == 0 )
      {
        goto LABEL_31;
      }
      v19 = 8LL * SourceFileCount;
      Pool2 = (HANDLE *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      v28 = Pool2;
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_66;
      }
      if ( PreviousMode )
        RtlCopyFromUser(Pool2, SourceFiles, v19);
      else
        RtlCopyVolatileMemory(Pool2, SourceFiles, v19);
      if ( CacheInformation )
      {
        if ( ((unsigned __int8)CacheInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( PreviousMode )
          RtlCopyFromUser(Size, CacheInformation, 0x18uLL);
        else
          RtlCopyVolatileMemory(Size, CacheInformation, 0x18uLL);
        if ( LODWORD(Size[0]) < 0x18 )
        {
          v10 = -1073741580;
          goto LABEL_66;
        }
        v22 = Size[1];
        if ( LOWORD(Size[1]) )
        {
          if ( PreviousMode == 1 )
          {
            SourceString.Buffer = (wchar_t *)ExAllocatePool2(0x103uLL);
            if ( !SourceString.Buffer )
            {
              v10 = -1073741670;
              goto LABEL_66;
            }
            RtlCopyFromUser(SourceString.Buffer, v27, LOWORD(Size[1]));
            v22 = Size[1];
          }
          else
          {
            SourceString.Buffer = (wchar_t *)v27;
          }
          SourceString.Length = v22;
          SourceString.MaximumLength = v22;
          v10 = RtlUnicodeStringValidateEx(&SourceString, v21);
          if ( v10 < 0 )
            goto LABEL_66;
          p_SourceString = &SourceString;
        }
      }
      v23 = v33;
      if ( (v6 & 6) == 0 )
      {
LABEL_64:
        LOBYTE(v23) = PreviousMode;
        v14 = guard_dispatch_icall_no_overrides(v6 & 0x807, v23);
        goto LABEL_21;
      }
      if ( v33 == 1 )
      {
        if ( TargetFile != *v7 )
        {
          v10 = -1073741581;
          goto LABEL_66;
        }
        goto LABEL_64;
      }
    }
    v10 = -1073741582;
    goto LABEL_66;
  }
  if ( *(_QWORD *)&SepRmCapTableLock.ResourceIndex )
  {
    if ( !CacheInformation || !TargetFile )
    {
      v10 = -1073741811;
      goto LABEL_66;
    }
    if ( PreviousMode == 1 )
    {
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
      {
LABEL_8:
        v10 = -1073741790;
        goto LABEL_66;
      }
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Size, CacheInformation, 0x18uLL);
      v11 = v27;
      v12 = Size[1];
      v30 = Size[1];
      if ( !v27 || !Size[1] )
      {
        v10 = -1073741811;
        goto LABEL_66;
      }
      if ( Size[1] > 0xFFFF )
      {
        v10 = -1073741811;
        goto LABEL_66;
      }
      v13 = (wchar_t *)ExAllocatePool2(0x103uLL);
      Buffer = v13;
      v29 = v13;
      if ( !v13 )
      {
        v10 = -1073741670;
        goto LABEL_66;
      }
      RtlCopyFromUser(v13, v11, v12);
    }
    else
    {
      Buffer = CacheInformation->CatalogDirectoryPath.Buffer;
    }
    LOBYTE(Flags) = PreviousMode;
    v14 = guard_dispatch_icall_no_overrides(*(__int64 *)&Flags, (__int64)TargetFile);
LABEL_21:
    v10 = v14;
    goto LABEL_66;
  }
LABEL_3:
  v10 = -1073741822;
LABEL_66:
  if ( SourceString.Buffer && PreviousMode == 1 )
    ExFreePoolWithTag(SourceString.Buffer, 0x63734943u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x63734943u);
  if ( Buffer && PreviousMode == 1 )
    ExFreePoolWithTag(Buffer, 0x63734943u);
  return v10;
}
