/*
 * XREFs of ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4
 * Callers:
 *     CloseWin32InputRelatedObHandles @ 0x14021C31C (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     rimDereferenceDev @ 0x1401382E4 (rimDereferenceDev.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CBaseInput::RemoveInjectionDevicesForSessionUninitialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 i; // rdi
  void *v7; // rbp
  __int64 v8; // rdx
  int *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3064), 0);
  v5 = W32GetUserSessionState(v4, v3);
  for ( i = *(_QWORD *)(v5 + 3072); i; i = *(_QWORD *)(v5 + 3072) )
  {
    if ( (*(_DWORD *)(i + 168) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1652);
    *(_QWORD *)(v5 + 3072) = *(_QWORD *)(*(_QWORD *)(v5 + 3072) + 56LL);
    *(_QWORD *)(i + 56) = 0LL;
    v7 = (void *)((i - 72) & -(__int64)(i != 0));
    ObfDereferenceObject(v7);
    if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v9 = *(int **)(i + 456);
      HMUnlockObject(v9, v8);
      if ( v9[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1666);
      HMMarkObjectDestroy((struct _HEAD *)v9, v10);
      HMRemoveHandleForObject(v9, v11);
    }
    HMMarkObjectDestroy((struct _HEAD *)i, v8);
    HMRemoveHandleForObject((int *)i, v12);
    v13 = (__int64)v7 + 72;
    if ( !v7 )
      v13 = 0LL;
    rimDereferenceDev(v13);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3064), 0LL);
}
