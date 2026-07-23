/*
 * XREFs of KsepSdbMapToMemory @ 0x1409D65BC
 * Callers:
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SdbGetDatabaseEdition @ 0x1409D60CC (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x1409D6974 (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbMapToMemory(PCWSTR SourceString, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  _QWORD *v6; // rdi
  PVOID v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // r14
  __int64 inited; // rcx
  __int64 v14; // rcx
  char StackBase; // al
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  HANDLE FileHandle; // [rsp+40h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v14) = v3;
    StackBase = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v14) = 590504;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0LL, (__int64)"KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v4 < 0 )
    {
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(
                                (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                1u)
           + 1) & 0x3F;
      *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v17) = v4;
      *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v17) = 590526;
      if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: ZwCreateSection Failed!\n");
      KsepLogError(0LL, (__int64)"KSE: ZwCreateSection Failed!\n");
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v6 = Object;
      v4 = v5;
      if ( v5 < 0 )
      {
        v16 = ((unsigned __int8)_InterlockedExchangeAdd(
                                  (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                  1u)
             + 1) & 0x3F;
        *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v16) = v4;
        *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v16) = 590540;
        if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
          KsepDebugPrint(0LL, (int)"KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0LL, (__int64)"KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        v7 = Object;
        Object = 0LL;
        BugCheckParameter1 = 0LL;
        v8 = MiSectionControlArea((__int64)v7);
        MiCheckPurgeAndUpMapCount(v8);
        v9 = v6[6];
        LODWORD(Object) = (unsigned int)Object & 0xFFFF0000;
        v10 = v9 - (_QWORD)Object;
        v4 = MiInsertInSystemSpace(v10, (__int64)v6, (__int64 *)&Object, 0, &BugCheckParameter1);
        if ( v4 < 0 )
        {
          MiDereferenceControlArea(v8);
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v19) = v4;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v19) = 590553;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: Unable to map view of section!\n");
          KsepLogError(0LL, (__int64)"KSE: Unable to map view of section!\n");
        }
        else
        {
          v11 = BugCheckParameter1;
          inited = SdbInitDatabaseInMemory(BugCheckParameter1, (unsigned int)v10);
          if ( inited )
          {
            v4 = 0;
            *(_QWORD *)(a2 + 16) = FileHandle;
            *(_QWORD *)(a2 + 24) = SectionHandle;
            *(_QWORD *)(a2 + 32) = v6;
            *(_QWORD *)(a2 + 8) = v11;
            *(_QWORD *)a2 = inited;
            *(_DWORD *)(a2 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
            return (unsigned int)v4;
          }
          v4 = -1073741823;
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v18) = -1073741823;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v18) = 590562;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: SdbInitDatabaseInMemory Failed!\n");
          KsepLogError(0LL, (__int64)"KSE: SdbInitDatabaseInMemory Failed!\n");
          if ( v11 )
            MiRemoveFromSystemSpace(v11);
        }
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
