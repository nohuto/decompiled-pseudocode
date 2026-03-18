/*
 * XREFs of ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1401A6560
 * Callers:
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14009124C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140091444 (GreIsCurrentProcessSystemCritical.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1401CABEC (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall xxxCheckProcessAndSessionState(PEPROCESS *a1)
{
  NTSTATUS InformationProcess; // edi
  int v3; // r15d
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  char v8; // si
  int v9; // edx
  int v10; // r8d
  __int64 UserSessionState; // rbx
  int (*v12)(void); // rax
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int (*v18)(void); // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int (__fastcall *v21)(_QWORD); // rax
  __int64 v22; // rcx
  __int64 (*v23)(void); // rax
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v27; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rcx
  int v35; // edx
  struct _KPROCESS *v36; // rcx
  int v37; // r8d
  HANDLE v38; // rbx
  struct _CLIENT_ID ClientId; // [rsp+38h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-29h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+78h] [rbp+7h] BYREF
  void *ProcessHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported((__int64)a1) >= 0
    && (unsigned int)GreIsCurrentProcessSystemCritical(v4) )
  {
    return 0LL;
  }
  v8 = 1;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v4) + 40) )
    goto LABEL_10;
  if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 63536) )
    goto LABEL_10;
  UserSessionState = W32GetUserSessionState(v6, v9, v10);
  if ( (*(_DWORD *)(UserSessionState + 68928) & 0x40000) == 0 )
    goto LABEL_10;
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 2576LL);
  if ( !v12 || v12() < 0 || (*(_DWORD *)(UserSessionState + 68928) & 0x10000000) != 0 )
    return 0LL;
  v3 = 1;
LABEL_10:
  if ( (unsigned int)IsCurrentSessionServiceSession(v6) )
    goto LABEL_32;
  ProcessHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*a1);
  if ( !ProcessInheritedFromUniqueProcessId )
    goto LABEL_32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueThread = 0LL;
  InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( InformationProcess >= 0 )
  {
    InformationProcess = ZwQueryInformationProcess(
                           ProcessHandle,
                           ProcessImageInformation,
                           ProcessInformation,
                           0x40u,
                           0LL);
    if ( InformationProcess >= 0 )
    {
      v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48) + 1672LL);
      if ( v18 )
      {
        if ( v18() >= 0 )
        {
          v20 = ProcessInformation[8];
          v21 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48) + 1680LL);
          if ( !v21 || !v21(v20) )
            InformationProcess = -1073741790;
        }
      }
    }
    ZwClose(ProcessHandle);
    if ( InformationProcess >= 0 )
      goto LABEL_32;
  }
  if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
  {
    InformationProcess = 0;
LABEL_32:
    if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !*(_QWORD *)(W32GetUserGdiSessionState(v30) + 40)
        || !*(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 63536)
        || (v36 = *(struct _KPROCESS **)(W32GetUserGdiSessionState(v34) + 40), v36 == *a1)
        || (v38 = *(HANDLE *)(W32GetUserSessionState((_DWORD)v36, v35, v37) + 63536), v38 == PsGetProcessId(*a1)) )
      {
        v8 = 0;
      }
      *((_BYTE *)a1 + 296) = v8;
    }
    return (unsigned int)InformationProcess;
  }
  if ( !v3 )
    goto LABEL_32;
  LOBYTE(v14) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle, v14, v15, v16);
  v23 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 24) + 2584LL);
  if ( v23 )
  {
    v26 = v23();
    InformationProcess = v26;
    if ( v26 == 259 )
    {
      InformationProcess = 0;
    }
    else if ( v26 >= 0 )
    {
      v29 = W32GetUserSessionState(v27, v24, v25);
      *(_DWORD *)(v29 + 68928) |= 0x10000000u;
    }
  }
  else
  {
    InformationProcess = -1073741637;
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle, v24, v25);
  return (unsigned int)InformationProcess;
}
