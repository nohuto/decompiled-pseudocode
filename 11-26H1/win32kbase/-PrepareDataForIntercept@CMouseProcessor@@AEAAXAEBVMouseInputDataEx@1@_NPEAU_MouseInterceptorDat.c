/*
 * XREFs of ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1402244CC
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400D28D4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x140085DD4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1401344F4 (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140148504 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1402230BC (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 */

void __fastcall CMouseProcessor::PrepareDataForIntercept(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        char a3,
        struct _MouseInterceptorData *a4)
{
  __int64 v8; // rax
  unsigned int PublicExtraInfo; // eax
  char v10; // r8
  char v11; // r9
  __int16 v12; // bp
  struct tagPOINT *UserSessionState; // rax
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  *((_WORD *)a4 + 12) = *((_WORD *)a2 + 1);
  *((_WORD *)a4 + 13) = *((_WORD *)a2 + 2);
  *((_WORD *)a4 + 14) = *((_WORD *)a2 + 3);
  v8 = *((_QWORD *)a2 + 4);
  *(_QWORD *)a4 = v8;
  if ( !v8 )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 6200);
  }
  *((_DWORD *)a4 + 2) = *((_DWORD *)a2 + 12);
  *((_QWORD *)a4 + 2) = *((_QWORD *)a2 + 7);
  if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    CMouseProcessor::GetMouseCoordinateAbsolute(
      (__int64)this,
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      v11,
      &v14,
      &v15,
      *((_QWORD *)a2 + 6),
      PublicExtraInfo,
      v10);
    *((_QWORD *)a4 + 4) = v14;
  }
  else
  {
    *((_DWORD *)a4 + 8) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a4 + 9) = *((_DWORD *)a2 + 4);
    if ( a3 )
    {
      v12 = *((_WORD *)a2 + 1) & 0x80;
      UserSessionState = (struct tagPOINT *)W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
      CMouseProcessor::ApplyAccelerationToDelta(
        this,
        *((_DWORD *)a4 + 8),
        *((_DWORD *)a4 + 9),
        UserSessionState[2402],
        v12 != 0,
        (struct _SUBPIXELS *)&v14,
        (int *)a4 + 8,
        (int *)a4 + 9);
    }
  }
  *((_DWORD *)a4 + 10) = CMouseProcessor::ComputeMouseSystemStateForInterceptor((__int64)this, (__int64)a2);
}
