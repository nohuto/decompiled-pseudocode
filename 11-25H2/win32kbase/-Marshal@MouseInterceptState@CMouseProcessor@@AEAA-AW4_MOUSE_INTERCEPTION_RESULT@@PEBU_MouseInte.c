/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402212F8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021F874 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1400EBC84 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetInputThreadKernelThread @ 0x140216164 (GetInputThreadKernelThread.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x140221D8C (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x14022276C (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
 *     ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x140225740 (ApiSetEditionExtensibility_WakeMITForInterceptCallout.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(
        __int64 a1,
        const struct _MouseInterceptorData *a2,
        _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD *InputThreadKernelThread; // rbx
  bool v8; // bl
  _BYTE v10[20]; // [rsp+20h] [rbp-28h] BYREF

  if ( CMouseProcessor::MouseInterceptState::PrepareForMarshaling((CMouseProcessor::MouseInterceptState *)a1, a2)
    && (unsigned int)ApiSetEditionExtensibility_WakeMITForInterceptCallout() )
  {
    InputThreadKernelThread = (struct _KTHREAD *)GetInputThreadKernelThread(v6, v5);
    if ( !InputThreadKernelThread )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8636);
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
    v8 = CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
           (CMouseProcessor::MouseInterceptState::MarshalSync *)(a1 + 104),
           InputThreadKernelThread);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
    if ( !v8
      || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
    {
      memset(v10, 0, sizeof(v10));
      *(_OWORD *)(a1 + 80) = *(_OWORD *)v10;
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
  a3[2] = *(_QWORD *)(a1 + 96);
  return *(unsigned int *)a3;
}
