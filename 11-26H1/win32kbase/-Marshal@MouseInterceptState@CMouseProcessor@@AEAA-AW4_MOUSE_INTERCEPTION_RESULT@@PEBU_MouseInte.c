/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140223DC8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140222FB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x140134E18 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x140224680 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x140224D50 (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(
        __int64 a1,
        const struct _MouseInterceptorData *a2,
        unsigned int *a3)
{
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v7; // rcx
  unsigned int (*v8)(void); // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rbx
  bool v15; // bl
  _OWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( CMouseProcessor::MouseInterceptState::PrepareForMarshaling((CMouseProcessor::MouseInterceptState *)a1, a2) )
  {
    v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 6600LL);
    if ( v6 )
    {
      if ( v6() >= 0 )
      {
        v8 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 6608LL);
        if ( v8 )
        {
          if ( v8() )
          {
            v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 18800);
            v13 = v12 + 8;
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v12 + 8, 0LL);
            v14 = *(struct _KTHREAD **)(v12 + 32);
            ExReleasePushLockSharedEx(v13, 0LL);
            KeLeaveCriticalRegion();
            if ( !v14 )
              MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8621);
            W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
            v15 = CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
                    (CMouseProcessor::MouseInterceptState::MarshalSync *)(a1 + 104),
                    v14);
            W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
            if ( !v15
              || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
            {
              memset(v17, 0, 20);
              *(_OWORD *)(a1 + 80) = v17[0];
              *(_DWORD *)(a1 + 96) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
            }
          }
        }
      }
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
  a3[4] = *(_DWORD *)(a1 + 96);
  return *a3;
}
