/*
 * XREFs of ?DoPowerStateAndMonitor@@YAXXZ @ 0x140193960
 * Callers:
 *     _lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_ @ 0x140193910 (_lambda_2bb7a2ff8864d6893c712a9e9ac801fb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 */

void __fastcall DoPowerStateAndMonitor(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  CInputGlobals *v23; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  CInputGlobals *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  CInputGlobals *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // di
  __int64 v43; // rdx
  __int64 v44; // rcx
  CInputGlobals *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  CInputGlobals *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  CInputGlobals *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  CInputGlobals *v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  CInputGlobals *v88; // rdi
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  signed int v94; // ebx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int128 v101; // [rsp+30h] [rbp-40h] BYREF
  __int128 v102; // [rsp+40h] [rbp-30h]
  __int128 v103; // [rsp+50h] [rbp-20h] BYREF
  __int128 v104; // [rsp+60h] [rbp-10h]
  int v105; // [rsp+A0h] [rbp+30h] BYREF

  v103 = 0LL;
  v105 = 0;
  v104 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = (_DWORD *)(UserSessionState + 368);
  v5 = *(unsigned int *)(UserSessionState + 2960);
  if ( (v5 & 1) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v5, v3) + 14336) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v7, v6) + 14336) & 0x10) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v9, v8) + 14337) & 1) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v11, v10) + 14337) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v13, v12) + 14337) & 0x10) != 0 )
  {
    return;
  }
  EtwTraceIdleStatus();
  if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 66096) )
  {
    v18 = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 2680) - 5000;
    if ( v18 > 0 )
    {
      v19 = W32GetUserSessionState(v17, v16);
      if ( CInputGlobals::IsTimeFromLastInputEvent(*(CInputGlobals **)(v19 + 3056), v18) )
      {
        v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 3056);
        v23 = *(CInputGlobals **)(W32GetUserSessionState(v22, v21) + 3056);
        GlobalTickCount = CInputGlobals::GetGlobalTickCount(v20, 1LL);
        if ( GlobalTickCount != CInputGlobals::GetLastInputTime(v23)
          && (!(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v26, v25) + 19072))
          && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
        {
          EtwTraceIdleActionExpiration(6LL, (unsigned int)v18);
          v29 = W32GetUserSessionState(v28, v27);
          CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v29 + 3056), 1LL);
          *(_DWORD *)(W32GetUserSessionState(v31, v30) + 3040) = v18;
        }
      }
    }
  }
  if ( *(int *)(W32GetUserSessionState(v17, v16) + 3040) <= 0
    || (v34 = *(CInputGlobals **)(W32GetUserSessionState(v33, v32) + 3056),
        v37 = W32GetUserSessionState(v36, v35),
        !CInputGlobals::IsTimeFromLastInputEvent(v34, *(_DWORD *)(v37 + 3040)))
    || (v38 = *(CInputGlobals **)(W32GetUserSessionState(v33, v32) + 3056),
        v41 = W32GetUserSessionState(v40, v39),
        CInputGlobals::IsTimeFromLastInputEvent(v38, *(_DWORD *)(v41 + 3040) + 10000)) )
  {
    v42 = 0;
    *(_DWORD *)(W32GetUserSessionState(v33, v32) + 3040) = 0;
  }
  else
  {
    v42 = 1;
  }
  if ( *(int *)(W32GetUserSessionState(v33, v32) + 2680) > 0 )
  {
    v45 = *(CInputGlobals **)(W32GetUserSessionState(v44, v43) + 3056);
    v48 = W32GetUserSessionState(v47, v46);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v45, *(_DWORD *)(v48 + 2680)) && !v42 )
    {
      v49 = W32GetUserSessionState(v44, v43);
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v49 + 3056), 3LL) )
      {
        v50 = W32GetUserSessionState(v44, v43);
        EtwTraceIdleActionExpiration(2LL, *(unsigned int *)(v50 + 2680));
      }
    }
  }
  if ( (v4[596] || v4[601] || v4[602]) && !v42 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v105) )
    {
      v51 = v105;
      if ( !*(_QWORD *)(W32GetUserSessionState(v44, v43) + 18888)
        || (v55 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 18888), !*(_QWORD *)(v55 + 128)) )
      {
        *((_QWORD *)&v102 + 1) = v51;
LABEL_39:
        v101 = 0uLL;
        *(_QWORD *)&v102 = 5LL;
        QueuePowerRequest(&v101, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      if ( v4[601] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_40;
      if ( !*(_QWORD *)(W32GetUserSessionState(v44, v43) + 18888)
        || (v55 = *(_QWORD *)(W32GetUserSessionState(v57, v56) + 18888), !*(_QWORD *)(v55 + 128)) )
      {
        *((_QWORD *)&v102 + 1) = 17LL;
        goto LABEL_39;
      }
    }
    v58 = W32GetUserSessionState(v55, v54);
    PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(v58 + 18888) + 128LL), 0x112u, 0xF170uLL, 2LL, 0);
  }
LABEL_40:
  if ( *(int *)(W32GetUserSessionState(v44, v43) + 2684) > 0 )
  {
    v61 = *(CInputGlobals **)(W32GetUserSessionState(v60, v59) + 3056);
    v64 = W32GetUserSessionState(v63, v62);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v61, *(_DWORD *)(v64 + 2684)) )
    {
      v65 = W32GetUserSessionState(v60, v59);
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v65 + 3056), 4LL) )
      {
        v68 = W32GetUserSessionState(v67, v66);
        EtwTraceIdleActionExpiration(5LL, *(unsigned int *)(v68 + 2684));
      }
      *(_DWORD *)(W32GetUserSessionState(v67, v66) + 2684) = 0;
      LODWORD(v104) = 9;
      QueuePowerRequest(&v103, 0LL);
    }
  }
  if ( *(int *)(W32GetUserSessionState(v60, v59) + 62816) > 0 )
  {
    v71 = *(CInputGlobals **)(W32GetUserSessionState(v70, v69) + 3056);
    v74 = W32GetUserSessionState(v73, v72);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v71, *(_DWORD *)(v74 + 62816)) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v70, v69) + 66100) )
      {
        v77 = *(_QWORD *)(W32GetUserSessionState(v76, v75) + 3056);
        v80 = *(CInputGlobals **)(W32GetUserSessionState(v79, v78) + 3056);
        v81 = CInputGlobals::GetGlobalTickCount(v77, 1LL);
        if ( v81 != CInputGlobals::GetLastInputTime(v80) )
        {
          v82 = W32GetUserSessionState(v70, v69);
          EtwTraceIdleActionExpiration(3LL, *(unsigned int *)(v82 + 62816));
          if ( !(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v84, v83) + 19072) )
            PostWinlogonMessage(1027LL, 0LL);
        }
      }
      else
      {
        v85 = *(_QWORD *)(W32GetUserSessionState(v76, v75) + 3056);
        v88 = *(CInputGlobals **)(W32GetUserSessionState(v87, v86) + 3056);
        v89 = CInputGlobals::GetGlobalTickCount(v85, 2LL);
        if ( v89 != CInputGlobals::GetLastInputTime(v88) )
        {
          LODWORD(v104) = 6;
          QueuePowerRequest(&v103, 0LL);
        }
      }
    }
  }
  if ( *(int *)(W32GetUserSessionState(v70, v69) + 2688) > 0 )
  {
    v94 = *(_DWORD *)(W32GetUserSessionState(v91, v90) + 2688);
    if ( v94 > 0
      && (*(int *)(W32GetUserSessionState(v93, v92) + 2680) <= 0
       || v94 < *(_DWORD *)(W32GetUserSessionState(v96, v95) + 2680)) )
    {
      v97 = W32GetUserSessionState(v96, v95);
      if ( CInputGlobals::IsTimeFromLastInputEvent(*(CInputGlobals **)(v97 + 3056), v94) )
      {
        v100 = W32GetUserSessionState(v99, v98);
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v100 + 3056), 5LL) )
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v94);
        if ( !(unsigned int)PowerIsDisplayRequired() && v4[630] == 1 && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
        {
          v102 = 0LL;
          LODWORD(v102) = 7;
          v101 = 0LL;
          QueuePowerRequest(&v101, 0LL);
        }
      }
    }
  }
}
