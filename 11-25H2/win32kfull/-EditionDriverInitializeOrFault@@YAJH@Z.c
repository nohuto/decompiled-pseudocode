/*
 * XREFs of ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 * Callees:
 *     FreeWin32kApiSetTable @ 0x1401F951C (FreeWin32kApiSetTable.c)
 *     CreateWin32kApiSetTable @ 0x14020FFD0 (CreateWin32kApiSetTable.c)
 *     ?InitializeWinArrangeGlobal@@YAJXZ @ 0x14021E8F0 (-InitializeWinArrangeGlobal@@YAJXZ.c)
 *     _anonymous_namespace_::InitializeTimerGlobals @ 0x140285194 (_anonymous_namespace_--InitializeTimerGlobals.c)
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline @ 0x14028557C (Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline @ 0x1402855D0 (Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@ForegroundLaunch@@YAJXZ @ 0x14028EDFC (-Initialize@ForegroundLaunch@@YAJXZ.c)
 *     ?InitializeFeedbackData@@YAJXZ @ 0x1402A53E8 (-InitializeFeedbackData@@YAJXZ.c)
 *     ?Initialize@CursorApiRouter@@SAJXZ @ 0x1402DBEF0 (-Initialize@CursorApiRouter@@SAJXZ.c)
 *     ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x1402DDE64 (-Initialize@ShellForegroundBoost@@YAJXZ.c)
 *     CreatePerSessionWin32kCall @ 0x1403417B0 (CreatePerSessionWin32kCall.c)
 */

__int64 __fastcall EditionDriverInitializeOrFault(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONG_PTR UserSessionState; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 KernelEvent; // rax
  ForegroundLaunch *v20; // rcx
  ShellForegroundBoost *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx

  SessionState = W32GetSessionState(a1, a2);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 144));
  v5 = Win32kApiSetTable;
  if ( Win32kApiSetTable < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a1 )
        KeBugCheckEx(0x164u, 0x3EuLL, v5, 0LL, 0LL);
    }
    v8 = W32GetSessionState(v7, v6);
    FreeWin32kApiSetTable((PVOID **)(v8 + 144));
    return 3221225473LL;
  }
  if ( !(unsigned int)Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline() || a1 )
    W32PageEntireDriver(EditionDriverInitialize);
  *(_DWORD *)(W32GetUserSessionState(v11, v10) + 32) = 1;
  *(_QWORD *)(W32GetUserSessionState(v13, v12) + 57004) = 0x100000000LL;
  v15 = W32GetSessionState(0, v14);
  UserSessionState = (int)CreatePerSessionWin32kCall(v15 + 144);
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = (int)anonymous_namespace_::InitializeTimerGlobals();
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = W32GetUserSessionState(v18, v17);
  KernelEvent = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(UserSessionState + 18712) = KernelEvent;
  if ( KernelEvent )
  {
    *(_QWORD *)(UserSessionState + 18720) = 0LL;
    LODWORD(UserSessionState) = 0;
  }
  else
  {
    LODWORD(UserSessionState) = -1073741801;
  }
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = (int)ForegroundLaunch::Initialize(v20);
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = (int)ShellForegroundBoost::Initialize(v21);
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = (int)CursorApiRouter::Initialize();
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  UserSessionState = (int)InitializeFeedbackData();
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
    && (UserSessionState & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    return (unsigned int)UserSessionState;
  }
  v22 = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v24, v23) + 62944) = v22;
  if ( *(_QWORD *)(W32GetUserSessionState(v26, v25) + 62944)
    || !(unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = (int)InitializeWinArrangeGlobal(v28, v27);
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
      && (UserSessionState & 0x80000000) != 0LL
      && (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
      && a1 )
    {
      KeBugCheckEx(0x164u, 0x3EuLL, UserSessionState, 0LL, 0LL);
    }
    return (unsigned int)UserSessionState;
  }
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && a1 )
    KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
  return 3221225495LL;
}
