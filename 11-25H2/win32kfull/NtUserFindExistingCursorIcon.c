/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x140296850
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x140160DF4 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, ULONG64 a2, ULONG64 a3)
{
  int **v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ecx
  char *v10; // r8
  ULONG64 v11; // rdx
  int v12; // ecx
  WCHAR *v13; // rdx
  ULONG64 v14; // r9
  NTSTATUS v15; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v19; // [rsp+20h] [rbp-2B8h]
  int v20; // [rsp+20h] [rbp-2B8h]
  struct tagCURSOR *v21; // [rsp+48h] [rbp-290h]
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-280h] BYREF
  __int128 v23; // [rsp+68h] [rbp-270h] BYREF
  __int64 v24; // [rsp+78h] [rbp-260h]
  __int128 v25; // [rsp+80h] [rbp-258h]
  _QWORD v26[4]; // [rsp+90h] [rbp-248h] BYREF
  char v27[512]; // [rsp+B0h] [rbp-228h] BYREF

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v26, 1LL);
  v6 = (int **)MmUserProbeAddress;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v23 = *(_OWORD *)a3;
  v24 = *(_QWORD *)(a3 + 16);
  v7 = 0LL;
  if ( (_QWORD)v23 )
  {
    LOBYTE(v6) = 3;
    v21 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(v23, (__int64)v6);
    if ( !v21 )
      goto LABEL_37;
    v6 = (int **)MmUserProbeAddress;
  }
  else
  {
    v21 = 0LL;
  }
  if ( a1 >= *v6 )
    a1 = *v6;
  v9 = *a1;
  v19 = *a1;
  LODWORD(v25) = *a1;
  v10 = (char *)*((_QWORD *)a1 + 1);
  *((_QWORD *)&v25 + 1) = v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (ULONG64)&v10[(unsigned __int16)v9 + 2];
  if ( v11 <= (unsigned __int64)v10 || v11 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v9 > HIWORD(v19) )
  {
    if ( (v9 & 1) == 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( (v9 & 1) != 0 )
  {
LABEL_34:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8012);
LABEL_35:
    ExRaiseAccessViolation();
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v12 = *(_DWORD *)a2;
  v20 = *(_DWORD *)a2;
  *(_DWORD *)&v22.Length = *(_DWORD *)a2;
  v13 = *(WCHAR **)(a2 + 8);
  v22.Buffer = v13;
  if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
    if ( v14 <= (unsigned __int64)v13 || v14 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v12 > HIWORD(v20) || (v12 & 1) != 0 )
    {
      if ( (v12 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8015);
      ExRaiseAccessViolation();
    }
  }
  v15 = RtlStringCchCopyW(v27, 256LL, v10);
  if ( v15 < 0 )
  {
    UserSetLastStatus(v15, 1);
  }
  else
  {
    Atom = UserFindAtom(v27);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v22, v21, (struct tagCURSORFIND *)&v23);
      if ( ExistingCursorIcon )
        v7 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_37:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
