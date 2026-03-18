/*
 * XREFs of rimFindOtherQueuedFrames @ 0x1400962C0
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x140095638 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400958DC (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimValidateFrameTransition @ 0x140096B5C (rimValidateFrameTransition.c)
 *     RIMFixUpCompleteFrame @ 0x1400A0EB8 (RIMFixUpCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall rimFindOtherQueuedFrames(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  _QWORD **v6; // r15
  _QWORD *v7; // rbx
  unsigned int v8; // r8d
  _QWORD *v10; // rdx
  unsigned int v12; // edi
  _QWORD *v13; // r13
  unsigned int v14; // ecx
  char *v15; // rbp
  __int64 v17; // rcx
  int v18; // r8d
  _QWORD *v19; // r12
  char *v20; // r14
  bool i; // zf
  unsigned int *v22; // rcx
  _QWORD *v23; // r15
  char v24; // r13
  __int64 UserSessionState; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  _QWORD *v34; // [rsp+58h] [rbp-50h]
  unsigned int *Src; // [rsp+68h] [rbp-40h]
  char v37; // [rsp+C0h] [rbp+18h]

  v6 = (_QWORD **)(a1 + 744);
  v34 = (_QWORD *)(a1 + 744);
  v7 = a3;
  *a4 = 0LL;
  v8 = *a3;
  v10 = *(_QWORD **)(a1 + 744);
  *a5 = 0LL;
  v12 = v8;
  v13 = (_QWORD *)(a1 + 744);
  *a6 = 0;
  while ( v10 != v6 )
  {
    if ( v10[4] != *(_QWORD *)(a2 + 32) || (v14 = v12 + *((_DWORD *)v10 - 2), v14 > 0x2710) )
    {
      v13 = v10;
      v34 = v10;
      break;
    }
    v10 = (_QWORD *)*v10;
    v12 = v14;
  }
  if ( v12 == v8 )
    return 0LL;
  v15 = (char *)Win32AllocPoolZInitImpl(256LL, v12, 0x66637352u);
  if ( !v15 )
    return 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 1072LL);
  if ( v17 )
    rimValidateFrameTransition(v17, v7);
  memmove(v15, v7, *(unsigned int *)v7);
  RIMFixUpCompleteFrame(a1, a2, v15, v7, 1);
  v19 = *v6;
  v20 = &v15[*(unsigned int *)v7];
  for ( i = *v6 == v13; !i; i = v19 == v34 )
  {
    v22 = (unsigned int *)(v19 - 1);
    v23 = v19;
    v19 = (_QWORD *)*v19;
    Src = v22;
    if ( *((_QWORD *)v22 + 4) != v7[4] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 798LL);
    if ( !*(_QWORD *)(a2 + 176) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 799LL);
    --*(_QWORD *)(a2 + 176);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v24 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v18);
      WPP_RECORDER_AND_TRACE_SF_qi(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v37,
        *(_QWORD *)(UserSessionState + 19368),
        v31,
        v32,
        0x12u,
        v33);
    }
    v26 = *v23;
    if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v27 = (_QWORD *)v23[1], (_QWORD *)*v27 != v23) )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    v23[1] = v23;
    *v23 = v23;
    *((_QWORD *)Src + 5) = 0LL;
    InputTraceLogging::RIM::DispatchFrame(a2, (int *)Src, 1);
    rimValidateFrameTransition(v7, Src);
    GreDeleteFastMutex((char *)v7, v28, v29, v30);
    memmove(v20, Src, *Src);
    RIMFixUpCompleteFrame(a1, a2, v20, Src, 1);
    v7 = Src;
    v20 += *Src;
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  if ( v12 != v20 - v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 830LL);
  *a5 = v15;
  *a4 = v7;
  *a6 = v12;
  return 1LL;
}
