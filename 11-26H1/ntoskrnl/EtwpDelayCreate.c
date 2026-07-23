/*
 * XREFs of EtwpDelayCreate @ 0x140A15A94
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     SeImpersonateClientEx @ 0x1409041F0 (SeImpersonateClientEx.c)
 *     EtwpCreateNtFileName @ 0x140A15C6C (EtwpCreateNtFileName.c)
 *     PsRevertToSelf @ 0x140AE5830 (PsRevertToSelf.c)
 *     EtwpCreateDirectoryFile @ 0x140AF9AF8 (EtwpCreateDirectoryFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDelayCreate(
        PCWSTR *a1,
        __int64 a2,
        char *a3,
        char a4,
        char a5,
        char a6,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v9; // rcx
  char v11; // r12
  int v12; // eax
  WCHAR *v13; // rsi
  NTSTATUS v14; // ebx
  char v15; // bl
  char v16; // r15
  __int16 *i; // rdi
  __int16 v19; // ax
  ULONG ShareAccess; // [rsp+30h] [rbp-81h]
  PCWSTR SourceString; // [rsp+60h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  char v25; // [rsp+108h] [rbp+57h] BYREF
  char v26; // [rsp+118h] [rbp+67h]

  v26 = a4;
  v25 = 0;
  SourceString = 0LL;
  v9 = *(_QWORD *)(a2 + 8);
  v11 = 0;
  IoStatusBlock = 0LL;
  v12 = EtwpCreateNtFileName(v9, &SourceString, &v25);
  v13 = (WCHAR *)SourceString;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( ClientContext )
    {
      v14 = SeImpersonateClientEx(ClientContext, 0LL);
      if ( v14 < 0 )
        goto LABEL_8;
      v11 = 1;
    }
    v15 = *a3;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    SourceString = 0LL;
    v16 = a5;
    DestinationString = 0LL;
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, v13);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = v16 != 0 ? 576 : 1600;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwCreateFile(
              (PHANDLE)&SourceString,
              v16 != 0 ? 1245323 : 1179787,
              &ObjectAttributes,
              &IoStatusBlock,
              0LL,
              0x80u,
              5u,
              v15 != 0 ? 3 : 5,
              a4 != 0 ? 40 : 32,
              0LL,
              0);
      *a1 = SourceString;
    }
    else
    {
      v14 = -1073741811;
    }
    if ( a6 && v14 == -1073741766 && !v25 )
    {
      for ( i = (__int16 *)(v13 + 12); *i != 92 && *i; ++i )
        ;
      v19 = *i;
      while ( v19 )
      {
        v19 = *++i;
        if ( *i == 92 )
        {
          ShareAccess = (unsigned __int8)*a3;
          *i = 0;
          v14 = EtwpCreateDirectoryFile(v13, 0LL, &IoStatusBlock, ShareAccess);
          if ( v14 < 0 )
            goto LABEL_6;
          *i = 92;
          v19 = 92;
        }
      }
      v14 = EtwpCreateDirectoryFile(v13, (__int64)a1, &IoStatusBlock, (unsigned __int8)*a3);
    }
LABEL_6:
    if ( v11 )
      PsRevertToSelf();
  }
LABEL_8:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 && *a3 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v14;
}
