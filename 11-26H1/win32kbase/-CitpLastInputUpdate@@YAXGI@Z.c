/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400D3E48
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     CitLastInputUpdate @ 0x1400D3D50 (CitLastInputUpdate.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D6768 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400D6678 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x14012E294 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int16 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  int v4; // r12d
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 UserSessionState; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned int v21; // eax
  unsigned int v22; // ebp
  int v23; // eax
  unsigned int v24; // r15d
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // r14
  unsigned int v29; // eax
  unsigned int v30; // ebp
  int v31; // eax
  struct tagPROCESSINFO *v32; // rdx
  __int64 v33; // rdi
  __int16 v34; // bp
  unsigned __int16 v35; // ax
  __int16 v36; // cx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rcx
  struct tagPROCESSINFO *v44; // rcx
  struct tagPROCESSINFO **v45; // rax
  struct tagPROCESSINFO **v46; // rdi
  struct _CIT_INTERACTION_SUMMARY *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int16 v50; // ax
  int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  unsigned int v56; // [rsp+58h] [rbp+10h] BYREF

  v56 = a2;
  v3 = a1;
  if ( a1 == 32 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    a2 -= MEMORY[0xFFFFF780000002E4];
    if ( a2 > 0x3E8 )
      RtlSetSystemGlobalData(13LL, &v56, 4LL);
  }
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952);
  if ( *(_QWORD *)(v6 + 32) )
  {
    UserSessionState = W32GetUserSessionState((_WORD)v6, v5, v7);
    LODWORD(v9) = v56;
    v10 = *(_QWORD *)(UserSessionState + 18952);
    if ( v56 < *(_DWORD *)(v10 + 40) )
    {
      v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v56 = v9;
    }
    *(_DWORD *)(v10 + 40) = v9;
    v11 = W32GetUserSessionState((_WORD)v9, v10, 4);
    v12 = v56;
    v13 = *(_QWORD *)(v11 + 18952);
    v14 = *(_QWORD *)(v13 + 32);
    v20 = W32GetUserSessionState((_WORD)v13, v15, v16);
    if ( !*(_DWORD *)(v20 + 18960) )
    {
      v18 = *(_QWORD *)(W32GetUserSessionState((_WORD)v18, v17, v19) + 18952);
      LODWORD(v17) = *(_DWORD *)(v18 + 8);
      *(_DWORD *)(v20 + 18960) = v17;
    }
    v21 = *(_DWORD *)(v14 + 236);
    v22 = v12 - v21;
    if ( v12 != v21 )
    {
      LODWORD(v37) = v12;
      if ( v12 >= v21 )
        goto LABEL_136;
      LOWORD(v18) = 4;
      v53 = *(_DWORD *)(v14 + 236);
      v37 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v22 = v37 - v53;
      if ( (unsigned int)v37 >= v53 )
        goto LABEL_136;
      v19 = *(_QWORD *)(W32GetUserSessionState(4, v17, v19) + 18952);
      LOWORD(v18) = -1;
      v17 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(v19 + 64);
      if ( v17 > 0xFFFFFFFF )
        LODWORD(v17) = -1;
      if ( v22 <= (unsigned int)v17 && v22 <= 0x240C8400 )
      {
LABEL_136:
        if ( *(_DWORD *)(v14 + 228) )
        {
          *(_DWORD *)(v14 + 244) += v22;
        }
        else
        {
          LODWORD(v19) = *(_DWORD *)(v14 + 232);
          LODWORD(v17) = *(_DWORD *)(v14 + 236) - v19;
          LODWORD(v18) = *(_DWORD *)(v20 + 18960);
          if ( (unsigned int)v17 < (unsigned int)v18 )
          {
            if ( (int)v37 - (int)v19 > (unsigned int)v18 )
            {
              v51 = *(_DWORD *)(v14 + 248);
              LODWORD(v18) = v18 - v17;
              if ( v51 < 0 )
                *(_DWORD *)(v14 + 248) = v51 & 0x7FFFFFFF;
            }
            else
            {
              LODWORD(v18) = v22;
            }
            *(_DWORD *)(v14 + 244) += v18;
          }
        }
        *(_DWORD *)(v14 + 236) = v37;
      }
      else
      {
        ++*(_DWORD *)(v14 + 240);
        *(_DWORD *)(v14 + 236) = v37;
        *(_DWORD *)(v14 + 232) = v37 - *(_DWORD *)(v20 + 18960);
        CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v14 + 244), 0);
      }
    }
    v23 = *(_DWORD *)(v14 + 248);
    if ( v23 >= 0 )
      *(_DWORD *)(v14 + 248) = (v23 + 1) | 0x80000000;
    *(_DWORD *)(v14 + 232) = v12;
    if ( !v4 )
    {
      v24 = v56;
      v28 = W32GetUserSessionState((_WORD)v18, v17, v19);
      if ( !*(_DWORD *)(v28 + 18960) )
      {
        v26 = *(_QWORD *)(W32GetUserSessionState((_WORD)v26, v25, v27) + 18952);
        v25 = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(v28 + 18960) = v25;
      }
      v29 = *(_DWORD *)(v14 + 212);
      v30 = v24 - v29;
      if ( v24 != v29 )
      {
        LODWORD(v38) = v24;
        if ( v24 >= v29 )
          goto LABEL_137;
        v54 = *(_DWORD *)(v14 + 212);
        v38 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v30 = v38 - v54;
        if ( (unsigned int)v38 >= v54 )
          goto LABEL_137;
        v55 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_WORD)v26, v25, v27) + 18952) + 64LL);
        if ( v55 > 0xFFFFFFFF )
          LODWORD(v55) = -1;
        if ( v30 <= (unsigned int)v55 && v30 <= 0x240C8400 )
        {
LABEL_137:
          if ( *(_DWORD *)(v14 + 204) )
          {
            *(_DWORD *)(v14 + 220) += v30;
          }
          else
          {
            v39 = *(_DWORD *)(v14 + 208);
            v40 = *(_DWORD *)(v14 + 212) - v39;
            v41 = *(_DWORD *)(v28 + 18960);
            if ( v40 < v41 )
            {
              if ( (int)v38 - v39 > v41 )
              {
                v52 = *(_DWORD *)(v14 + 224);
                v42 = v41 - v40;
                if ( v52 < 0 )
                  *(_DWORD *)(v14 + 224) = v52 & 0x7FFFFFFF;
              }
              else
              {
                v42 = v30;
              }
              *(_DWORD *)(v14 + 220) += v42;
            }
          }
          *(_DWORD *)(v14 + 212) = v38;
        }
        else
        {
          ++*(_DWORD *)(v14 + 216);
          *(_DWORD *)(v14 + 212) = v38;
          *(_DWORD *)(v14 + 208) = v38 - *(_DWORD *)(v28 + 18960);
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v14 + 220), 0);
        }
      }
      v31 = *(_DWORD *)(v14 + 224);
      if ( v31 >= 0 )
        *(_DWORD *)(v14 + 224) = (v31 + 1) | 0x80000000;
      *(_DWORD *)(v14 + 208) = v24;
    }
    v32 = *(struct tagPROCESSINFO **)(v14 + 120);
    if ( v32 )
    {
      v33 = *((_QWORD *)v32 + 114);
      if ( v33
        && (unsigned __int64)(v33 - 52976) > 1
        && (v43 = *(_QWORD *)(v33 + 24)) != 0
        && (unsigned __int64)(v43 - 52976) > 1
        && (v44 = *(struct tagPROCESSINFO **)(v43 + 8)) != 0LL
        && v44 != v32 )
      {
        v45 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v44);
        v46 = v45;
        if ( v45 )
        {
          v47 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v14, v45, 1);
          if ( v56 - *((_DWORD *)v46 + 23) > 0x3E8 )
          {
            *((_DWORD *)v46 + 23) = v56;
            *((_WORD *)v46 + 48) = 0;
            if ( v47 )
              CitpStatIncrement((unsigned __int16 *)v47 + 16, 1u);
            PsUpdateComponentPower(*(_QWORD *)v46[1], 9LL);
          }
          if ( v47 && ((unsigned __int16)v3 & (_WORD)v46[12]) == 0 )
          {
            if ( v3 > 0x200 )
            {
              switch ( v3 )
              {
                case 0x400u:
                  PsUpdateComponentPower(*(_QWORD *)v46[1], 13LL);
                  v48 = 38LL;
                  goto LABEL_60;
                case 0x800u:
                  PsUpdateComponentPower(*(_QWORD *)v46[1], 14LL);
                  v48 = 42LL;
                  goto LABEL_60;
                case 0x1000u:
                  v48 = 48LL;
                  goto LABEL_60;
                case 0x2000u:
                  v48 = 52LL;
                  goto LABEL_60;
                case 0x4000u:
                  v48 = 60LL;
                  goto LABEL_60;
                case 0x8000u:
                  v48 = 54LL;
                  goto LABEL_60;
              }
            }
            else
            {
              switch ( v3 )
              {
                case 0x200u:
                  PsUpdateComponentPower(*(_QWORD *)v46[1], 13LL);
                  v48 = 36LL;
                  goto LABEL_60;
                case 1u:
                  PsUpdateComponentPower(*(_QWORD *)v46[1], 13LL);
                  v48 = 34LL;
                  goto LABEL_60;
                case 2u:
                  PsUpdateComponentPower(*(_QWORD *)v46[1], 14LL);
                  v48 = 40LL;
                  goto LABEL_60;
                case 4u:
                  v48 = 46LL;
                  goto LABEL_60;
                case 8u:
                  v48 = 50LL;
                  goto LABEL_60;
                case 0x10u:
                  v48 = 44LL;
                  goto LABEL_60;
                case 0x80u:
                  v48 = 56LL;
                  goto LABEL_60;
                case 0x100u:
                  v48 = 58LL;
LABEL_60:
                  CitpStatIncrement((unsigned __int16 *)((char *)v47 + v48), 1u);
                  *((_WORD *)v46 + 48) |= v3;
                  break;
              }
            }
          }
        }
      }
      else
      {
        v34 = -1;
        if ( v56 - *(_DWORD *)(v33 + 100) > 0x3E8 )
        {
          *(_DWORD *)(v33 + 100) = v56;
          *(_WORD *)(v33 + 106) = 0;
          v35 = *(_WORD *)(v14 + 140);
          v36 = v35 + 1;
          if ( (unsigned __int16)(v35 + 1) < v35 )
            v36 = -1;
          *(_WORD *)(v14 + 140) = v36;
          PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 9LL);
        }
        if ( ((unsigned __int16)v3 & *(_WORD *)(v33 + 106)) == 0 )
        {
          if ( v3 > 0x200 )
          {
            switch ( v3 )
            {
              case 0x800u:
                PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 14LL);
                v49 = 150LL;
                break;
              case 0x400u:
                PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 13LL);
                v49 = 146LL;
                break;
              case 0x1000u:
                v49 = 156LL;
                break;
              case 0x2000u:
                v49 = 160LL;
                break;
              case 0x4000u:
                v49 = 168LL;
                break;
              case 0x8000u:
                v49 = 162LL;
                break;
              default:
                return;
            }
          }
          else
          {
            switch ( v3 )
            {
              case 0x200u:
                PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 13LL);
                v49 = 144LL;
                break;
              case 1u:
                PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 13LL);
                v49 = 142LL;
                break;
              case 2u:
                PsUpdateComponentPower(**(_QWORD **)(v14 + 120), 14LL);
                v49 = 148LL;
                break;
              case 4u:
                v49 = 154LL;
                break;
              case 8u:
                v49 = 158LL;
                break;
              case 0x10u:
                v49 = 152LL;
                break;
              case 0x80u:
                v49 = 164LL;
                break;
              case 0x100u:
                v49 = 166LL;
                break;
              default:
                return;
            }
          }
          v50 = *(_WORD *)(v49 + v14);
          if ( (unsigned __int16)(v50 + 1) >= v50 )
            v34 = v50 + 1;
          *(_WORD *)(v49 + v14) = v34;
          *(_WORD *)(v33 + 106) |= v3;
        }
      }
    }
  }
}
