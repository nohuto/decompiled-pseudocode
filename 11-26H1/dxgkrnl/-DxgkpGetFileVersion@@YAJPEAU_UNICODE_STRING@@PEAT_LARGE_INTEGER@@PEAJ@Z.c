/*
 * XREFs of ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1403B089C
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D6C40 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403B02D8 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403FB3D8 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x14041978C (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpGetFileVersion(struct _UNICODE_STRING *a1, union _LARGE_INTEGER *a2, int *a3)
{
  PVOID v5; // r15
  char v6; // r12
  NTSTATUS v7; // eax
  __int64 v8; // rsi
  const wchar_t *v9; // r9
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int Resource; // eax
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+58h] [rbp-F0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-D8h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-D0h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-C8h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-70h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  v5 = 0LL;
  SectionHandle = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  MappedBase = 0LL;
  v6 = 1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a3 )
    *a3 = 0;
  v19 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x1200A9u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v8 = v7;
  if ( a3 )
    *a3 = v7;
  if ( v7 < 0 )
  {
    if ( a3 )
      goto LABEL_21;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 189;
    v9 = L"Failed ZwOpenFile in DxgkpGetFileVersion (ntStatus = %I64d).";
    goto LABEL_8;
  }
  ObjectAttributes.ObjectName = 0LL;
  v10 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x11000000u, FileHandle);
  v8 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 211;
    v9 = L"Failed to create the section on the opened file in DxgkpGetFileVersion (ntStatus = %I64d).";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
  Object[0] = 0LL;
  v11 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, Object, 0LL);
  v8 = v11;
  v5 = Object[0];
  Object[1] = Object[0];
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 226;
    v9 = L"Failed to get the section object from the file in DxgkpGetFileVersion (ntStatus = %I64d).";
    goto LABEL_8;
  }
  if ( (int)MmMapViewInSystemSpaceEx(Object[0], &MappedBase, &v16, &v18, 1LL) < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 246;
    MappedBase = 0LL;
    v16 = 0LL;
    v18 = 0LL;
    v6 = 0;
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v12 = MmMapViewOfSection(v5, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v18, &v16, 2, 0, 2);
    v8 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 274;
      v9 = L"Failed to map the file with MmMapViewOfSection in DxgkpGetFileVersion (ntStatus = %I64d).";
      goto LABEL_8;
    }
  }
  a2->QuadPart = 0LL;
  Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v19, &v16, 0LL, 0LL, 16);
  v8 = Resource;
  if ( Resource >= 0 )
  {
    if ( v16 >= 0x5C && !wcsncmp((const wchar_t *)(v19 + 6), L"VS_VERSION_INFO", 0x20uLL) )
    {
      v14 = v19;
      a2->HighPart = *(_DWORD *)(v19 + 48);
      a2->LowPart = *(_DWORD *)(v14 + 52);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 307;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the file version resource in DxgkpGetFileVersion (ntStatus = %I64d).",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = 0;
  }
LABEL_21:
  if ( MappedBase )
  {
    if ( v6 )
      MmUnmapViewInSystemSpace(MappedBase);
    else
      MmUnmapViewOfSection(PsInitialSystemProcess, MappedBase);
  }
  if ( !v6 )
    KeUnstackDetachProcess(&ApcState);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v8;
}
