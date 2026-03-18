/*
 * XREFs of rimObsPushInputMessage @ 0x14020FDC0
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  char v7; // di
  _UNKNOWN **v8; // rdx
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edi
  unsigned int v14; // esi
  char v15; // bl
  bool v16; // bp
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdi
  char v21; // bl
  bool v22; // bp
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v27; // eax
  unsigned int v28; // ebp
  __int64 v29; // rax
  int v30; // ecx
  char v31; // bl
  bool v32; // si
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 *v36; // rax
  int v37; // ebp
  bool v38; // di
  char v39; // [rsp+20h] [rbp-58h]
  __int16 v40; // [rsp+30h] [rbp-48h]
  char v41; // [rsp+40h] [rbp-38h]

  if ( *(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 215);
  v6 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 220);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = &WPP_RECORDER_INITIALIZED;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      1,
      10,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v13 = *(_DWORD *)(a1 + 164);
    if ( v13 != -1 )
      *(_DWORD *)(a1 + 164) = ++v13;
    v14 = -1073741756;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
      v41 = v13;
      LOBYTE(v19) = v16;
      v40 = 11;
      v39 = 3;
LABEL_53:
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(v17 + 69136),
        v39,
        1,
        v40,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v41);
      return v14;
    }
    return v14;
  }
  v20 = 0LL;
  if ( *(_QWORD *)(a2 + 24) > 0xFFFFFFBFuLL )
  {
    v14 = -1073741675;
    goto LABEL_24;
  }
  v27 = *(_DWORD *)(a2 + 24);
  v28 = v27 + 48;
  v29 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(v27 + 64), 0x716D4F52u);
  v20 = v29;
  if ( !v29 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v30 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v30 & 1) == 0)
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v31 = 0;
    }
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(v30, (_DWORD)v8, a3);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69136),
        2,
        1,
        12,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v14 = -1073741670;
    goto LABEL_24;
  }
  v14 = rimObsCopyMessage((_DWORD *)a2, 0, (void **)(v29 + 16), v28);
  if ( (v14 & 0x80000000) != 0 )
  {
LABEL_24:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v8, a3);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69136),
        3,
        1,
        14,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    if ( v20 )
      GreDeleteFastMutex((char *)v20, (__int64)v8, a3, a4);
    return v14;
  }
  v36 = *(__int64 **)(a1 + 152);
  if ( *v36 != v6 )
    __fastfail(3u);
  *(_QWORD *)v20 = v6;
  *(_QWORD *)(v20 + 8) = v36;
  *v36 = v20;
  *(_QWORD *)(a1 + 152) = v20;
  v37 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v37;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v8, a3);
    v41 = v37;
    LOBYTE(v19) = v38;
    v40 = 13;
    v39 = 4;
    goto LABEL_53;
  }
  return v14;
}
