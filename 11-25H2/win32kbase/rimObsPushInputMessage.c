/*
 * XREFs of rimObsPushInputMessage @ 0x1401F4338
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCopyMessage @ 0x1401F3768 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  char v5; // di
  _UNKNOWN **v6; // rdx
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // edi
  unsigned int v12; // esi
  char v13; // bl
  bool v14; // bp
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdi
  char v19; // bl
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v25; // eax
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // bl
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 *v34; // rax
  int v35; // ebp
  bool v36; // di
  char v37; // [rsp+20h] [rbp-58h]
  __int16 v38; // [rsp+30h] [rbp-48h]
  char v39; // [rsp+40h] [rbp-38h]

  if ( *(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 215);
  v4 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 220);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      10,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
    v6 = &WPP_RECORDER_INITIALIZED;
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v11 = *(_DWORD *)(a1 + 164);
    if ( v11 != -1 )
      *(_DWORD *)(a1 + 164) = ++v11;
    v12 = -1073741756;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v39 = v11;
      LOBYTE(v17) = v14;
      v38 = 11;
      v37 = 3;
LABEL_53:
      LOBYTE(v16) = v13;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        *(_QWORD *)(v15 + 69144),
        v37,
        1,
        v38,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v39);
      return v12;
    }
    return v12;
  }
  v18 = 0LL;
  if ( *(_QWORD *)(a2 + 24) > 0xFFFFFFBFuLL )
  {
    v12 = -1073741675;
    goto LABEL_24;
  }
  v25 = *(_DWORD *)(a2 + 24);
  v26 = v25 + 48;
  v27 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(v25 + 64), 0x716D4F52u);
  v18 = v27;
  if ( !v27 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v28 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v28 & 1) == 0)
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(v28, v6);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69144),
        2,
        1,
        12,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v12 = -1073741670;
    goto LABEL_24;
  }
  v12 = rimObsCopyMessage((int *)a2, 0, (void **)(v27 + 16), v26);
  if ( (v12 & 0x80000000) != 0 )
  {
LABEL_24:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69144),
        3,
        1,
        14,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    if ( v18 )
      GreDeleteFastMutex((char *)v18);
    return v12;
  }
  v34 = *(__int64 **)(a1 + 152);
  if ( *v34 != v4 )
    __fastfail(3u);
  *(_QWORD *)v18 = v4;
  *(_QWORD *)(v18 + 8) = v34;
  *v34 = v18;
  *(_QWORD *)(a1 + 152) = v18;
  v35 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v35;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    v39 = v35;
    LOBYTE(v17) = v36;
    v38 = 13;
    v37 = 4;
    goto LABEL_53;
  }
  return v12;
}
