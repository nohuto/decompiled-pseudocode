/*
 * XREFs of NtGetNlsSectionPtr @ 0x140A9B7D0
 * Callers:
 *     DifNtGetNlsSectionPtrWrapper @ 0x14067D1F0 (DifNtGetNlsSectionPtrWrapper.c)
 *     RtlpInitCodePageTables @ 0x140807B14 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x140807CBC (RtlpInitUppercaseTables.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1407286A0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x140A9BB70 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140B2BDF4 (RtlpInitNlsFileName.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  __int64 v9; // r13
  char PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  _QWORD *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // [rsp+58h] [rbp-210h] BYREF
  PVOID Object; // [rsp+60h] [rbp-208h] BYREF
  void *v19; // [rsp+68h] [rbp-200h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-1F8h] BYREF
  void *v21; // [rsp+78h] [rbp-1F0h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-1E0h] BYREF
  __int128 v23; // [rsp+90h] [rbp-1D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-198h] BYREF
  OBJECT_ATTRIBUTES v26; // [rsp+E0h] [rbp-188h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v28[128]; // [rsp+120h] [rbp-148h] BYREF
  _BYTE v29[128]; // [rsp+1A0h] [rbp-C8h] BYREF

  LODWORD(v17) = SectionData;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v25 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  if ( !SectionPointer && !ContextData )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SectionPointer )
    {
      ULong64FromUser = RtlReadULong64FromUser(SectionPointer);
      RtlWriteULong64ToUser(SectionPointer, ULong64FromUser);
    }
    if ( SectionSize )
    {
      v12 = RtlReadULong64FromUser(SectionSize);
      RtlWriteULong64ToUser(SectionSize, v12);
    }
    if ( ContextData )
    {
      v13 = RtlReadULong64FromUser(ContextData);
      RtlWriteULong64ToUser(ContextData, v13);
      return -1073741583;
    }
  }
  result = RtlpInitNlsSectionName(SectionType, SectionData, v28);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ((SectionType - 11) & 0xFFFFFFFC) != 0 || SectionType == 13 )
    {
      v14 = -1073741823;
    }
    else
    {
      v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v14 < 0 )
      {
        *(&v26.Length + 1) = 0;
        *(&v26.Attributes + 1) = 0;
        v23 = 0LL;
        result = RtlpInitNlsFileName(SectionType, (unsigned int)v17, v29);
        if ( result < 0 )
          return result;
        v26.Length = 48;
        v26.RootDirectory = 0LL;
        v26.Attributes = 576;
        v26.ObjectName = (PUNICODE_STRING)&v23;
        *(_OWORD *)&v26.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v26, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      Object = 0LL;
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        if ( SectionPointer )
        {
          *(_QWORD *)&v23 = 0LL;
          if ( PreviousMode )
          {
            v15 = Object;
            v14 = MmMapViewOfSection(
                    (__int64)Object,
                    (__int64)KeGetCurrentThread()->ApcState.Process,
                    &v21,
                    0LL,
                    0LL,
                    (__int64)&v23,
                    (__int64 *)&v19,
                    1,
                    0x400000,
                    2);
            v9 = (__int64)v19;
          }
          else
          {
            v19 = 0LL;
            v15 = Object;
            Object = (PVOID)MiSectionControlArea((__int64)Object);
            MiCheckPurgeAndUpMapCount((__int64)Object);
            v17 = 0LL;
            v9 = v15[6];
            v14 = MiInsertInSystemSpace(v9, (__int64)v15, &v17, 0, (ULONG_PTR *)&v19);
            if ( v14 < 0 )
            {
              MiDereferenceControlArea((__int64)Object);
            }
            else
            {
              v21 = v19;
              v14 = 0;
            }
          }
        }
        else
        {
          v15 = Object;
        }
        if ( !ContextData )
          ObfDereferenceObject(v15);
        if ( v14 >= 0 )
        {
          if ( SectionPointer )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(SectionPointer, (__int64)v21);
            else
              *SectionPointer = v21;
          }
          if ( SectionSize )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(SectionSize, v9);
            else
              *(_QWORD *)SectionSize = v9;
          }
          if ( ContextData )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(ContextData, (__int64)v15);
            else
              *(_QWORD *)ContextData = v15;
          }
        }
      }
    }
    return v14;
  }
  return result;
}
