/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x140067FFC (IsProcessedByInputService.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140068030 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x140068098 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x140069380 (RedistributeDeferredMsgsOnQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsHiddenByInputService @ 0x14014B3A0 (IsHiddenByInputService.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagQMSG *v5; // r14
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // r10
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rbx
  struct tagQMSG *v10; // r12
  __int64 v11; // rdx
  unsigned int *v12; // r11
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rbp
  struct tagQMSG *v20; // rcx
  struct tagQMSG *v21; // rcx
  __int64 v22; // rdx
  struct tagQMSG *v23; // rsi
  char v24; // r15
  bool v25; // r12
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  struct tagQMSG *v30; // rbp
  struct tagQMSG *v31; // rsi
  int v32; // eax
  __int64 v33; // rax
  struct tagQ *v34; // rax
  char v35; // r12
  char v36; // r15
  char v37; // si
  char v38; // di
  int v39; // eax
  struct tagQ *v40; // rdi
  __int64 v41; // rbp
  char v42; // bl
  bool v43; // si
  char v44; // bp
  __int64 v45; // r9
  __int64 UserSessionState; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // di
  bool v50; // si
  __int64 v51; // rbx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  char v55; // di
  char v56; // bl
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rbx
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  char v70; // [rsp+50h] [rbp-68h]
  struct tagTHREADINFO *v71; // [rsp+70h] [rbp-48h]
  struct tagQMSG *v72; // [rsp+78h] [rbp-40h]
  __int64 v73; // [rsp+C0h] [rbp+8h]
  __int64 v75; // [rsp+D8h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = PtiCurrent((__int64)a1, (__int64)a2);
  v7 = 0LL;
  v71 = v6;
  v75 = 0LL;
  v8 = v6;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)v5 + 13);
      v12 = &WPP_RECORDER_INITIALIZED;
      v13 = v11;
      if ( v11 && (*(_QWORD *)(v11 + 1360) & 0x20000000LL) != 0 && (unsigned int)IsHiddenByInputService(v5, v11, v11) )
      {
        *(_QWORD *)(v11 + 1360) = v45 & 0xFFFFFFFFDFFFFFFFuLL;
        v13 = *((_QWORD *)v5 + 13);
      }
      if ( (*((_DWORD *)v8 + 340) & 0x40000LL) != 0 )
      {
        v32 = *((_DWORD *)v5 + 6);
        if ( (struct tagTHREADINFO *)v13 == v8 )
        {
          v39 = v32 - 256;
          if ( (!v39 || (unsigned int)(v39 - 1) <= 1) && v3 )
            *((_QWORD *)v5 + 13) = v3;
        }
        else if ( v32 == 513 || v32 == 516 )
        {
          LOBYTE(v11) = 1;
          v33 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), v11);
          v7 = 0LL;
          v12 = &WPP_RECORDER_INITIALIZED;
          if ( v33 )
          {
            if ( *(struct tagTHREADINFO **)(v33 + 16) == v8 )
              *((_QWORD *)v5 + 13) = v8;
          }
        }
      }
      v14 = *((_QWORD *)v5 + 13);
      v73 = v9;
      if ( v5 == *((struct tagQMSG **)a2 + 11) )
      {
        v40 = *(struct tagQ **)(v14 + 472);
        if ( a2 != v40 && *((_QWORD *)v40 + 9) == v7 )
        {
          v41 = *((_QWORD *)a2 + 9);
          if ( v41 )
          {
            if ( *(struct tagQ **)(v41 + 472) == v40 )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v42 = v7;
              }
              v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
              if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
              {
                UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
                v70 = v41;
                v44 = (char)v71;
                LOBYTE(v47) = v43;
                LOBYTE(v48) = v42;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v48,
                  v47,
                  *(_QWORD *)(UserSessionState + 69160),
                  4,
                  18,
                  37,
                  (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                  (char)v40,
                  (char)v71,
                  v70);
                v7 = 0LL;
                v12 = &WPP_RECORDER_INITIALIZED;
              }
              else
              {
                v44 = (char)v71;
              }
              *(_QWORD *)(*(_QWORD *)(v14 + 472) + 72LL) = *((_QWORD *)a2 + 9);
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v49 = v7;
              }
              v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
              if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
              {
                v51 = *((_QWORD *)a2 + 9);
                v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
                LOBYTE(v53) = v50;
                LOBYTE(v54) = v49;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v54,
                  v53,
                  *(_QWORD *)(v52 + 69160),
                  4,
                  18,
                  38,
                  (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                  (char)a2,
                  v44,
                  v51);
                v7 = 0LL;
              }
              v9 = v73;
              *((_QWORD *)a2 + 9) = v7;
            }
          }
        }
      }
      if ( *((_DWORD *)v5 + 24) == 4 )
        v14 = v7;
      v15 = IsProcessedByInputService(v5, v11, v13);
      v19 = v17;
      if ( !v15 )
        v19 = v14;
      if ( v19 )
      {
        if ( !v10 || v9 != v19 )
        {
          v29 = *(_QWORD *)(v19 + 472);
          v10 = *(struct tagQMSG **)(v29 + 32);
          if ( v10 && *((_DWORD *)v5 + 12) - *((_DWORD *)v10 + 12) >= 0 )
          {
            v75 = v29 + 24;
          }
          else
          {
            v10 = (struct tagQMSG *)(v29 + 24);
            v75 = v29 + 24;
          }
        }
        v20 = *(struct tagQMSG **)v10;
        if ( *(_QWORD *)v10 )
        {
          do
          {
            if ( *((_DWORD *)v5 + 12) - *((_DWORD *)v20 + 12) < 0 )
              break;
            v10 = v20;
            v20 = *(struct tagQMSG **)v20;
          }
          while ( v20 );
        }
        *((_DWORD *)v5 + 25) &= 0xFFFE1FFF;
        InputTraceLogging::Delivery::UpdateISODState(v5);
        v21 = v5;
        v22 = v75;
        v23 = v5;
        v5 = *(struct tagQMSG **)v5;
        v7 = 0LL;
        *(_QWORD *)v21 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v21 + 1) = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
          *(_QWORD *)(*(_QWORD *)v10 + 8LL) = v23;
        }
        else
        {
          *((_QWORD *)v21 + 1) = *(_QWORD *)(v75 + 8);
          *(_QWORD *)(v75 + 8) = v21;
        }
        *(_QWORD *)v10 = v23;
        v72 = v23;
        ++*(_DWORD *)(v75 + 16);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
          || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v24 = 0;
        }
        v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v75);
          v27 = v75;
          LOBYTE(v28) = v25;
          LOBYTE(v27) = v24;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v27,
            v28,
            *(_QWORD *)(v26 + 69160));
          v7 = 0LL;
        }
        if ( *((_DWORD *)v23 + 24) && (INTERLOCKEDINT::operator int(*(_QWORD *)(v19 + 488) + 8LL) & 0x2000) == 0 )
        {
          SetWakeBit(v19, 8256LL);
          v7 = 0LL;
        }
        if ( v23 == *((struct tagQMSG **)a2 + 11) )
        {
          v34 = *(struct tagQ **)(v19 + 472);
          if ( a2 != v34 )
          {
            if ( *((_QWORD *)v34 + 11) == v7 )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
              {
                v35 = v7;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v36 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v7) )
              {
                v36 = v7;
              }
              if ( v35 || v36 )
              {
                v60 = *((_QWORD *)v34 + 11);
                v61 = *(_QWORD *)(v19 + 472);
                v62 = *((_QWORD *)a2 + 11);
                v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
                LOBYTE(v64) = v36;
                LOBYTE(v65) = v35;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v65,
                  v64,
                  *(_QWORD *)(v63 + 69160),
                  5,
                  18,
                  41,
                  (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                  v62,
                  v61,
                  v60);
                v7 = 0LL;
              }
              *(_QWORD *)(*(_QWORD *)(v19 + 472) + 88LL) = *((_QWORD *)a2 + 11);
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
              || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v37 = v7;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v38 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v7) )
            {
              v38 = v7;
            }
            if ( v37 || v38 )
            {
              v66 = *((_QWORD *)a2 + 11);
              v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
              LOBYTE(v68) = v38;
              LOBYTE(v69) = v37;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v69,
                v68,
                *(_QWORD *)(v67 + 69160),
                5,
                18,
                42,
                (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                (char)a2,
                v66);
              v7 = 0LL;
            }
            *((_QWORD *)a2 + 11) = v7;
          }
        }
        if ( !v5 )
          break;
        v10 = v72;
        v9 = v19;
        *((_QWORD *)v5 + 1) = v7;
      }
      else
      {
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v17;
        v30 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
        v31 = v5;
        v5 = *(struct tagQMSG **)v5;
        if ( v31 == v30 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
            || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v55 = v17;
          }
          if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED == v18
            || (v56 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v17) )
          {
            v56 = v17;
          }
          if ( v55 || v56 )
          {
            v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
            LOBYTE(v58) = v56;
            LOBYTE(v59) = v55;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v59,
              v58,
              *(_QWORD *)(v57 + 69160),
              5,
              18,
              39,
              (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
              (char)a2,
              (char)v30);
            v17 = 0LL;
          }
          *((_QWORD *)a2 + 11) = v17;
        }
        CleanEventMessage(v31);
        FreeQEntry(v31);
        v7 = 0LL;
        if ( !v5 )
          break;
        v9 = v73;
      }
      v8 = v71;
      v3 = a3;
    }
  }
  RedistributeDeferredMsgsOnQueue(a2);
}
