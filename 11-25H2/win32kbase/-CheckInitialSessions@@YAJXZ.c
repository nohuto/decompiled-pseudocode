/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x140153818
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x1401B30A0 (--4-$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 CheckInitialSessions(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-29h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+Fh]
  int v12; // [rsp+B0h] [rbp+17h]
  __int64 v13; // [rsp+B8h] [rbp+1Fh]
  __int64 v14; // [rsp+C0h] [rbp+27h]
  int v15; // [rsp+C8h] [rbp+2Fh]
  __int64 v16; // [rsp+D0h] [rbp+37h]
  int v17; // [rsp+D8h] [rbp+3Fh]
  int v18; // [rsp+100h] [rbp+67h] BYREF
  int v19; // [rsp+108h] [rbp+6Fh] BYREF
  void *EventHandle; // [rsp+110h] [rbp+77h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  if ( !(unsigned int)IsCurrentSessionServiceSession() )
  {
    *(_DWORD *)(W32GetUserSessionState(v2, v1) + 68612) = 1;
    W32GetUserSessionState(v4, v3);
    v18 = 0;
    QueryTable.Name = L"NumberOfInitialSessions";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v18;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v11 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v18 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v0 = v5;
      if ( v5 >= 0 )
      {
        v19 = 1;
        goto LABEL_8;
      }
      if ( v5 == -1073741771 )
      {
        v19 = 0;
LABEL_8:
        SGRDPgbFirstInteractiveSession<int>::operator=(v6, &v19);
      }
    }
  }
  return v0;
}
