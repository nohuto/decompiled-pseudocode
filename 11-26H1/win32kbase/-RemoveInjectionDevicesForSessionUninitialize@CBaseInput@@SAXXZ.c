/*
 * XREFs of ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4
 * Callers:
 *     CloseWin32InputRelatedObHandles @ 0x14021FF40 (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     rimDereferenceDev @ 0x14013217C (rimDereferenceDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 */

void __fastcall CBaseInput::RemoveInjectionDevicesForSessionUninitialize(int a1, int a2, int a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // r14
  __int64 i; // rdi
  void *v9; // rbp
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rcx

  v3 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2, a3) + 3064);
  W32AcquirePushLockExclusiveEx(v3);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  for ( i = *(_QWORD *)(UserSessionState + 3072); i; i = *(_QWORD *)(UserSessionState + 3072) )
  {
    if ( (*(_DWORD *)(i + 168) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1630);
    *(_QWORD *)(UserSessionState + 3072) = *(_QWORD *)(*(_QWORD *)(UserSessionState + 3072) + 56LL);
    *(_QWORD *)(i + 56) = 0LL;
    v9 = (void *)((i - 72) & -(__int64)(i != 0));
    ObfDereferenceObject(v9);
    if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v12 = *(_QWORD *)(i + 456);
      HMUnlockObject(v12, v10, v11);
      if ( *(_DWORD *)(v12 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1644);
      HMMarkObjectDestroy((struct _HEAD *)v12, v13, v14);
      HMRemoveHandleForObject((_DWORD *)v12, v15, v16);
    }
    HMMarkObjectDestroy((struct _HEAD *)i, v10, v11);
    HMRemoveHandleForObject((_DWORD *)i, v17, v18);
    v19 = (__int64)v9 + 72;
    if ( !v9 )
      v19 = 0LL;
    rimDereferenceDev(v19);
  }
  W32ReleasePushLockExclusiveEx(v3);
}
