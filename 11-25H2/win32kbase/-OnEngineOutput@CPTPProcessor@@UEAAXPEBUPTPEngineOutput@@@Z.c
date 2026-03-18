/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1400DA540 (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA640 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     EvaluateEventForCompositionFrameRateBoost @ 0x1400DD1C0 (EvaluateEventForCompositionFrameRateBoost.c)
 *     IsMouseInterceptEnabled @ 0x1400DEA50 (IsMouseInterceptEnabled.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E53B0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E5850 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     InitiatePTPMouseProcessing @ 0x1400F81F0 (InitiatePTPMouseProcessing.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140108C0C (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x14011A5CC (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x14018BB90 (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140195AE0 (ApiSetEditionInternalSetCursorPos.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140208A20 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14021116C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1402115D4 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140211630 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline @ 0x1402118AC (Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r9
  int v10; // r8d
  char v11; // dl
  __int64 v12; // r8
  char v13; // bp
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  CPTPProcessor *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct CPointerInputFrame *GestureCache; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  LARGE_INTEGER PerformanceCounter; // r15
  unsigned __int64 v27; // r12
  __int64 v28; // r14
  unsigned __int64 QuadPart; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  int *v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // xmm0_8
  _QWORD *v35; // rcx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  __int64 v39; // [rsp+40h] [rbp-78h] BYREF
  int v40; // [rsp+48h] [rbp-70h]
  int v41; // [rsp+4Ch] [rbp-6Ch]
  __int64 v42; // [rsp+80h] [rbp-38h]

  v5 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
  if ( v5 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0:
        v37 = *((_DWORD *)this + 55);
        if ( (v37 & 1) != 0 || (v37 & 2) == 0 )
        {
          v38 = *((_DWORD *)a2 + 1);
          if ( v38 )
          {
            v7 = (unsigned int)(v38 - 1);
            if ( (_DWORD)v7 )
            {
              if ( (_DWORD)v7 == 2 )
                CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 168));
            }
            else
            {
              CPTPProcessor::CancelInertiaTimer((CPTPProcessor *)((char *)this - 168), v4);
            }
          }
          else
          {
            CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 168));
          }
        }
        else
        {
          CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 168), a2);
        }
        goto LABEL_68;
      case 1:
        if ( *((_BYTE *)this + 1817) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 525LL);
        PerformanceCounter.QuadPart = 0LL;
        v27 = 0LL;
        if ( (unsigned int)Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline() )
        {
          v30 = *((_QWORD *)this + 46);
          if ( v30 )
            QuadPart = *(_QWORD *)(v30 + 216);
          else
            QuadPart = 0LL;
          InputTraceLogging::PTP::MouseOutput((const struct CPointerInputFrame *)v30, 0LL, a2);
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v27 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          InputTraceLogging::PTP::MouseOutput(
            *((const struct CPointerInputFrame **)this + 46),
            PerformanceCounter.QuadPart,
            a2);
          v28 = *((_QWORD *)this + 46);
          if ( v28 )
            QuadPart = *(_QWORD *)(v28 + 216);
          else
            QuadPart = PerformanceCounter.QuadPart;
        }
        v31 = *(_QWORD *)(v5 + 456);
        v32 = (int *)((char *)this + 376);
        v33 = (_QWORD *)*((_QWORD *)this + 46);
        v34 = *(_QWORD *)(v31 + 952);
        v40 = *(_DWORD *)(v31 + 960);
        v41 = *((_DWORD *)this + 95);
        v39 = v34;
        if ( !v33 || *v32 )
        {
          *(_OWORD *)((char *)this + 1864) = 0LL;
          v42 = 0LL;
          *(_OWORD *)((char *)this + 1880) = 0LL;
          *(_OWORD *)((char *)this + 1896) = 0LL;
          *((_QWORD *)this + 239) = v42;
        }
        else
        {
          *((_QWORD *)this + 235) = v33[10];
          *((_QWORD *)this + 233) = v33[9];
          v35 = *(_QWORD **)(v33[32] + 16LL);
          if ( v35 )
          {
            *((_QWORD *)this + 238) = v35[285];
            *((_QWORD *)this + 239) = v35[287];
            *((_QWORD *)this + 234) = v35[284];
          }
        }
        v36 = *((_DWORD *)a2 + 1);
        if ( v36 == 5 )
        {
          ApiSetEditionInternalSetCursorPos(*((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
        }
        else if ( CPTPProcessor::QueuePTPMouseEvent(
                    (CPTPProcessor *)((char *)this - 168),
                    *(struct tagPOINT *)((char *)a2 + 8),
                    1 << v36,
                    PerformanceCounter.QuadPart,
                    v27,
                    QuadPart,
                    *v32,
                    (const struct tagUIPI_INFO_INT *)&v39) )
        {
          if ( *((_QWORD *)this + 46) )
            *((_BYTE *)this + 1816) = 1;
          else
            InitiatePTPMouseProcessing(v7, v4);
        }
        goto LABEL_68;
      case 2:
        v7 = (unsigned int)(*((_DWORD *)a2 + 1) - 2);
        if ( *((_DWORD *)a2 + 1) == 2 )
        {
          if ( *((_BYTE *)this + 1817) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 610LL);
          *((_BYTE *)this + 1817) = 0;
          if ( !IsMouseInterceptEnabled(v7, v4) )
          {
            GestureCache = CPTPProcessor::CreateGestureCache(
                             (CPTPProcessor *)((char *)this - 168),
                             v4,
                             (const struct PTPEngineOutput *)((char *)a2 + 20),
                             *((_DWORD *)a2 + 2) != 0);
            if ( GestureCache )
            {
              if ( (*((_DWORD *)this + 89) & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 624LL);
              *((_DWORD *)this + 89) = 0;
              CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
              *((_BYTE *)this + 1817) = 1;
              LOBYTE(v21) = 1;
              *((_BYTE *)this + 1818) = *((_DWORD *)a2 + 2) != 0;
              InputTraceLogging::PTP::GestureOutput(GestureCache, a2, v21, v22);
              UserSessionState = W32GetUserSessionState(v24, v23);
              CTouchProcessor::ProcessTouchpadInput(
                *(CTouchProcessor **)(UserSessionState + 3256),
                GestureCache,
                *((_DWORD *)this + 94),
                *((_DWORD *)this + 95));
            }
          }
        }
        else if ( *((_DWORD *)a2 + 1) == 3 && *((_BYTE *)this + 1817) )
        {
          if ( *((_BYTE *)this + 1818) != (*((_DWORD *)a2 + 2) != 0) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 639LL);
          InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), a2, 0LL, v6);
          v12 = *((unsigned int *)a2 + 4);
          v13 = 1;
          v14 = 0;
          if ( (_DWORD)v12 )
          {
            v15 = (_DWORD *)((char *)a2 + 32);
            while ( (*v15 & 4) == 0 )
            {
              ++v14;
              v15 += 24;
              if ( v14 >= (unsigned int)v12 )
                goto LABEL_29;
            }
            v13 = 0;
          }
LABEL_29:
          v16 = (CPTPProcessor *)(unsigned int)(*((_DWORD *)a2 + 2) << 8);
          *(_DWORD *)(*((_QWORD *)this + 46) + 228LL) = (unsigned int)v16 ^ (*(_DWORD *)(*((_QWORD *)this + 46) + 228LL) ^ (*((_DWORD *)a2 + 2) << 8)) & 0xFFFFFEFF;
          CPTPProcessor::CopyPointersIntoFrame(
            v16,
            *((struct CPointerInputFrame **)this + 46),
            v12,
            (const struct PTPEngineOutput *)((char *)a2 + 20),
            0);
          v19 = W32GetUserSessionState(v18, v17);
          CTouchProcessor::ProcessTouchpadInput(
            *(CTouchProcessor **)(v19 + 3256),
            *((struct CPointerInputFrame **)this + 46),
            *((_DWORD *)this + 94),
            *((_DWORD *)this + 95));
          *((_QWORD *)this + 46) = 0LL;
          if ( v13 )
          {
            *((_BYTE *)this + 1817) = 0;
            *((_DWORD *)this + 89) = 0;
            CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
          }
        }
        goto LABEL_68;
    }
    v7 = (unsigned int)(*(_DWORD *)a2 - 3);
    if ( *(_DWORD *)a2 != 3 )
    {
      if ( *(_DWORD *)a2 == 4 && !IsMouseInterceptEnabled(v7, v4) )
      {
        if ( *((_BYTE *)this + 1817) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 686LL);
        CPTPProcessor::SendShellAction((char *)this - 168, *((unsigned int *)a2 + 1));
      }
      goto LABEL_68;
    }
    if ( *((_BYTE *)this + 1817) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 670LL);
    v7 = *((unsigned int *)a2 + 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
        goto LABEL_68;
      v8 = W32GetUserSessionState(v7, v4);
      v9 = 0LL;
      v10 = 0;
      v11 = 1;
    }
    else
    {
      v8 = W32GetUserSessionState(v7, v4);
      v9 = (void *)*((_QWORD *)this + 45);
      v11 = 0;
      v10 = *((_DWORD *)a2 + 2);
    }
    CHidInput::HandlePTPTimer(*(CHidInput **)(v8 + 16840), v11, v10, v9);
LABEL_68:
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      EvaluateEventForCompositionFrameRateBoost(v7, v4);
  }
}
