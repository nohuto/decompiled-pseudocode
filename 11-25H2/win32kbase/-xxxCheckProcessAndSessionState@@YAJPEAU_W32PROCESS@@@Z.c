/*
 * XREFs of ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1400842FC (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x14008457C (GreIsCurrentProcessSystemCritical.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall xxxCheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rdi
  int (*v9)(void); // rax
  void *ProcessInheritedFromUniqueProcessId; // rax
  int (*v12)(void); // rax
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int (__fastcall *v16)(_QWORD); // rax
  int v17; // eax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+70h] [rbp+7h] BYREF
  void *ProcessHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    return 0LL;
  if ( *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63544) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      if ( (*(_DWORD *)(UserSessionState + 68936) & 0x40000) != 0 )
      {
        v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2552LL);
        if ( !v9 || v9() < 0 || (*(_DWORD *)(UserSessionState + 68936) & 0x10000000) != 0 )
          return 0LL;
        v3 = 1;
      }
    }
  }
  if ( !(unsigned int)IsCurrentSessionServiceSession() )
  {
    ProcessHandle = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_21;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0 )
      {
        v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 1896LL);
        if ( v12 )
        {
          if ( v12() >= 0 )
          {
            v15 = ProcessInformation[8];
            v16 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 1904LL);
            if ( !v16 || !v16(v15) )
              InformationProcess = -1073741790;
          }
        }
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_21:
        if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
        {
          return 0;
        }
        else if ( v3 )
        {
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle, 1);
          v13 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2560LL);
          if ( v13 )
          {
            v17 = v13();
            InformationProcess = v17;
            if ( v17 == 259 )
            {
              InformationProcess = 0;
            }
            else if ( v17 >= 0 )
            {
              HYDRA_HINT(0x10000000LL);
            }
          }
          else
          {
            InformationProcess = -1073741637;
          }
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle, v14);
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
