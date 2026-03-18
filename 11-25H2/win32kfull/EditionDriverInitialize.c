/*
 * XREFs of EditionDriverInitialize @ 0x140240B60
 * Callers:
 *     <none>
 * Callees:
 *     FreeWin32kApiSetTable @ 0x1401F951C (FreeWin32kApiSetTable.c)
 *     CreateWin32kApiSetTable @ 0x14020FFD0 (CreateWin32kApiSetTable.c)
 *     ?InitializeWinArrangeGlobal@@YAJXZ @ 0x14021E8F0 (-InitializeWinArrangeGlobal@@YAJXZ.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 *     _anonymous_namespace_::InitializeTimerGlobals @ 0x140285194 (_anonymous_namespace_--InitializeTimerGlobals.c)
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline @ 0x14028557C (Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline @ 0x1402855D0 (Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@ForegroundLaunch@@YAJXZ @ 0x14028EDFC (-Initialize@ForegroundLaunch@@YAJXZ.c)
 *     ?InitializeFeedbackData@@YAJXZ @ 0x1402A53E8 (-InitializeFeedbackData@@YAJXZ.c)
 *     ?Initialize@CursorApiRouter@@SAJXZ @ 0x1402DBEF0 (-Initialize@CursorApiRouter@@SAJXZ.c)
 *     ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x1402DDE64 (-Initialize@ShellForegroundBoost@@YAJXZ.c)
 *     CreatePerSessionWin32kCall @ 0x1403417B0 (CreatePerSessionWin32kCall.c)
 *     wil_InitializeFeatureStaging @ 0x1403EC3FC (wil_InitializeFeatureStaging.c)
 */

__int64 __fastcall EditionDriverInitialize(int a1)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 result; // rax
  __int64 SessionState; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rbx
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

  if ( a1 )
  {
    v2 = wil_InitializeFeatureStaging();
    if ( v2 < 0 )
      KeBugCheckEx(0x164u, 0x3EuLL, v2, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    return EditionDriverInitializeOrFault(a1);
  SessionState = W32GetSessionState(v4, v3);
  if ( (int)CreateWin32kApiSetTable((__int64 *)(SessionState + 144)) < 0 )
  {
    v9 = W32GetSessionState(v8, v7);
    FreeWin32kApiSetTable((PVOID **)(v9 + 144));
    return 3221225473LL;
  }
  if ( !(unsigned int)Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledDeviceUsageNoInline() || a1 )
    W32PageEntireDriver(EditionDriverInitialize);
  *(_DWORD *)(W32GetUserSessionState(v11, v10) + 32) = 1;
  *(_QWORD *)(W32GetUserSessionState(v13, v12) + 57004) = 0x100000000LL;
  v15 = W32GetSessionState(0, v14);
  result = CreatePerSessionWin32kCall(v15 + 144);
  if ( (int)result >= 0 )
  {
    result = anonymous_namespace_::InitializeTimerGlobals();
    if ( (int)result >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      KernelEvent = CreateKernelEvent(1LL, 0LL);
      *(_QWORD *)(UserSessionState + 18712) = KernelEvent;
      if ( !KernelEvent )
        return 3221225495LL;
      *(_QWORD *)(UserSessionState + 18720) = 0LL;
      result = ForegroundLaunch::Initialize(v20);
      if ( (int)result >= 0 )
      {
        result = ShellForegroundBoost::Initialize(v21);
        if ( (int)result >= 0 )
        {
          result = CursorApiRouter::Initialize();
          if ( (int)result >= 0 )
          {
            result = InitializeFeedbackData();
            if ( (int)result >= 0 )
            {
              v22 = CreateKernelEvent(1LL, 0LL);
              *(_QWORD *)(W32GetUserSessionState(v24, v23) + 62944) = v22;
              if ( !*(_QWORD *)(W32GetUserSessionState(v26, v25) + 62944) )
                return 3221225495LL;
              return InitializeWinArrangeGlobal(v28, v27);
            }
          }
        }
      }
    }
  }
  return result;
}
