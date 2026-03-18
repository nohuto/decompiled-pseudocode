/*
 * XREFs of xxxEndScroll @ 0x1402E85E0
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4340 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4590 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _GetMessagePos @ 0x1400385F8 (_GetMessagePos.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     zzzShowCaret @ 0x140158430 (zzzShowCaret.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402E26C4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E488C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E60A0 (WPP_RECORDER_AND_TRACE_SF_ql.c)
 */

struct tagTHREADINFO *__fastcall xxxEndScroll(struct tagWND *a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rcx
  bool v5; // di
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct tagTHREADINFO *result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  void (__fastcall *v16)(struct tagWND *, __int64, __int64, unsigned __int64); // rax
  struct tagSBCALC *v17; // rdx
  void (__fastcall *v18)(struct tagWND *, __int64, __int64, unsigned __int64); // rcx
  int MessagePos; // eax
  __int64 v20; // r8
  struct tagTHREADINFO **v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  struct tagWND *v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = *(_QWORD *)&WPP_GLOBAL_Control;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_ql(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      4);
  }
  result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  v11 = *((_QWORD *)result + 94);
  if ( v11 )
  {
    result = PtiCurrent(v4, a2);
    v13 = *((_QWORD *)result + 59);
    if ( *(struct tagWND **)(v13 + 112) == a1 )
    {
      if ( *(_QWORD *)(v11 + 48) )
      {
        v14 = *(_DWORD *)(v11 + 56);
        *(_DWORD *)(v11 + 56) = 0;
        xxxReleaseCapture(v13, v12);
        result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
        if ( v11 == *((_QWORD *)result + 94) )
        {
          v16 = *(void (__fastcall **)(struct tagWND *, __int64, __int64, unsigned __int64))(v11 + 48);
          if ( (char *)v16 != (char *)xxxTrackThumb )
          {
            v18 = xxxTrackBox;
            if ( v16 == xxxTrackBox )
            {
              if ( *(_QWORD *)(v11 + 64) )
              {
                FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
                *(_QWORD *)(v11 + 64) = 0LL;
              }
              MessagePos = GetMessagePos((__int64)v18, v15);
              v20 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
                LODWORD(v36) = *(_DWORD *)(v20 + 96) - (__int16)MessagePos;
              else
                LODWORD(v36) = (__int16)MessagePos - *(_DWORD *)(v20 + 88);
              HIDWORD(v36) = SHIWORD(MessagePos) - *(_DWORD *)(v20 + 92);
              if ( PtInRect((_DWORD *)(v11 + 32), v36) )
                zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v11, 0, v14);
            }
            goto LABEL_27;
          }
          if ( v2 )
            *(_DWORD *)(v11 + 80) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 12LL);
          v17 = *(struct tagSBCALC **)(v11 + 24);
          if ( !v17
            || (xxxDoScroll(
                  *(struct tagDRAWITEMSTRUCT ***)(v11 + 16),
                  (struct tagTHREADINFO **)v17,
                  4u,
                  *(_DWORD *)(v11 + 80),
                  (*(_DWORD *)v11 >> 1) & 1),
                result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                v11 == *((_QWORD *)result + 94)) )
          {
            DrawThumb((struct tagTHREADINFO **)a1, v17, (*(_DWORD *)v11 >> 1) & 1);
LABEL_27:
            result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
            if ( v11 == *((_QWORD *)result + 94) )
            {
              v21 = *(struct tagTHREADINFO ***)(v11 + 24);
              if ( !v21
                || (xxxDoScroll(*(struct tagDRAWITEMSTRUCT ***)(v11 + 16), v21, 8u, 0, (*(_DWORD *)v11 >> 1) & 1),
                    result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                    v11 == *((_QWORD *)result + 94)) )
              {
                SetOrClrWF(0, a1, 0x610u, 1);
                SetOrClrWF(0, a1, 0x620u, 1);
                if ( !*(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888)
                  || (v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888), !*(_QWORD *)(v27 + 120))
                  || (v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18888),
                      v28 != *((_QWORD *)PtiCurrent(v30, v29) + 59))
                  || (v33 = W32GetUserSessionState(v32, v31),
                      xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v33 + 18888) + 120LL), 0, 3u, 33),
                      result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                      v11 == *((_QWORD *)result + 94)) )
                {
                  xxxWindowEvent(0x13u, a1, ((*(_DWORD *)v11 & 2) != 0) | 0xFFFFFFFA, 0, 0);
                  result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
                  if ( v11 == *((_QWORD *)result + 94) )
                  {
                    v34 = *(struct tagWND **)(v11 + 16);
                    if ( !v34
                      || (zzzShowCaret(v34),
                          result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                          v11 == *((_QWORD *)result + 94)) )
                    {
                      *(_QWORD *)(v11 + 48) = 0LL;
                      *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL) = 0LL;
                      HMAssignmentUnlock(v11 + 16);
                      HMAssignmentUnlock(v11 + 24);
                      HMAssignmentUnlock(v11 + 8);
                      return (struct tagTHREADINFO *)UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(
                                                       v11,
                                                       v35);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
