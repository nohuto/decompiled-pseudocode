/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1402211A4
 * Callers:
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x140220334 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1400EBC84 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // xmm1_8
  struct _KEVENT *v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 6) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8495);
    v2 = *((_OWORD *)this + 3);
    memset(v8, 0, sizeof(v8));
    v3 = *((_OWORD *)this + 2);
    v9[1] = v2;
    v9[0] = v3;
    v9[2] = *((_OWORD *)this + 4);
    v4 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v9, v8);
    v5 = v4;
    if ( v4 != 2 )
    {
      if ( v4 > 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8511);
      *(_DWORD *)v8 = v5;
      memset(&v8[4], 0, 20);
    }
    v6 = *(_QWORD *)&v8[16];
    *((_OWORD *)this + 5) = *(_OWORD *)v8;
    *((_QWORD *)this + 12) = v6;
  }
  v7 = (struct _KEVENT *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    if ( KeReadStateEvent(v7) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8748);
    KeSetEvent(*((PRKEVENT *)this + 13), 1, 0);
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
