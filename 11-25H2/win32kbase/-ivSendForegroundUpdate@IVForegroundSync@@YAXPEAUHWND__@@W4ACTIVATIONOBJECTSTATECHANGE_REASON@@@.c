/*
 * XREFs of ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x14021BBEC
 * Callers:
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E42F4 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x14021B8E0 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x14021C020 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVForegroundSync::ivSendForegroundUpdate(__int64 a1, int a2)
{
  __int64 v4; // rdx
  bool v5; // si
  bool v6; // bl
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  const struct CONTAINER_ID *v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  struct CONTAINER_ID *v19; // r13
  int v20; // ebx
  void *v21; // rcx
  char v22; // si
  bool v23; // al
  __int16 v24; // bx
  __int16 v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rdx
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // si
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // si
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  char v44; // [rsp+50h] [rbp-58h]
  int v45; // [rsp+60h] [rbp-48h]
  bool v46; // [rsp+C0h] [rbp+18h]
  bool v47; // [rsp+C8h] [rbp+20h]

  if ( !CIVChannel::ContainerConnected(3u) )
  {
    v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        13,
        10,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
    }
    return;
  }
  if ( !a1 )
  {
    v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69144),
        4,
        13,
        11,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
    }
    v15 = 0LL;
    v16 = 1;
LABEL_47:
    IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(v16, v15);
    return;
  }
  v17 = ValidateHbwnd(a1, v4);
  if ( v17 )
  {
    v19 = *(struct CONTAINER_ID **)(v17 + 136);
    v20 = 3 - (a2 != 0);
    v45 = v20;
    if ( v19 )
    {
      v21 = WPP_GLOBAL_Control;
      v22 = 1;
      v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v46 = v23;
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = *((_WORD *)v19 + 1);
        v25 = *(_WORD *)v19;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v26 = W32GetUserSessionState(v21, v18);
        LOBYTE(v27) = v47;
        LOBYTE(v28) = v46;
        v44 = v24;
        v20 = v45;
        WPP_RECORDER_AND_TRACE_SF_ddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69144),
          4,
          13,
          12,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
          v45,
          v25,
          v44);
      }
      IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(v19);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v22 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v22;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69144),
          4,
          13,
          13,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
          v20);
      }
    }
    else
    {
      v34 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69144),
          4,
          13,
          14,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
      }
      v19 = 0LL;
    }
    v15 = v19;
    v16 = v20;
    goto LABEL_47;
  }
  v39 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v42) = v40;
    LOBYTE(v43) = v39;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 69144),
      4,
      13,
      15,
      (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
      a1);
  }
}
