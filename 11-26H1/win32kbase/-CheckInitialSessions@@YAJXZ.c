/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x140165D48
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x140196754 (--4-$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 CheckInitialSessions(void)
{
  unsigned int v0; // ebx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-29h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+Fh]
  int v14; // [rsp+B0h] [rbp+17h]
  __int64 v15; // [rsp+B8h] [rbp+1Fh]
  __int64 v16; // [rsp+C0h] [rbp+27h]
  int v17; // [rsp+C8h] [rbp+2Fh]
  __int64 v18; // [rsp+D0h] [rbp+37h]
  int v19; // [rsp+D8h] [rbp+3Fh]
  int v20; // [rsp+100h] [rbp+67h] BYREF
  int v21; // [rsp+108h] [rbp+6Fh] BYREF
  void *EventHandle; // [rsp+110h] [rbp+77h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  if ( !(unsigned int)IsCurrentSessionServiceSession() )
  {
    *(_DWORD *)(W32GetUserSessionState(v2, v1, v3) + 68604) = 1;
    W32GetUserSessionState(v5, v4, v6);
    v20 = 0;
    QueryTable.Name = L"NumberOfInitialSessions";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v20;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v20 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v0 = v7;
      if ( v7 >= 0 )
      {
        v21 = 1;
        goto LABEL_8;
      }
      if ( v7 == -1073741771 )
      {
        v21 = 0;
LABEL_8:
        SGRDPgbFirstInteractiveSession<int>::operator=(v8, &v21);
      }
    }
  }
  return v0;
}
