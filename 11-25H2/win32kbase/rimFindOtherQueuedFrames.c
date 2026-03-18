/*
 * XREFs of rimFindOtherQueuedFrames @ 0x1401F0EC0
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMFixUpCompleteFrame @ 0x1400BE91C (RIMFixUpCompleteFrame.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400EE000 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401234B0 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimValidateFrameTransition @ 0x1401F14FC (rimValidateFrameTransition.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall rimFindOtherQueuedFrames(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int **a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v8; // edx
  unsigned int *v9; // rbx
  unsigned int **v10; // r13
  _QWORD **v11; // r14
  unsigned int v12; // esi
  _QWORD *v13; // r8
  _QWORD *v14; // r12
  unsigned int v15; // ecx
  char *v16; // rbp
  __int64 v17; // rcx
  _QWORD *v18; // r14
  char *v19; // r15
  unsigned int *v20; // rcx
  _QWORD *v21; // r12
  char v22; // r13
  __int64 UserSessionState; // rax
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v29; // [rsp+58h] [rbp-50h]
  unsigned int *Src; // [rsp+68h] [rbp-40h]
  bool v32; // [rsp+C0h] [rbp+18h]

  v8 = *a3;
  v9 = a3;
  v10 = a4;
  *a4 = 0LL;
  v11 = (_QWORD **)(a1 + 744);
  *a5 = 0LL;
  v12 = v8;
  v13 = *(_QWORD **)(a1 + 744);
  v14 = (_QWORD *)(a1 + 744);
  v29 = (_QWORD *)(a1 + 744);
  *a6 = 0;
  if ( v13 == (_QWORD *)(a1 + 744) )
    return 0LL;
  while ( v13[4] == *(_QWORD *)(a2 + 32) )
  {
    v15 = v12 + *((_DWORD *)v13 - 2);
    if ( v15 > 0x2710 )
      break;
    v13 = (_QWORD *)*v13;
    v12 = v15;
    if ( v13 == v11 )
      goto LABEL_7;
  }
  v14 = v13;
  v29 = v13;
LABEL_7:
  if ( v12 == v8 )
    return 0LL;
  v16 = (char *)Win32AllocPoolZInitImpl(256LL, v12, 0x66637352u);
  if ( !v16 )
    return 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 1072LL);
  if ( v17 )
    rimValidateFrameTransition(v17, v9);
  memmove(v16, v9, *v9);
  RIMFixUpCompleteFrame(a1, a2, (__int64)v16, v9, 1);
  v18 = *v11;
  v19 = &v16[*v9];
  if ( v18 != v14 )
  {
    do
    {
      v20 = (unsigned int *)(v18 - 1);
      v21 = v18;
      v18 = (_QWORD *)*v18;
      Src = v20;
      if ( *((_QWORD *)v20 + 4) != *((_QWORD *)v9 + 4) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 798);
      if ( !*(_QWORD *)(a2 + 176) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 799);
      --*(_QWORD *)(a2 + 176);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v22 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v32;
        WPP_RECORDER_AND_TRACE_SF_qi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v25,
          *(_QWORD *)(UserSessionState + 19336));
      }
      v26 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v27 = (_QWORD *)v21[1], (_QWORD *)*v27 != v21) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v21[1] = v21;
      *((_QWORD *)Src + 5) = 0LL;
      *v21 = v21;
      InputTraceLogging::RIM::DispatchFrame(a2, (int *)Src, 1);
      rimValidateFrameTransition(v9, Src);
      GreDeleteFastMutex((char *)v9);
      memmove(v19, Src, *Src);
      RIMFixUpCompleteFrame(a1, a2, (__int64)v19, Src, 1);
      v9 = Src;
      v19 += *Src;
      ObfDereferenceObject(*(PVOID *)(a2 + 32));
    }
    while ( v18 != v29 );
    v10 = a4;
  }
  if ( v12 != v19 - v16 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 830);
  *v10 = v9;
  *a5 = v16;
  *a6 = v12;
  return 1LL;
}
