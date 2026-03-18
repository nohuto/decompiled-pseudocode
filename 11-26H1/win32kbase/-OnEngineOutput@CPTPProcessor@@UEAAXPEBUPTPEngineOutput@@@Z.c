/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400634A0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x140063DB0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140066A10 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     EvaluateEventForCompositionFrameRateBoost @ 0x1400A1B90 (EvaluateEventForCompositionFrameRateBoost.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x140126090 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     IsMouseInterceptEnabled @ 0x14012AE90 (IsMouseInterceptEnabled.c)
 *     InitiatePTPMouseProcessing @ 0x14013C610 (InitiatePTPMouseProcessing.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140148050 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x140157E0C (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x14016E9C0 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1401877D0 (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1401B0364 (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1401B7950 (ApiSetEditionInternalSetCursorPos.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x140218ECC (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140218F28 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  CPTPProcessor *v2; // rbp
  const struct PTPEngineOutput *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  __int64 v10; // rax
  void *v11; // r9
  int v12; // r8d
  char v13; // dl
  __int64 v14; // r8
  char v15; // si
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  CPTPProcessor *v18; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  struct CPointerInputFrame *GestureCache; // rbp
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 UserSessionState; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  int *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // xmm0_8
  _QWORD *v37; // rcx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  unsigned __int64 v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  int v43; // [rsp+48h] [rbp-60h]
  int v44; // [rsp+4Ch] [rbp-5Ch]
  __int64 v45; // [rsp+80h] [rbp-28h]

  v2 = (CPTPProcessor *)((char *)this - 168);
  v3 = a2;
  LOBYTE(a2) = 19;
  v6 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), (__int64)a2);
  if ( !v6 )
    return;
  switch ( *(_DWORD *)v3 )
  {
    case 0:
      v39 = *((_DWORD *)this + 55);
      if ( (v39 & 1) != 0 || (v39 & 2) == 0 )
      {
        v40 = *((_DWORD *)v3 + 1);
        if ( v40 )
        {
          v9 = v40 - 1;
          if ( v9 )
          {
            if ( v9 == 2 )
              CPTPProcessor::EndInertia(v2, v5, v7);
          }
          else
          {
            CPTPProcessor::CancelInertiaTimer(v2, v5, v7);
          }
        }
        else
        {
          CPTPProcessor::CacheInertia(v2, v5);
        }
      }
      else
      {
        CPTPProcessor::SendPTPInertiaEndToContainer(v2, v3);
      }
      goto LABEL_63;
    case 1:
      if ( *((_BYTE *)this + 1817) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 521LL);
      v30 = *((_QWORD *)this + 46);
      if ( v30 )
        v31 = *(_QWORD *)(v30 + 216);
      else
        v31 = 0LL;
      InputTraceLogging::PTP::MouseOutput((const struct CPointerInputFrame *)v30, v5, v3);
      v33 = *(_QWORD *)(v6 + 456);
      v34 = (int *)((char *)this + 376);
      v35 = (_QWORD *)*((_QWORD *)this + 46);
      v36 = *(_QWORD *)(v33 + 952);
      v43 = *(_DWORD *)(v33 + 960);
      v44 = *((_DWORD *)this + 95);
      v42 = v36;
      if ( !v35 || *v34 )
      {
        *(_OWORD *)((char *)this + 1864) = 0LL;
        v45 = 0LL;
        *(_OWORD *)((char *)this + 1880) = 0LL;
        *(_OWORD *)((char *)this + 1896) = 0LL;
        *((_QWORD *)this + 239) = v45;
      }
      else
      {
        *((_QWORD *)this + 235) = v35[10];
        *((_QWORD *)this + 233) = v35[9];
        v37 = *(_QWORD **)(v35[32] + 16LL);
        if ( v37 )
        {
          *((_QWORD *)this + 238) = v37[284];
          *((_QWORD *)this + 239) = v37[286];
          *((_QWORD *)this + 234) = v37[283];
        }
      }
      v38 = *((_DWORD *)v3 + 1);
      if ( v38 == 5 )
      {
        ApiSetEditionInternalSetCursorPos(*((unsigned int *)v3 + 2), *((unsigned int *)v3 + 3), 2LL);
      }
      else if ( CPTPProcessor::QueuePTPMouseEvent(
                  (CPTPProcessor *)((char *)this - 168),
                  *(struct tagPOINT *)((char *)v3 + 8),
                  1 << v38,
                  v32,
                  v41,
                  v31,
                  *v34,
                  (const struct tagUIPI_INFO_INT *)&v42) )
      {
        if ( *((_QWORD *)this + 46) )
          *((_BYTE *)this + 1816) = 1;
        else
          InitiatePTPMouseProcessing(v9, v5, v7);
      }
      goto LABEL_63;
    case 2:
      v9 = *((_DWORD *)v3 + 1) - 2;
      if ( *((_DWORD *)v3 + 1) == 2 )
      {
        if ( *((_BYTE *)this + 1817) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 587LL);
        *((_BYTE *)this + 1817) = 0;
        if ( !IsMouseInterceptEnabled(v9, v5, v7) )
        {
          GestureCache = CPTPProcessor::CreateGestureCache(
                           v2,
                           v5,
                           (const struct PTPEngineOutput *)((char *)v3 + 20),
                           *((_DWORD *)v3 + 2) != 0);
          if ( GestureCache )
          {
            if ( (*((_DWORD *)this + 89) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 601LL);
            *((_DWORD *)this + 89) = 0;
            CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
            *((_BYTE *)this + 1817) = 1;
            LOBYTE(v24) = 1;
            *((_BYTE *)this + 1818) = *((_DWORD *)v3 + 2) != 0;
            InputTraceLogging::PTP::GestureOutput(GestureCache, v3, v24, v25);
            UserSessionState = W32GetUserSessionState(v27, v26, v28);
            CTouchProcessor::ProcessTouchpadInput(
              *(PERESOURCE **)(UserSessionState + 3256),
              GestureCache,
              *((_DWORD *)this + 94),
              *((_DWORD *)this + 95));
          }
        }
      }
      else if ( *((_DWORD *)v3 + 1) == 3 && *((_BYTE *)this + 1817) )
      {
        if ( *((_BYTE *)this + 1818) != (*((_DWORD *)v3 + 2) != 0) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 616LL);
        InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), v3, 0, v8);
        v14 = *((unsigned int *)v3 + 4);
        v15 = 1;
        v16 = 0;
        if ( (_DWORD)v14 )
        {
          v17 = (_DWORD *)((char *)v3 + 32);
          while ( (*v17 & 4) == 0 )
          {
            ++v16;
            v17 += 24;
            if ( v16 >= (unsigned int)v14 )
              goto LABEL_29;
          }
          v15 = 0;
        }
LABEL_29:
        v18 = (CPTPProcessor *)*((_QWORD *)this + 46);
        *((_DWORD *)v18 + 57) = (*((_DWORD *)v3 + 2) << 8) ^ (*((_DWORD *)v18 + 57) ^ (*((_DWORD *)v3 + 2) << 8)) & 0xFFFFFEFF;
        CPTPProcessor::CopyPointersIntoFrame(
          v18,
          *((struct CPointerInputFrame **)this + 46),
          v14,
          (const struct PTPEngineOutput *)((char *)v3 + 20),
          0);
        v22 = W32GetUserSessionState(v20, v19, v21);
        CTouchProcessor::ProcessTouchpadInput(
          *(PERESOURCE **)(v22 + 3256),
          *((struct CPointerInputFrame **)this + 46),
          *((_DWORD *)this + 94),
          *((_DWORD *)this + 95));
        *((_QWORD *)this + 46) = 0LL;
        if ( v15 )
        {
          *((_BYTE *)this + 1817) = 0;
          *((_DWORD *)this + 89) = 0;
          CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
        }
      }
      goto LABEL_63;
  }
  v9 = *(_DWORD *)v3 - 3;
  if ( *(_DWORD *)v3 != 3 )
  {
    if ( *(_DWORD *)v3 == 4 && !IsMouseInterceptEnabled(1, v5, v7) )
    {
      if ( *((_BYTE *)this + 1817) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 663LL);
      CPTPProcessor::SendShellAction(v2, *((unsigned int *)v3 + 1));
    }
    goto LABEL_63;
  }
  if ( *((_BYTE *)this + 1817) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 647LL);
  v9 = *((_DWORD *)v3 + 1);
  if ( !v9 )
  {
    v10 = W32GetUserSessionState(0, v5, v7);
    v11 = (void *)*((_QWORD *)this + 45);
    v13 = 0;
    v12 = *((_DWORD *)v3 + 2);
    goto LABEL_17;
  }
  if ( v9 == 1 )
  {
    v10 = W32GetUserSessionState(1, v5, v7);
    v11 = 0LL;
    v12 = 0;
    v13 = 1;
LABEL_17:
    CHidInput::HandlePTPTimer(*(CHidInput **)(v10 + 16832), v13, v12, v11);
  }
LABEL_63:
  if ( *(_DWORD *)v3 == 2 || *(_DWORD *)v3 == 4 )
    EvaluateEventForCompositionFrameRateBoost(v9, v5, v7);
}
