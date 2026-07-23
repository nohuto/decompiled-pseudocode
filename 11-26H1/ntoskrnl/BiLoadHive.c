/*
 * XREFs of BiLoadHive @ 0x1409A1544
 * Callers:
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x14072A1C0 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x14072A1E0 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x14072BB20 (ZwUnloadKey.c)
 *     BiDoesHiveExist @ 0x1409A1830 (BiDoesHiveExist.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiOpenKeyNonBcd @ 0x1409A447C (BiOpenKeyNonBcd.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  void *v6; // rdi
  NTSTATUS v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D0h]
  __int64 v14; // [rsp+30h] [rbp-C8h] BYREF
  void *v15; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+70h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+B0h] [rbp-48h] BYREF

  memset(&SourceFile, 0, 44);
  memset(&TargetKey, 0, 44);
  v14 = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    v15 = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v8 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &v15);
      v7 = v8;
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        TargetKey.Length = 48;
        v6 = v15;
        TargetKey.RootDirectory = v15;
        TargetKey.Attributes = 576;
        TargetKey.ObjectName = &DestinationString;
        *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v19, (PCWSTR)(a2 + 12));
        SourceFile.Length = 48;
        SourceFile.RootDirectory = 0LL;
        SourceFile.Attributes = 576;
        SourceFile.ObjectName = &v19;
        *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
        v9 = BiAcquirePrivilege(18LL, &v14);
        v7 = v9;
        if ( v9 >= 0 )
        {
          v7 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1780u);
          if ( v7 < 0 )
            v7 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1380u);
          if ( v7 < 0 )
            v7 = ZwLoadKey(&TargetKey, &SourceFile);
          BiReleasePrivilege(&v14);
          if ( v7 >= 0 )
          {
            v7 = ZwOpenKey(a3, 0x20019u, &TargetKey);
            if ( v7 < 0 )
            {
              BiAcquirePrivilege(17LL, &v14);
              ZwUnloadKey(&TargetKey);
              BiReleasePrivilege(&v14);
              LODWORD(v12) = v7;
              BiLogMessage(4LL, L"Failed open newly loaded key %ws. Flags: 0x%x Status: %x", SourceString, 576LL, v12);
            }
          }
          else
          {
            v10 = 2LL;
            if ( v7 != -1073741790 )
              v10 = 4LL;
            LODWORD(v13) = v7;
            BiLogMessage(
              v10,
              L"Failed load key %ws. Flags: 0x%x File: %s Status: %x",
              SourceString,
              576LL,
              a2 + 12,
              v13,
              v14);
          }
        }
        else
        {
          BiLogMessage(
            4LL,
            L"Failed to acquire permissions to load hive. Status: %x",
            L"\\Registry\\Machine",
            (unsigned int)v9);
        }
      }
      else
      {
        BiLogMessage(4LL, L"Failed open key %ws. Status: %x", L"\\Registry\\Machine", (unsigned int)v8);
        v6 = v15;
      }
    }
    else
    {
      v7 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v7;
}
