/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x140223C58
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x14021B470 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x140134E18 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140224C2C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  unsigned int v4; // edi
  int v5; // eax
  struct _KEVENT *v6; // rcx
  _BYTE v7[20]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v8[3]; // [rsp+38h] [rbp-38h] BYREF

  W32AcquirePushLockExclusiveEx(this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 6) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8480);
    v2 = *((_OWORD *)this + 3);
    memset(v7, 0, sizeof(v7));
    v3 = *((_OWORD *)this + 2);
    v8[1] = v2;
    v8[0] = v3;
    v8[2] = *((_OWORD *)this + 4);
    v4 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v8, v7);
    if ( v4 == 2 )
    {
      v5 = *(_DWORD *)&v7[16];
      *((_OWORD *)this + 5) = *(_OWORD *)v7;
      *((_DWORD *)this + 24) = v5;
    }
    else
    {
      if ( v4 > 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8496);
      *(_DWORD *)v7 = v4;
      *(_OWORD *)&v7[4] = 0LL;
      *((_OWORD *)this + 5) = *(_OWORD *)v7;
      *((_DWORD *)this + 24) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    }
  }
  v6 = (struct _KEVENT *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    if ( KeReadStateEvent(v6) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8733);
    KeSetEvent(*((PRKEVENT *)this + 13), 1, 0);
  }
  W32ReleasePushLockExclusiveEx(this);
}
