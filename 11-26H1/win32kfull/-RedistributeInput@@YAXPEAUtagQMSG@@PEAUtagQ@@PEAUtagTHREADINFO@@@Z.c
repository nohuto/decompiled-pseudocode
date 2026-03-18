/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140095B80 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsProcessedByInputService @ 0x140097F80 (IsProcessedByInputService.c)
 *     IsHiddenByInputService @ 0x14016ED70 (IsHiddenByInputService.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x14020E768 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x14021C7E0 (RedistributeDeferredMsgsOnQueue.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *this, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagQMSG *v5; // r14
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // r10
  struct tagQMSG *v8; // rbx
  struct tagTHREADINFO *v9; // r15
  __int64 v10; // rdi
  struct tagTHREADINFO *v11; // rdx
  unsigned int *v12; // r11
  struct tagQMSG *v13; // rbp
  struct tagTHREADINFO *v14; // r8
  __int64 v15; // r12
  int v16; // eax
  struct tagQMSG *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 v21; // rdi
  struct tagQMSG *v22; // rcx
  __int64 v23; // rdx
  struct tagQMSG *v24; // rcx
  struct tagQMSG *v25; // rsi
  char v26; // bp
  char v27; // r12
  __int64 v28; // rax
  struct tagQMSG *v29; // rsi
  struct tagQMSG *v30; // rbp
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  struct tagQ *v35; // rax
  char v36; // r12
  char v37; // bp
  char v38; // si
  char v39; // di
  struct tagQ *v40; // rdi
  __int64 v41; // rbp
  char v42; // bl
  bool v43; // si
  char v44; // di
  bool v45; // si
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // r9
  __int64 UserSessionState; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // di
  char v55; // bl
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // [rsp+20h] [rbp-A8h]
  __int64 v70; // [rsp+28h] [rbp-A0h]
  struct tagQMSG *v71; // [rsp+70h] [rbp-58h]
  struct tagTHREADINFO *v72; // [rsp+80h] [rbp-48h]
  __int64 v73; // [rsp+D0h] [rbp+8h]
  __int64 v75; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v5 = this;
  v6 = PtiCurrent((__int64)this);
  v7 = 0LL;
  v72 = v6;
  v75 = 0LL;
  v8 = 0LL;
  v71 = 0LL;
  v9 = v6;
  v10 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v11 = (struct tagTHREADINFO *)*((_QWORD *)v5 + 13);
      v12 = &WPP_RECORDER_INITIALIZED;
      v13 = v5;
      v14 = v11;
      if ( v11 && (*((_QWORD *)v11 + 170) & 0x20000000LL) != 0 && (unsigned int)IsHiddenByInputService(v5, v11, v11) )
      {
        *((_QWORD *)v11 + 170) = v50 & 0xFFFFFFFFDFFFFFFFuLL;
        v14 = (struct tagTHREADINFO *)*((_QWORD *)v5 + 13);
      }
      if ( (*((_DWORD *)v9 + 340) & 0x40000LL) != 0 )
      {
        v32 = *((_DWORD *)v5 + 6);
        if ( v14 == v9 )
        {
          v33 = v32 - 256;
          if ( (!v33 || (unsigned int)(v33 - 1) <= 1) && v3 )
            *((_QWORD *)v5 + 13) = v3;
        }
        else if ( v32 == 513 || v32 == 516 )
        {
          v34 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), 1);
          v7 = 0LL;
          v12 = &WPP_RECORDER_INITIALIZED;
          if ( v34 )
          {
            if ( *(struct tagTHREADINFO **)(v34 + 16) == v9 )
              *((_QWORD *)v5 + 13) = v9;
          }
        }
      }
      v15 = *((_QWORD *)v5 + 13);
      v73 = v10;
      if ( v5 == *((struct tagQMSG **)a2 + 11) )
      {
        v40 = *(struct tagQ **)(v15 + 464);
        if ( a2 != v40 && *((_QWORD *)v40 + 9) == v7 )
        {
          v41 = *((_QWORD *)a2 + 9);
          if ( v41 && *(struct tagQ **)(v41 + 464) == v40 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
              || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v42 = v7;
            }
            v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
            if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
              LOBYTE(v52) = v43;
              LOBYTE(v53) = v42;
              WPP_RECORDER_AND_TRACE_SF_qqq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v53,
                v52,
                *(_QWORD *)(UserSessionState + 69152),
                4,
                18,
                37,
                (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                (char)v40,
                (char)v9,
                v41);
              v7 = 0LL;
              v12 = &WPP_RECORDER_INITIALIZED;
            }
            *(_QWORD *)(*(_QWORD *)(v15 + 464) + 72LL) = *((_QWORD *)a2 + 9);
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
              || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v44 = v7;
            }
            v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
            if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
            {
              v46 = *((_QWORD *)a2 + 9);
              v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
              LOBYTE(v48) = v45;
              LOBYTE(v49) = v44;
              WPP_RECORDER_AND_TRACE_SF_qqq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v49,
                v48,
                *(_QWORD *)(v47 + 69152),
                4,
                18,
                38,
                (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                (char)a2,
                (char)v9,
                v46);
              v7 = 0LL;
            }
            v8 = v71;
            *((_QWORD *)a2 + 9) = v7;
          }
          v13 = v5;
        }
        v10 = v73;
      }
      if ( *((_DWORD *)v5 + 24) == 4 )
        v15 = v7;
      v16 = IsProcessedByInputService(v5, v11, v14);
      v20 = v18;
      if ( !v16 )
        v20 = v15;
      if ( v20 )
      {
        if ( v8 && v10 == v20 )
        {
          v21 = v75;
        }
        else
        {
          v21 = *(_QWORD *)(v20 + 464) + 24LL;
          v75 = v21;
          v8 = *(struct tagQMSG **)(*(_QWORD *)(v20 + 464) + 32LL);
          if ( !v8 || *((_DWORD *)v5 + 12) - *((_DWORD *)v8 + 12) < 0 )
            v8 = (struct tagQMSG *)(*(_QWORD *)(v20 + 464) + 24LL);
        }
        v22 = *(struct tagQMSG **)v8;
        if ( *(_QWORD *)v8 )
        {
          do
          {
            if ( *((_DWORD *)v5 + 12) - *((_DWORD *)v22 + 12) < 0 )
              break;
            v8 = v22;
            v22 = *(struct tagQMSG **)v22;
          }
          while ( v22 );
        }
        *((_DWORD *)v5 + 25) &= 0xFFFE1FFF;
        InputTraceLogging::Delivery::UpdateISODState(v5);
        v24 = v5;
        v25 = v5;
        v7 = 0LL;
        v5 = *(struct tagQMSG **)v5;
        *(_QWORD *)v13 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v24 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v25;
        }
        else
        {
          *((_QWORD *)v24 + 1) = *(_QWORD *)(v21 + 8);
          *(_QWORD *)(v21 + 8) = v24;
        }
        *(_QWORD *)v8 = v25;
        v71 = v25;
        ++*(_DWORD *)(v21 + 16);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
          || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v26 = 0;
        }
        v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v27,
            *(_QWORD *)(v28 + 69152),
            v69,
            v70,
            0x28u,
            (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids);
          v7 = 0LL;
        }
        if ( *((_DWORD *)v25 + 24) && (*(_DWORD *)(*(_QWORD *)(v20 + 480) + 8LL) & 0x2000) == 0 )
        {
          SetWakeBit(v20, 8256LL);
          v7 = 0LL;
        }
        if ( v25 == *((struct tagQMSG **)a2 + 11) )
        {
          v35 = *(struct tagQ **)(v20 + 464);
          if ( a2 != v35 )
          {
            if ( !*((_QWORD *)v35 + 11) )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                v36 = 0;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v37 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v37 = 0;
              }
              if ( v36 || v37 )
              {
                v59 = *(_QWORD *)(v20 + 464);
                v60 = *((_QWORD *)a2 + 11);
                v61 = *(_QWORD *)(v59 + 88);
                v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
                LOBYTE(v63) = v37;
                LOBYTE(v64) = v36;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v64,
                  v63,
                  *(_QWORD *)(v62 + 69152),
                  5,
                  18,
                  41,
                  (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                  v60,
                  v59,
                  v61);
                v7 = 0LL;
              }
              *(_QWORD *)(*(_QWORD *)(v20 + 464) + 88LL) = *((_QWORD *)a2 + 11);
            }
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
              || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v38 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v39 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v39 = 0;
            }
            if ( v38 || v39 )
            {
              v65 = *((_QWORD *)a2 + 11);
              v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
              LOBYTE(v67) = v39;
              LOBYTE(v68) = v38;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v68,
                v67,
                *(_QWORD *)(v66 + 69152),
                5,
                18,
                42,
                (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                (char)a2,
                v65);
              v7 = 0LL;
            }
            *((_QWORD *)a2 + 11) = 0LL;
          }
        }
        if ( !v5 )
          break;
        v8 = v71;
        v10 = v20;
        *((_QWORD *)v5 + 1) = 0LL;
      }
      else
      {
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v18;
        v29 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
        v30 = *(struct tagQMSG **)v5;
        if ( v5 == v29 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
            || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v54 = v18;
          }
          if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED == v19
            || (v55 = 1, *((_WORD *)WPP_GLOBAL_Control + 36) == (_WORD)v18) )
          {
            v55 = v18;
          }
          if ( v54 || v55 )
          {
            v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v58,
              v57,
              *(_QWORD *)(v56 + 69152),
              5,
              18,
              39,
              (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
              (char)a2,
              (char)v29);
            v18 = 0LL;
          }
          v8 = v71;
          *((_QWORD *)a2 + 11) = v18;
        }
        CleanEventMessage(v5, v17);
        FreeQEntry((__int64)v5, v31);
        v7 = 0LL;
        v71 = v8;
        v5 = v30;
        if ( !v30 )
          break;
        v10 = v73;
      }
      v9 = v72;
      v3 = a3;
    }
  }
  RedistributeDeferredMsgsOnQueue(a2);
}
