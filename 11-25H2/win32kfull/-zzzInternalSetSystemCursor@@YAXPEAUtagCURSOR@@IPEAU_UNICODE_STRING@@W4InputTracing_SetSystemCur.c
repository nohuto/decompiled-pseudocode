/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0
 * Callers:
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140124150 (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140273DD8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x14028528C (-_LoadCursorsAndIcons@@YAHXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140122044 (-LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x140125EE8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140132044 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1401D180C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1401F16B4 (RtlInitUnicodeStringOrId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(
        __int64 a1,
        __int64 a2,
        const struct _UNICODE_STRING *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rsi
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  struct _UNICODE_STRING *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PWSTR Buffer; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  _BOOL8 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rdx
  _QWORD v34[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v6 = 552LL * (unsigned int)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = (struct _UNICODE_STRING *)(UserSessionState + v6 + 21888);
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v15 = W32GetUserSessionState(v10, Buffer);
      RtlInitUnicodeString(v11, (PCWSTR)(v15 + v6 + 21904));
      v11->MaximumLength = 520;
      RtlUnicodeStringCopy(v11, a3);
      v11->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(UserSessionState + v6 + 21888, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(UserSessionState + v6 + 21888), 0LL);
  }
  v17 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + v6 + 21880);
  v18 = v17 == 0;
  if ( v18 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1754LL);
  if ( v17 )
  {
    v25 = W32GetUserSessionState(v18, v16);
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v25 + v6 + 21880));
  }
  else
  {
    v19 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
    if ( PsGetCurrentProcess() != v19
      || (v22 = *(_QWORD *)(a1 + 64)) == 0
      || (v22 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v22 - 100 != v4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1765LL);
    }
    v23 = *(unsigned __int16 *)(W32GetUserSessionState(v21, v20) + v6 + 21872);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v23;
    v34[1] = a1;
    v34[0] = W32GetUserSessionState(v23, v24) + v6 + 21880;
    HMAssignmentLock(v34, 0LL);
  }
  LogSetNewSystemCursor(v4, (__int64)a3, a4);
  v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + v6 + 21880);
  v31 = PtiCurrent(v30, v29);
  Win32HM_LockIntoThread<0>((__int64)v31, v28, BugCheckParameter3);
  xxxEnsureDpiCursorsForSysCur(v4);
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v32);
}
