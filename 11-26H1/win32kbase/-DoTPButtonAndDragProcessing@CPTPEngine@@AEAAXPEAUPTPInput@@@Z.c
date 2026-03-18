/*
 * XREFs of ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x14010568C (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140105A98 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x14010637C (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x14010D4A0 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x140135B6C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x140188C34 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140227270 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::DoTPButtonAndDragProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // ebp
  int v3; // r12d
  int v5; // r15d
  int v6; // r13d
  int v8; // ecx
  BOOL v9; // edx
  __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  _DWORD *v14; // rsi
  struct CContactState *v15; // rdx
  int v16; // eax
  int v17; // r9d
  int v18; // esi
  bool v19; // zf
  unsigned int v20; // eax
  char *v21; // rbp
  _DWORD *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  char *v25; // r11
  unsigned int v26; // r14d
  char *v27; // r10
  unsigned __int64 v28; // r8
  unsigned __int8 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r9d
  int v34; // eax
  unsigned int v35; // r9d
  __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // edx
  int v41; // ebp
  struct CContactState *v42; // r14
  int v43; // r8d
  unsigned int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // r9
  int v47; // eax
  struct CContactState *v49[2]; // [rsp+20h] [rbp-58h]
  char v50; // [rsp+80h] [rbp+8h]
  __int64 v51; // [rsp+90h] [rbp+18h]
  struct tagPOINT *v52; // [rsp+98h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 705);
  v3 = 0;
  v52 = 0LL;
  v5 = 0;
  v6 = v2 & 0x10;
  v8 = *((_DWORD *)this + 768);
  v9 = v6 != 0;
  v10 = *(_QWORD *)a2;
  v11 = v2 & 0xFFFFFFEF;
  v51 = *(_QWORD *)a2;
  if ( (v8 & 1) != v9 )
  {
    v3 = 1;
    v12 = v9 | v8 & 0xFFFFFFFE;
    *((_DWORD *)this + 768) = v12;
    if ( v6 )
    {
      *((_QWORD *)this + 362) = v10;
    }
    else
    {
      *((_QWORD *)this + 361) = *(_QWORD *)a2;
      if ( (*((_DWORD *)this + 821) & 8) != 0 )
        *((_DWORD *)this + 768) = v12 | 0x300000;
    }
    CPTPEngine::ResetDragThresholds(this, a2);
    v13 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v14 = (_DWORD *)((char *)a2 + 68);
      do
      {
        v15 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v14 - 2) % *((_DWORD *)this + 4)) + 816);
        if ( (*(_DWORD *)v15 & 1) != 0 && (*v14 & 0x40000) == 0 )
          CPTPEngine::SetContactRestingState(this, v15, 1);
        ++v13;
        v14 += 24;
      }
      while ( v13 < *((_DWORD *)a2 + 12) );
    }
  }
  v16 = *((_DWORD *)a2 + 9);
  if ( v16 && v3 && v6 && !v11 )
  {
    *((_DWORD *)this + 768) |= 0x4000u;
    return;
  }
  v17 = *((_DWORD *)this + 768);
  if ( (v17 & 0x4000) != 0 )
  {
    if ( v6 )
    {
      if ( v16 )
      {
        if ( !v11
          && *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                     * (unsigned __int64)*((unsigned int *)this + 774)
                                                     / 0x3E8 )
        {
          return;
        }
        v5 = 1;
        v3 = 1;
      }
      else
      {
        v3 = 1;
      }
      *((_DWORD *)this + 768) = v17 & 0xFFFFBFFF;
    }
    else
    {
      *((_DWORD *)this + 768) = v17 & 0xFFFFBFFF;
      if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0) && (*((_DWORD *)this + 768) & 8) == 0 )
      {
        CBasePTPEngine::SendLastActionTelemetry(this, 25LL);
        CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
      }
    }
  }
  v18 = 0;
  v19 = (*((_DWORD *)this + 768) & 0x1000) == 0;
  *(_OWORD *)v49 = 0LL;
  if ( v19 )
  {
    if ( !v3 || !v6 )
      goto LABEL_63;
  }
  else
  {
    v50 = 1;
    if ( *((_DWORD *)this + 704) == 2 )
      goto LABEL_34;
  }
  v50 = 0;
LABEL_34:
  v20 = *((_DWORD *)a2 + 12);
  v21 = 0LL;
  if ( v20 )
  {
    v22 = (_DWORD *)((char *)a2 + 68);
    v23 = v20;
    do
    {
      v24 = 328LL * (unsigned int)(*(v22 - 2) % *((_DWORD *)this + 4));
      if ( (*(_DWORD *)((_BYTE *)this + v24 + 816) & 1) != 0
        && (*v22 & 0x40000) == 0
        && (!v21 || *(_QWORD *)((char *)this + v24 + 880) > *((_QWORD *)v21 + 8)) )
      {
        v21 = (char *)this + v24 + 816;
      }
      v22 += 24;
      --v23;
    }
    while ( v23 );
    v25 = (char *)a2 + 68;
    v26 = 0;
    while ( 1 )
    {
      v27 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v25 - 2) % *((_DWORD *)this + 4)) + 816;
      if ( (*(_DWORD *)v27 & 1) != 0 && (*(_DWORD *)v25 & 0x40000) == 0 )
        break;
LABEL_62:
      ++v26;
      v25 += 96;
      if ( v26 >= *((_DWORD *)a2 + 12) )
        goto LABEL_63;
    }
    v28 = *((_QWORD *)v27 + 8);
    v29 = 0;
    if ( v50 )
    {
      if ( v28 > *((_QWORD *)this + 362) )
      {
        *((_DWORD *)this + 768) &= ~0x1000u;
        goto LABEL_58;
      }
      if ( (*((_DWORD *)v27 + 1) & 4) != 0 )
      {
        if ( (int)((*((_QWORD *)v27 + 2) - *(_QWORD *)(v25 + 28)) * (*((_QWORD *)v27 + 2) - *(_QWORD *)(v25 + 28))
                 + (HIDWORD(*((_QWORD *)v27 + 2)) - HIDWORD(*(_QWORD *)(v25 + 28)))
                 * (HIDWORD(*((_QWORD *)v27 + 2)) - HIDWORD(*(_QWORD *)(v25 + 28)))) > (unsigned __int64)(unsigned int)(*((_DWORD *)this + 775) * *((_DWORD *)this + 775)) )
        {
          *((_DWORD *)this + 768) &= ~0x1000u;
          v3 = 1;
          v5 = 1;
          goto LABEL_58;
        }
        goto LABEL_56;
      }
LABEL_58:
      *((_DWORD *)v27 + 1) = *((_DWORD *)v27 + 1) & 0xFFFFFFFB | (4 * v29);
      if ( v29 )
      {
        ++v18;
        v32 = 2LL;
        if ( (unsigned __int64)v18 < 2 )
          v32 = v18;
        v49[v32 - 1] = (struct CContactState *)v27;
      }
      goto LABEL_62;
    }
    v30 = *(_QWORD *)a2 - v28;
    if ( v21 )
    {
      v31 = *((_QWORD *)v21 + 8);
      if ( *((_QWORD *)v21 + 12) > v31 )
      {
LABEL_57:
        v29 = 0;
        goto LABEL_58;
      }
      v30 = v31 - v28;
    }
    if ( v30 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 774) / 0x3E8
      && *((_QWORD *)v27 + 12) <= v28 )
    {
LABEL_56:
      v29 = 1;
      goto LABEL_58;
    }
    goto LABEL_57;
  }
LABEL_63:
  v33 = *((_DWORD *)this + 768);
  if ( (v33 & 0x1000) == 0 )
    goto LABEL_75;
  v34 = *((_DWORD *)this + 704);
  if ( v6 )
  {
    if ( v34 != 2
      || *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 774)
                                                 / 0x3E8 )
    {
      return;
    }
    v5 = 1;
    *((_DWORD *)this + 768) = v33 & 0xFFFFEFFF;
LABEL_89:
    v41 = *((_DWORD *)a2 + 9);
    v42 = v49[0];
    if ( v41 || v18 > 1 || !(unsigned int)CPTPEngine::IsRCZClick(this, a2, v49[0], &v52) )
    {
      if ( v18 < 2 )
        goto LABEL_111;
      if ( !v5 )
      {
        v43 = *((_DWORD *)this + 768);
        *((_DWORD *)this + 704) = v18;
        v44 = v43 & 0xFFFFCFFF | 0x1000;
        *((_DWORD *)this + 768) = v44;
        switch ( v18 )
        {
          case 2:
            *((_DWORD *)this + 768) = v44 | (*((unsigned int *)this + 802) >= (unsigned __int64)(int)((*((_QWORD *)v42 + 2) - *((_QWORD *)v49[1] + 2)) * (*((_QWORD *)v42 + 2) - *((_QWORD *)v49[1] + 2)) + (HIDWORD(*((_QWORD *)v42 + 2)) - HIDWORD(*((_QWORD *)v49[1] + 2))) * (HIDWORD(*((_QWORD *)v42 + 2)) - HIDWORD(*((_QWORD *)v49[1] + 2))))
                                           ? 0x2000
                                           : 0);
            goto LABEL_118;
          case 3:
            v45 = 3LL;
            break;
          case 4:
            v45 = 4LL;
            break;
          case 5:
            v45 = 5LL;
            break;
          default:
            goto LABEL_118;
        }
        CBasePTPEngine::SendShellOutput(this, v45);
LABEL_118:
        if ( *((_DWORD *)this + 706) == 2 && !v6 )
          *((_DWORD *)this + 768) |= 0x80000u;
        return;
      }
      if ( v18 <= 2 )
      {
LABEL_111:
        v46 = 18LL;
        if ( v41 )
        {
          v46 = 25LL;
        }
        else if ( v5 )
        {
          v46 = 19LL;
          if ( v18 == 2 )
            v46 = 21LL;
        }
        CPTPEngine::SendLeftDownFromPhysical(this, a2, v52, v46);
      }
    }
    else
    {
      CPTPEngine::SendRightDownFromPhysical(this, a2, v52, v5 != 0 ? 22 : 16);
    }
    goto LABEL_117;
  }
  v35 = v33 & 0xFFFFEFFF;
  *((_DWORD *)this + 768) = v35;
  if ( v34 != 2 )
  {
    switch ( v34 )
    {
      case 3:
        CBasePTPEngine::SendShellOutput(this, 6LL);
        v38 = 23LL;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 7LL);
        v38 = 24LL;
        break;
      case 5:
        CBasePTPEngine::SendShellOutput(this, 8LL);
        v38 = 26LL;
        break;
      default:
        goto LABEL_75;
    }
    CBasePTPEngine::SendLastActionTelemetry(this, v38);
LABEL_75:
    v36 = v51;
    goto LABEL_76;
  }
  v36 = v51;
  if ( (v35 & 0x2000) != 0 )
  {
    if ( (v35 & 0x10) != 0 )
      goto LABEL_76;
    *((_QWORD *)this + 380) = v51;
    CPTPEngine::SendTimedMouseClick(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    v37 = 17LL;
  }
  else
  {
    if ( (v35 & 8) != 0 )
      goto LABEL_76;
    *((_QWORD *)this + 380) = v51;
    CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    v37 = 20LL;
  }
  CBasePTPEngine::SendLastActionTelemetry(this, v37);
LABEL_76:
  if ( !v3 )
    goto LABEL_121;
  if ( v6 )
    goto LABEL_89;
  v39 = *((_DWORD *)this + 768);
  if ( (v39 & 0x10) != 0 && (v39 & 0x100) != 0 && (v39 & 0x40) == 0 )
  {
    v40 = 16;
  }
  else
  {
    if ( (v39 & 8) == 0 || (v39 & 0x80u) == 0 || (v39 & 0x20) != 0 )
      goto LABEL_98;
    v40 = 4;
  }
  *((_QWORD *)this + 380) = v36;
  CPTPEngine::SendMouseUpAtPoint(this, v40, *(struct tagPOINT *)((char *)a2 + 28));
LABEL_98:
  *((_DWORD *)this + 768) &= 0xFFFFFE7F;
LABEL_117:
  if ( !v5 )
    goto LABEL_118;
LABEL_121:
  if ( *((_DWORD *)this + 698) <= 2u )
  {
    v47 = *((_DWORD *)this + 768);
    if ( ((v47 & 8) != 0 || (v47 & 0x10) != 0)
      && !*((_DWORD *)a2 + 9)
      && (*((_DWORD *)this + 705) || *((_DWORD *)this + 697)) )
    {
      CPTPEngine::HandleDrag(this, a2);
    }
  }
}
