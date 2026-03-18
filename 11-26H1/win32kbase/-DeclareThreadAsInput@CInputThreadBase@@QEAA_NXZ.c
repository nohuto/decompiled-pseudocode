/*
 * XREFs of ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x140181FFC
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     UserSetMITInputCallbacks @ 0x14021D998 (UserSetMITInputCallbacks.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x14012E548 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x140189260 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeclareThreadAsInput(CInputThreadBase *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  CInputThreadBase::InputThreadState *v2; // rsi
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  unsigned int CurrentThreadId; // eax

  v1 = (CInputThreadBase *)((char *)this + 8);
  v2 = (CInputThreadBase *)((char *)this + 16);
  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8));
  if ( *((_QWORD *)v2 + 1) )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    if ( !CInputThreadBase::InputThreadState::IsEmpty(v2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 100LL);
    v6 = PtiCurrent(v5, v4);
    *((_QWORD *)v2 + 1) = v6;
    *((_QWORD *)v2 + 2) = *(_QWORD *)v6;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)v2 = 1;
    *((_DWORD *)v2 + 6) = CurrentThreadId;
    SetThreadBasePriority(KeGetCurrentThread());
  }
  W32ReleasePushLockExclusiveEx(v1);
  return v3;
}
