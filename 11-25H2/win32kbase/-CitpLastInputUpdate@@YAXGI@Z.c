/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x14007DB28
 * Callers:
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D854 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitLastInputUpdate @ 0x14007DA30 (CitLastInputUpdate.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x14007D830 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E7D34 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // r14d
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r15
  unsigned int v25; // eax
  unsigned int v26; // r14d
  int v27; // eax
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rsi
  __int16 v30; // di
  unsigned __int16 v31; // ax
  __int16 v32; // cx
  unsigned __int64 v33; // rsi
  int v34; // r8d
  unsigned __int64 v35; // rsi
  int v36; // r8d
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rcx
  struct tagPROCESSINFO *v41; // rcx
  struct tagPROCESSINFO **v42; // rax
  struct tagPROCESSINFO **v43; // rsi
  struct _CIT_INTERACTION_SUMMARY *v44; // r14
  __int64 v45; // rcx
  unsigned __int16 v46; // ax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // eax
  unsigned int v55; // [rsp+58h] [rbp+10h] BYREF

  v55 = a2;
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 32 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    a2 = (unsigned int)(a2 - MEMORY[0xFFFFF780000002E4]);
    if ( (unsigned int)a2 > 0x3E8 )
      RtlSetSystemGlobalData(13LL, &v55, 4LL);
  }
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( *(_QWORD *)(v5 + 32) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    v7 = v55;
    v8 = 40LL;
    v9 = *(_QWORD *)(UserSessionState + 18912);
    if ( v55 < *(_DWORD *)(v9 + 40) )
    {
      v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v55 = v7;
    }
    *(_DWORD *)(v9 + 40) = v7;
    v10 = W32GetUserSessionState(v7, v9);
    v11 = v55;
    v12 = *(_QWORD *)(v10 + 18912);
    v13 = *(_QWORD *)(v12 + 32);
    v17 = W32GetUserSessionState(v12, v14);
    if ( !*(_DWORD *)(v17 + 18920) )
    {
      v16 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18912);
      v15 = *(unsigned int *)(v16 + 8);
      *(_DWORD *)(v17 + 18920) = v15;
    }
    v18 = *(_DWORD *)(v13 + 236);
    v19 = v11 - v18;
    if ( v11 != v18 )
    {
      LODWORD(v33) = v11;
      if ( v11 >= v18 )
        goto LABEL_136;
      v16 = 0xFFFFF78000000004uLL;
      v49 = *(_DWORD *)(v13 + 236);
      v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v19 = v33 - v49;
      if ( (unsigned int)v33 >= v49 )
        goto LABEL_136;
      v50 = W32GetUserSessionState(0xFFFFF78000000004uLL, v15);
      v16 = 0xFFFFFFFFLL;
      v15 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(*(_QWORD *)(v50 + 18912) + 64LL);
      v51 = -1;
      if ( v15 <= 0xFFFFFFFF )
        v51 = v15;
      if ( v19 <= v51 && v19 <= 0x240C8400 )
      {
LABEL_136:
        if ( *(_DWORD *)(v13 + 228) )
        {
          *(_DWORD *)(v13 + 244) += v19;
        }
        else
        {
          v34 = *(_DWORD *)(v13 + 232);
          v15 = (unsigned int)(*(_DWORD *)(v13 + 236) - v34);
          v16 = *(unsigned int *)(v17 + 18920);
          if ( (unsigned int)v15 < (unsigned int)v16 )
          {
            if ( (int)v33 - v34 > (unsigned int)v16 )
            {
              v47 = *(_DWORD *)(v13 + 248);
              v16 = (unsigned int)(v16 - v15);
              if ( v47 < 0 )
                *(_DWORD *)(v13 + 248) = v47 & 0x7FFFFFFF;
            }
            else
            {
              v16 = v19;
            }
            *(_DWORD *)(v13 + 244) += v16;
          }
        }
        *(_DWORD *)(v13 + 236) = v33;
      }
      else
      {
        ++*(_DWORD *)(v13 + 240);
        *(_DWORD *)(v13 + 236) = v33;
        *(_DWORD *)(v13 + 232) = v33 - *(_DWORD *)(v17 + 18920);
        CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v13 + 244), 0);
      }
    }
    v20 = *(_DWORD *)(v13 + 248);
    if ( v20 >= 0 )
      *(_DWORD *)(v13 + 248) = (v20 + 1) | 0x80000000;
    *(_DWORD *)(v13 + 232) = v11;
    if ( !v3 )
    {
      v21 = v55;
      v24 = W32GetUserSessionState(v16, v15);
      if ( !*(_DWORD *)(v24 + 18920) )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 18912) + 8LL);
        *(_DWORD *)(v24 + 18920) = v22;
      }
      v25 = *(_DWORD *)(v13 + 212);
      v26 = v21 - v25;
      if ( v21 != v25 )
      {
        LODWORD(v35) = v21;
        if ( v21 >= v25 )
          goto LABEL_137;
        v52 = *(_DWORD *)(v13 + 212);
        v35 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v26 = v35 - v52;
        if ( (unsigned int)v35 >= v52 )
          goto LABEL_137;
        v53 = *(_QWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v22) + 18912);
        v54 = -1;
        if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - *(_QWORD *)(v53 + 64)) <= 0xFFFFFFFF )
          v54 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_DWORD *)(v53 + 64);
        if ( v26 <= v54 && v26 <= 0x240C8400 )
        {
LABEL_137:
          if ( *(_DWORD *)(v13 + 204) )
          {
            *(_DWORD *)(v13 + 220) += v26;
          }
          else
          {
            v36 = *(_DWORD *)(v13 + 208);
            v37 = *(_DWORD *)(v13 + 212) - v36;
            v38 = *(_DWORD *)(v24 + 18920);
            if ( v37 < v38 )
            {
              if ( (int)v35 - v36 > v38 )
              {
                v48 = *(_DWORD *)(v13 + 224);
                v39 = v38 - v37;
                if ( v48 < 0 )
                  *(_DWORD *)(v13 + 224) = v48 & 0x7FFFFFFF;
              }
              else
              {
                v39 = v26;
              }
              *(_DWORD *)(v13 + 220) += v39;
            }
          }
          *(_DWORD *)(v13 + 212) = v35;
        }
        else
        {
          ++*(_DWORD *)(v13 + 216);
          *(_DWORD *)(v13 + 212) = v35;
          *(_DWORD *)(v13 + 208) = v35 - *(_DWORD *)(v24 + 18920);
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVITY_STAT *)(v13 + 220), 0);
        }
      }
      v27 = *(_DWORD *)(v13 + 224);
      if ( v27 >= 0 )
        *(_DWORD *)(v13 + 224) = (v27 + 1) | 0x80000000;
      *(_DWORD *)(v13 + 208) = v21;
    }
    v28 = *(unsigned __int64 **)(v13 + 120);
    if ( v28 )
    {
      v29 = v28[114];
      if ( v29 - 1 > 0xCEEE && v29 < 0xCEF2
        || (v40 = *(_QWORD *)(v29 + 24), v40 - 1 > 0xCEEE) && v40 < 0xCEF2
        || (v41 = *(struct tagPROCESSINFO **)(v40 + 8)) == 0LL
        || v41 == (struct tagPROCESSINFO *)v28 )
      {
        v30 = -1;
        if ( v55 - *(_DWORD *)(v29 + 100) > 0x3E8 )
        {
          *(_DWORD *)(v29 + 100) = v55;
          *(_WORD *)(v29 + 106) = 0;
          v31 = *(_WORD *)(v13 + 140);
          v32 = v31 + 1;
          if ( (unsigned __int16)(v31 + 1) < v31 )
            v32 = -1;
          *(_WORD *)(v13 + 140) = v32;
          PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 9LL);
        }
        if ( ((unsigned __int16)v2 & *(_WORD *)(v29 + 106)) == 0 )
        {
          if ( v2 > 0x200 )
          {
            switch ( v2 )
            {
              case 0x800u:
                PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 14LL);
                v45 = 150LL;
                break;
              case 0x1000u:
                v45 = 156LL;
                break;
              case 0x400u:
                PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 13LL);
                v45 = 146LL;
                break;
              case 0x2000u:
                v45 = 160LL;
                break;
              case 0x4000u:
                v45 = 168LL;
                break;
              case 0x8000u:
                v45 = 162LL;
                break;
              default:
                return;
            }
          }
          else
          {
            switch ( v2 )
            {
              case 0x200u:
                PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 13LL);
                v45 = 144LL;
                break;
              case 1u:
                PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 13LL);
                v45 = 142LL;
                break;
              case 2u:
                PsUpdateComponentPower(**(_QWORD **)(v13 + 120), 14LL);
                v45 = 148LL;
                break;
              case 4u:
                v45 = 154LL;
                break;
              case 8u:
                v45 = 158LL;
                break;
              case 0x10u:
                v45 = 152LL;
                break;
              case 0x80u:
                v45 = 164LL;
                break;
              case 0x100u:
                v45 = 166LL;
                break;
              default:
                return;
            }
          }
          v46 = *(_WORD *)(v45 + v13);
          if ( (unsigned __int16)(v46 + 1) >= v46 )
            v30 = v46 + 1;
          *(_WORD *)(v45 + v13) = v30;
          *(_WORD *)(v29 + 106) |= v2;
        }
      }
      else
      {
        v42 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v41);
        v43 = v42;
        if ( v42 )
        {
          v44 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v13, v42, 1);
          if ( v55 - *((_DWORD *)v43 + 23) > 0x3E8 )
          {
            *((_DWORD *)v43 + 23) = v55;
            *((_WORD *)v43 + 48) = 0;
            if ( v44 )
              CitpStatIncrement((unsigned __int16 *)v44 + 16, 1);
            PsUpdateComponentPower(*(_QWORD *)v43[1], 9LL);
          }
          if ( v44 && ((unsigned __int16)v2 & (_WORD)v43[12]) == 0 )
          {
            if ( v2 > 0x200 )
            {
              switch ( v2 )
              {
                case 0x400u:
                  PsUpdateComponentPower(*(_QWORD *)v43[1], 13LL);
                  v8 = 38LL;
                  goto LABEL_60;
                case 0x800u:
                  PsUpdateComponentPower(*(_QWORD *)v43[1], 14LL);
                  v8 = 42LL;
                  goto LABEL_60;
                case 0x1000u:
                  v8 = 48LL;
                  goto LABEL_60;
                case 0x2000u:
                  v8 = 52LL;
                  goto LABEL_60;
                case 0x4000u:
                  v8 = 60LL;
                  goto LABEL_60;
                case 0x8000u:
                  v8 = 54LL;
                  goto LABEL_60;
              }
            }
            else
            {
              switch ( v2 )
              {
                case 0x200u:
                  PsUpdateComponentPower(*(_QWORD *)v43[1], 13LL);
                  v8 = 36LL;
                  goto LABEL_60;
                case 1u:
                  PsUpdateComponentPower(*(_QWORD *)v43[1], 13LL);
                  v8 = 34LL;
                  goto LABEL_60;
                case 2u:
                  PsUpdateComponentPower(*(_QWORD *)v43[1], 14LL);
                  goto LABEL_60;
                case 4u:
                  v8 = 46LL;
                  goto LABEL_60;
                case 8u:
                  v8 = 50LL;
                  goto LABEL_60;
                case 0x10u:
                  v8 = 44LL;
                  goto LABEL_60;
                case 0x80u:
                  v8 = 56LL;
                  goto LABEL_60;
                case 0x100u:
                  v8 = 58LL;
LABEL_60:
                  CitpStatIncrement((unsigned __int16 *)((char *)v44 + v8), 1);
                  *((_WORD *)v43 + 48) |= v2;
                  break;
              }
            }
          }
        }
      }
    }
  }
}
