/*
 * XREFs of ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019F080
 * Callers:
 *     UserSetMITInputCallbacks @ 0x140218AC8 (UserSetMITInputCallbacks.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400B9AA0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1401532F0 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeclareThreadAsInput(CInputThreadBase *this)
{
  char v2; // si
  struct tagTHREADINFO *v3; // rax
  unsigned int CurrentThreadId; // eax

  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0);
  if ( *((_QWORD *)this + 3) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 100);
    v3 = PtiCurrent();
    *((_QWORD *)this + 3) = v3;
    *((_QWORD *)this + 4) = *(_QWORD *)v3;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)this + 4) = 1;
    *((_DWORD *)this + 10) = CurrentThreadId;
    SetThreadBasePriority(KeGetCurrentThread(), 16);
  }
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0LL);
  return v2;
}
