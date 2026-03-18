/*
 * XREFs of ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     CitDisplayPowerChange @ 0x1400EA4D4 (CitDisplayPowerChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400EB994 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitSessionConnectChange @ 0x140192D40 (CitSessionConnectChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x1401BB940 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400D61F4 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1400D6350 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA-AU1@AEBU1@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D6408 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400D653C (-CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1400D658C (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1400D669C (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400D7518 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1401BE150 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x14024A074 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4)
{
  unsigned __int64 v4; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  struct tagPROCESSINFO **v11; // rcx
  unsigned int v12; // esi
  bool v13; // zf
  struct _CIT_INTERACTION_SUMMARY *v14; // rax
  unsigned int v15; // ecx
  int v16; // ebx
  struct _CIT_INTERACTION_SUMMARY *v17; // rdi
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  bool v24; // cf
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  int v34; // eax
  struct tagPROCESSINFO *v35; // rdx
  int v36; // eax
  int v37; // eax
  struct _CIT_PROG_DATA *v38; // rax
  struct _CIT_PROG_DATA *v39; // rsi
  unsigned int v40; // ecx
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int64 UserSessionState; // rax
  struct tagPROCESSINFO **v48; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v49[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v50; // [rsp+40h] [rbp-38h] BYREF
  __int64 v51; // [rsp+48h] [rbp-30h] BYREF
  struct tagWND *v52; // [rsp+50h] [rbp-28h]
  __int64 v53; // [rsp+58h] [rbp-20h] BYREF
  int v54; // [rsp+60h] [rbp-18h]

  v4 = (unsigned __int64)a3;
  v52 = a4;
  if ( *((struct tagPROCESSINFO **)a1 + 15) != a3 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 18952);
    CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), a2);
    v8 = *(_QWORD *)((char *)a1 + 220);
    v50 = v8;
    CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), a2);
    v9 = *((_QWORD *)a1 + 15);
    v10 = *(_QWORD *)((char *)a1 + 244);
    v51 = v10;
    if ( v9
      && dword_1402A9F58
      && (qword_1402A9F68 & 0x800000000800LL) != 0
      && (qword_1402A9F70 & 0x800000000800LL) == qword_1402A9F70 )
    {
      v11 = *(struct tagPROCESSINFO ***)(v9 + 912);
      v12 = a2 - *((_DWORD *)a1 + 34);
      v13 = *(_BYTE *)(v7 + 25) == 0;
      v49[0] = v12;
      v48 = v11;
      if ( !v13 )
      {
        v38 = CitpProcessEnsureProgData(v11[1]);
        v39 = v38;
        if ( v38 )
        {
          v40 = *((_DWORD *)v38 + 20);
          v41 = -1;
          v42 = v40 + 1;
          v24 = v40 + 1 < v40;
          v43 = v49[0];
          if ( !v24 )
            v41 = v42;
          *((_DWORD *)v38 + 20) = v41;
          v44 = -1;
          v45 = *((_DWORD *)v38 + 21);
          v46 = v45 + v43;
          if ( v46 >= v45 )
            v44 = v46;
          *((_DWORD *)v39 + 21) = v44;
          UserSessionState = W32GetUserSessionState(v46, v42, v44);
          CitpProgDataNotifyUseUpdate(
            *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18952) + 32LL),
            v39);
        }
        v11 = v48;
        v12 = v49[0];
      }
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      {
        v14 = CitpInteractionSummaryEnsure(a1, v11, 2);
        if ( v14 )
        {
          v15 = *((_DWORD *)v14 + 33);
          v16 = -1;
          v17 = v14;
          v18 = -1;
          if ( v15 + 1 >= v15 )
            v18 = v15 + 1;
          v19 = -1;
          *((_DWORD *)v14 + 33) = v18;
          v20 = *((_DWORD *)v14 + 34);
          if ( v20 + v12 >= v20 )
            v19 = v20 + v12;
          *((_DWORD *)v17 + 34) = v19;
          CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v50, &v48, (char *)a1 + 184);
          CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v51, v49, (char *)a1 + 192);
          v21 = *((_DWORD *)v17 + 35);
          v22 = -1;
          v23 = v21 + (HIDWORD(v48) & 0x7FFFFFFF);
          v24 = v23 < v21;
          v25 = *((_DWORD *)v17 + 36);
          if ( !v24 )
            v22 = v23;
          v26 = v25 + (_DWORD)v48;
          *((_DWORD *)v17 + 35) = v22;
          v27 = -1;
          if ( v26 >= v25 )
            v27 = v26;
          v28 = v49[1] & 0x7FFFFFFF;
          *((_DWORD *)v17 + 36) = v27;
          v29 = *((_DWORD *)v17 + 37);
          v30 = -1;
          v31 = v29 + v28;
          v24 = v31 < v29;
          v32 = *((_DWORD *)v17 + 38);
          if ( !v24 )
            v30 = v31;
          v33 = v32 + v49[0];
          *((_DWORD *)v17 + 37) = v30;
          if ( v33 >= v32 )
            v16 = v33;
          *((_DWORD *)v17 + 38) = v16;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v17 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          v34 = *(_DWORD *)((char *)a1 + 178);
          v35 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
          v53 = *(_QWORD *)((char *)a1 + 170);
          v54 = v34;
          CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v53, v35, 0LL);
          v36 = v54;
          *(_QWORD *)((char *)v17 + 62) = v53;
          *(_DWORD *)((char *)v17 + 70) = v36;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v17 + 160),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 72),
            *(_DWORD *)(v7 + 20));
          v8 = v50;
          v10 = v51;
        }
        CitpInteractionSummariesCheckPeriodAndFlush(a1, a2);
      }
    }
    if ( v4 )
    {
      if ( (unsigned int)CitpAllowForegroundProcess(a1) )
        v4 &= -(__int64)(CitpProcessEnsureContext((struct tagPROCESSINFO *)v4) != 0LL);
      else
        v4 = 0LL;
    }
    *((_QWORD *)a1 + 15) = v4;
    *((_DWORD *)a1 + 34) = a2;
    *((_QWORD *)a1 + 23) = v8;
    *((_QWORD *)a1 + 24) = v10;
    *(_OWORD *)((char *)a1 + 140) = 0LL;
    *(_QWORD *)((char *)a1 + 156) = 0LL;
    *((_DWORD *)a1 + 41) = 0;
    *((_WORD *)a1 + 84) = 0;
    *(_QWORD *)((char *)a1 + 170) = 0LL;
    *(_DWORD *)((char *)a1 + 178) = 0;
    if ( v4
      && dword_1402A9F58
      && (qword_1402A9F68 & 0x800000000800LL) != 0
      && (qword_1402A9F70 & 0x800000000800LL) == qword_1402A9F70 )
    {
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 33) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264) )
      {
        *((_DWORD *)a1 + 72) = a2;
        *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
      }
      v53 = 0LL;
      v54 = 0;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v53, (struct tagPROCESSINFO *)v4, v52);
      v37 = v54;
      *(_QWORD *)((char *)a1 + 170) = v53;
      *(_DWORD *)((char *)a1 + 178) = v37;
    }
  }
}
