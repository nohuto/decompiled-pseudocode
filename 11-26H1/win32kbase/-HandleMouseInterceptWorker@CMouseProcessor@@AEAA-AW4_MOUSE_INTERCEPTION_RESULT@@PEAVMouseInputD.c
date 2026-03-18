/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400D28D4
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140222F60 (-CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140222FB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1402239AC (-HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProces.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x140223AD4 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1402244CC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x140227FAC (ApiSetEdtionGetInputDesktopId.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(CMouseProcessor *a1, unsigned __int64 *a2)
{
  char *v3; // rbx
  char v5; // di
  int v6; // esi
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+30h] [rbp-40h]
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF

  v3 = (char *)a1 + 3912;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  if ( v3[8] && *((_QWORD *)v3 + 2) == ApiSetEdtionGetInputDesktopId() )
  {
    v6 = *((_DWORD *)v3 + 3);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    LOBYTE(v6) = 0;
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    return 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8) )
    LOBYTE(v6) = -2;
  memset(v11, 0, sizeof(v11));
  CMouseProcessor::PrepareDataForIntercept(
    a1,
    (const struct CMouseProcessor::MouseInputDataEx *)a2,
    v6 & 1,
    (struct _MouseInterceptorData *)v11);
  InputTraceLogging::Mouse::CallInterceptor(a2[7]);
  v10 = 0;
  v9 = 0LL;
  v8 = (unsigned int)CMouseProcessor::MouseInterceptState::CallInterceptor(v3, v11, &v9);
  InputTraceLogging::Mouse::HandleInterception(a2[7], v8, &v9);
  if ( (_DWORD)v8 == 2 )
  {
    v10 &= 0x76u;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
      (CMouseProcessor::MouseInputDataEx *)a2,
      (const struct _MouseProcessorData *)&v9);
  }
  return (unsigned int)v8;
}
