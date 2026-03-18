/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x14014FA4C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1401BA740 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetEditionDeactivateMitInput @ 0x14014FC60 (ApiSetEditionDeactivateMitInput.c)
 *     CleanupTouchExtensibility @ 0x1401A1BD8 (CleanupTouchExtensibility.c)
 *     HandleInputThreadDeactivated @ 0x1401A27E0 (HandleInputThreadDeactivated.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020EA60 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x14021CCCC (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserDeactivateMITInputProcessing(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  char v3; // si
  char v4; // r8
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  char *v15; // rbx
  __int64 v16; // rdi
  struct W32_PUSH_LOCK *v17; // rbx
  HANDLE *v18; // r14
  HANDLE *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // edx

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v4 = 0;
  }
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      15,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  UserSessionState = W32GetUserSessionState(v2, a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 18752) + 8LL))(*(_QWORD *)(UserSessionState + 18752));
  v8 = W32GetUserSessionState(v7, v6);
  InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v8 + 16408), 1LL);
  HandleInputThreadDeactivated();
  ApiSetEditionDeactivateMitInput();
  CleanupTouchExtensibility();
  v11 = W32GetUserSessionState(v10, v9);
  v14 = v11;
  v15 = *(char **)(v11 + 19280);
  if ( v15 )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(v11 + 19280));
    GreDeleteFastMutex(v15);
    *(_QWORD *)(v14 + 19280) = 0LL;
  }
  v16 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 16408);
  v17 = (struct W32_PUSH_LOCK *)(v16 + 8);
  *(_QWORD *)v16 = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v16 + 8), 0);
  v18 = (HANDLE *)(v16 + 24);
  v19 = (HANDLE *)(v16 + 904);
  while ( v18 != v19 )
  {
    if ( *v18 )
    {
      ZwClose(*v18);
      *v18 = 0LL;
    }
    v18 += 5;
  }
  W32ReleasePushLockExclusiveEx(v17, 0LL);
  result = W32GetUserSessionState(v21, v20);
  *(_QWORD *)(result + 3280) = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (LOBYTE(v23) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v23) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( (_BYTE)v23 || v3 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v23,
             v3,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             16,
             (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return result;
}
