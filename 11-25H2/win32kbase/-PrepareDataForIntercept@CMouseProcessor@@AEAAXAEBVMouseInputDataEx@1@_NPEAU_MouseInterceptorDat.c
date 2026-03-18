/*
 * XREFs of ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x140221BDC
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400603D8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140062454 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1400EC86C (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x14021FBF4 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
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
  char v12; // cl
  __int16 v13; // bx
  struct tagPOINT *UserSessionState; // rax
  __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  *((_WORD *)a4 + 12) = *((_WORD *)a2 + 1);
  *((_WORD *)a4 + 13) = *((_WORD *)a2 + 2);
  *((_WORD *)a4 + 14) = *((_WORD *)a2 + 3);
  v8 = *((_QWORD *)a2 + 4);
  *(_QWORD *)a4 = v8;
  if ( !v8 )
  {
    LODWORD(v15) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6158);
  }
  *((_DWORD *)a4 + 2) = *((_DWORD *)a2 + 12);
  *((_QWORD *)a4 + 2) = *((_QWORD *)a2 + 7);
  if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    v12 = v10 | 2;
    if ( v11 >= 0 )
      v12 = v10;
    CMouseProcessor::GetMouseCoordinateAbsolute(
      (__int64)this,
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      v11,
      (int *)&v15,
      &v16,
      *((_QWORD *)a2 + 6),
      PublicExtraInfo,
      v12 | 4);
    *((_QWORD *)a4 + 4) = v15;
  }
  else
  {
    *((_DWORD *)a4 + 8) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a4 + 9) = *((_DWORD *)a2 + 4);
    if ( a3 )
    {
      v13 = *((_WORD *)a2 + 1);
      UserSessionState = (struct tagPOINT *)W32GetUserSessionState(this, a2);
      CMouseProcessor::ApplyAccelerationToDelta(
        this,
        *((unsigned int *)a4 + 8),
        *((_DWORD *)a4 + 9),
        UserSessionState[2398],
        (unsigned __int8)v13 >> 7,
        (struct _SUBPIXELS *)&v15,
        (int *)a4 + 8,
        (int *)a4 + 9);
    }
  }
  *((_DWORD *)a4 + 10) = CMouseProcessor::ComputeMouseSystemStateForInterceptor((__int64)this, (__int64)a2);
}
