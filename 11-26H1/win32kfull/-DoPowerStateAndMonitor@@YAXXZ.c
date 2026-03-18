/*
 * XREFs of ?DoPowerStateAndMonitor@@YAXXZ @ 0x1401D4070
 * Callers:
 *     <none>
 * Callees:
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 */

void __fastcall DoPowerStateAndMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD *UserSessionState; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  CInputGlobals *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  CInputGlobals *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  CInputGlobals *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  CInputGlobals *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  CInputGlobals *v72; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  CInputGlobals *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  CInputGlobals *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  CInputGlobals *v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int128 v100; // [rsp+30h] [rbp-40h] BYREF
  __int128 v101; // [rsp+40h] [rbp-30h]
  __int128 v102; // [rsp+50h] [rbp-20h] BYREF
  __int128 v103; // [rsp+60h] [rbp-10h]
  int v104; // [rsp+A0h] [rbp+30h] BYREF

  v102 = 0LL;
  v104 = 0;
  v103 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v4 = (unsigned int)UserSessionState[740];
  if ( (v4 & 1) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v4, v2) + 14328) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v6, v5) + 14328) & 0x10) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v8, v7) + 14329) & 1) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v10, v9) + 14329) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v12, v11) + 14329) & 0x10) != 0 )
  {
    return;
  }
  EtwTraceIdleStatus();
  if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 66088) )
  {
    v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 2680) - 5000;
    if ( v17 > 0 )
    {
      v68 = W32GetUserSessionState(v16, v15);
      if ( CInputGlobals::IsTimeFromLastInputEvent(*(CInputGlobals **)(v68 + 3056), v17) )
      {
        v69 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 3056);
        v72 = *(CInputGlobals **)(W32GetUserSessionState(v71, v70) + 3056);
        GlobalTickCount = CInputGlobals::GetGlobalTickCount(v69, 1LL);
        if ( GlobalTickCount != CInputGlobals::GetLastInputTime(v72)
          && (!(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v75, v74) + 19112))
          && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
        {
          EtwTraceIdleActionExpiration(6LL, (unsigned int)v17);
          v78 = W32GetUserSessionState(v77, v76);
          CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v78 + 3056), 1LL);
          *(_DWORD *)(W32GetUserSessionState(v80, v79) + 3040) = v17;
        }
      }
    }
  }
  if ( *(int *)(W32GetUserSessionState(v16, v15) + 3040) <= 0
    || (v82 = *(CInputGlobals **)(W32GetUserSessionState(v19, v18) + 3056),
        v85 = W32GetUserSessionState(v84, v83),
        !CInputGlobals::IsTimeFromLastInputEvent(v82, *(_DWORD *)(v85 + 3040)))
    || (v86 = *(CInputGlobals **)(W32GetUserSessionState(v19, v18) + 3056),
        v89 = W32GetUserSessionState(v88, v87),
        CInputGlobals::IsTimeFromLastInputEvent(v86, *(_DWORD *)(v89 + 3040) + 10000)) )
  {
    v20 = 0;
    *(_DWORD *)(W32GetUserSessionState(v19, v18) + 3040) = 0;
  }
  else
  {
    v20 = 1;
  }
  if ( *(int *)(W32GetUserSessionState(v19, v18) + 2680) > 0 )
  {
    v38 = *(CInputGlobals **)(W32GetUserSessionState(v22, v21) + 3056);
    v41 = W32GetUserSessionState(v40, v39);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v38, *(_DWORD *)(v41 + 2680)) && !v20 )
    {
      v42 = W32GetUserSessionState(v22, v21);
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v42 + 3056), 3LL) )
      {
        v43 = W32GetUserSessionState(v22, v21);
        EtwTraceIdleActionExpiration(2LL, *(unsigned int *)(v43 + 2680));
      }
    }
  }
  if ( (UserSessionState[687] || UserSessionState[692] || UserSessionState[693]) && !v20 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v104) )
    {
      v62 = v104;
      if ( !*(_QWORD *)(W32GetUserSessionState(v22, v21) + 18928)
        || (v66 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 18928), !*(_QWORD *)(v66 + 128)) )
      {
        *((_QWORD *)&v101 + 1) = v62;
LABEL_56:
        v100 = 0uLL;
        *(_QWORD *)&v101 = 5LL;
        QueuePowerRequest(&v100, 0LL);
        goto LABEL_17;
      }
    }
    else
    {
      if ( UserSessionState[692] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_17;
      if ( !*(_QWORD *)(W32GetUserSessionState(v22, v21) + 18928)
        || (v66 = *(_QWORD *)(W32GetUserSessionState(v91, v90) + 18928), !*(_QWORD *)(v66 + 128)) )
      {
        *((_QWORD *)&v101 + 1) = 17LL;
        goto LABEL_56;
      }
    }
    v67 = W32GetUserSessionState(v66, v65);
    PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(v67 + 18928) + 128LL), 0x112u, 0xF170uLL, 2LL, 0);
  }
LABEL_17:
  if ( *(int *)(W32GetUserSessionState(v22, v21) + 2684) > 0 )
  {
    v44 = *(CInputGlobals **)(W32GetUserSessionState(v24, v23) + 3056);
    v47 = W32GetUserSessionState(v46, v45);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v44, *(_DWORD *)(v47 + 2684)) )
    {
      v48 = W32GetUserSessionState(v24, v23);
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v48 + 3056), 4LL) )
      {
        v81 = W32GetUserSessionState(v50, v49);
        EtwTraceIdleActionExpiration(5LL, *(unsigned int *)(v81 + 2684));
      }
      *(_DWORD *)(W32GetUserSessionState(v50, v49) + 2684) = 0;
      LODWORD(v103) = 9;
      QueuePowerRequest(&v102, 0LL);
    }
  }
  if ( *(int *)(W32GetUserSessionState(v24, v23) + 62808) > 0 )
  {
    v51 = *(CInputGlobals **)(W32GetUserSessionState(v26, v25) + 3056);
    v54 = W32GetUserSessionState(v53, v52);
    if ( CInputGlobals::IsTimeFromLastInputEvent(v51, *(_DWORD *)(v54 + 62808)) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v26, v25) + 66092) )
      {
        v92 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 3056);
        v95 = *(CInputGlobals **)(W32GetUserSessionState(v94, v93) + 3056);
        v96 = CInputGlobals::GetGlobalTickCount(v92, 1LL);
        if ( v96 != CInputGlobals::GetLastInputTime(v95) )
        {
          v97 = W32GetUserSessionState(v26, v25);
          EtwTraceIdleActionExpiration(3LL, *(unsigned int *)(v97 + 62808));
          if ( !(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v99, v98) + 19112) )
            PostWinlogonMessage(1027LL, 0LL);
        }
      }
      else
      {
        v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 3056);
        v60 = *(CInputGlobals **)(W32GetUserSessionState(v59, v58) + 3056);
        v61 = CInputGlobals::GetGlobalTickCount(v57, 2LL);
        if ( v61 != CInputGlobals::GetLastInputTime(v60) )
        {
          LODWORD(v103) = 6;
          QueuePowerRequest(&v102, 0LL);
        }
      }
    }
  }
  if ( *(int *)(W32GetUserSessionState(v26, v25) + 2688) > 0 )
  {
    v31 = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 2688);
    if ( v31 > 0
      && (*(int *)(W32GetUserSessionState(v30, v29) + 2680) <= 0
       || v31 < *(_DWORD *)(W32GetUserSessionState(v33, v32) + 2680)) )
    {
      v34 = W32GetUserSessionState(v33, v32);
      if ( CInputGlobals::IsTimeFromLastInputEvent(*(CInputGlobals **)(v34 + 3056), v31) )
      {
        v37 = W32GetUserSessionState(v36, v35);
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v37 + 3056), 5LL) )
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v31);
        if ( !(unsigned int)PowerIsDisplayRequired()
          && UserSessionState[722] == 1
          && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
        {
          v101 = 0LL;
          LODWORD(v101) = 7;
          v100 = 0LL;
          QueuePowerRequest(&v100, 0LL);
        }
      }
    }
  }
}
