/*
 * XREFs of ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x1400C8F14 (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400C8F58 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400C911C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400C93B0 (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400C9534 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1400DCCF0 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EED58 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400EF604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140193994 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x14019C05C (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x14022544C (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::DoTPButtonAndDragProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // ebp
  int v3; // r13d
  int v5; // r15d
  int v6; // r12d
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
  int v18; // ebp
  int v19; // esi
  bool v20; // zf
  char *v21; // rbp
  unsigned int v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned int v26; // r8d
  char *v27; // r12
  char *v28; // r14
  unsigned __int64 v29; // r13
  unsigned __int8 v30; // r9
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rbp
  bool v33; // al
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // r9d
  int v37; // eax
  unsigned int v38; // r9d
  __int64 v39; // r14
  int v40; // edx
  int v41; // edx
  int v42; // eax
  int v43; // edx
  int v44; // ebp
  struct CContactState *v45; // r14
  int v46; // eax
  struct tagPOINT v47; // r8
  int v48; // r9d
  unsigned int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rdx
  unsigned int v53; // r9d
  int v54; // eax
  __int64 v55; // [rsp+20h] [rbp-88h]
  struct tagPOINT *v56; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+30h] [rbp-78h]
  char *v58; // [rsp+38h] [rbp-70h]
  unsigned __int64 v59; // [rsp+40h] [rbp-68h]
  struct CContactState *v60[2]; // [rsp+48h] [rbp-60h]
  char v61; // [rsp+B0h] [rbp+8h] BYREF
  int v62; // [rsp+B8h] [rbp+10h]
  unsigned int v63; // [rsp+C0h] [rbp+18h]
  int v64; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)this + 705);
  v3 = 0;
  v62 = 0;
  v5 = 0;
  v6 = v2 & 0x10;
  v64 = v6;
  v8 = *((_DWORD *)this + 770);
  v9 = v6 != 0;
  v56 = 0LL;
  v10 = *(_QWORD *)a2;
  v11 = v2 & 0xFFFFFFEF;
  v55 = *(_QWORD *)a2;
  if ( (v8 & 1) != v9 )
  {
    v3 = 1;
    v12 = v9 | v8 & 0xFFFFFFFE;
    v62 = 1;
    *((_DWORD *)this + 770) = v12;
    if ( v6 )
    {
      *((_QWORD *)this + 362) = v10;
    }
    else
    {
      *((_QWORD *)this + 361) = *(_QWORD *)a2;
      if ( (*((_DWORD *)this + 824) & 8) != 0 )
        *((_DWORD *)this + 770) = v12 | 0x300000;
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
    *((_DWORD *)this + 770) |= 0x4000u;
    return;
  }
  v17 = *((_DWORD *)this + 770);
  if ( (v17 & 0x4000) == 0 )
    goto LABEL_22;
  if ( !v6 )
  {
    *((_DWORD *)this + 770) = v17 & 0xFFFFBFFF;
    if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0) && (*((_DWORD *)this + 770) & 8) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 25);
      CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    }
LABEL_22:
    v18 = v62;
    goto LABEL_23;
  }
  if ( v16 )
  {
    if ( !v11
      && *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 776)
                                                 / 0x3E8 )
    {
      return;
    }
    v18 = 1;
    v5 = 1;
  }
  else
  {
    v18 = 1;
  }
  v62 = 1;
  *((_DWORD *)this + 770) = v17 & 0xFFFFBFFF;
LABEL_23:
  v19 = 0;
  v20 = (*((_DWORD *)this + 770) & 0x1000) == 0;
  *(_OWORD *)v60 = 0LL;
  if ( v20 )
  {
    if ( !v18 || !v6 )
      goto LABEL_73;
  }
  else
  {
    v20 = *((_DWORD *)this + 704) == 2;
    v61 = 1;
    if ( v20 )
      goto LABEL_35;
  }
  v61 = 0;
LABEL_35:
  v21 = 0LL;
  v58 = 0LL;
  if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline() )
  {
    v22 = *((_DWORD *)a2 + 12);
    if ( v22 )
    {
      v23 = (_DWORD *)((char *)a2 + 68);
      v24 = v22;
      do
      {
        v25 = 328LL * (unsigned int)(*(v23 - 2) % *((_DWORD *)this + 4));
        if ( (*(_DWORD *)((_BYTE *)this + v25 + 816) & 1) != 0
          && (*v23 & 0x40000) == 0
          && (!v21 || *(_QWORD *)((char *)this + v25 + 880) > *((_QWORD *)v21 + 8)) )
        {
          v21 = (char *)this + v25 + 816;
        }
        v23 += 24;
        --v24;
      }
      while ( v24 );
      v58 = v21;
    }
  }
  v26 = 0;
  v63 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v27 = (char *)a2 + 68;
    while ( 1 )
    {
      v28 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v27 - 2) % *((_DWORD *)this + 4)) + 816;
      if ( (*(_DWORD *)v28 & 1) != 0 && (*(_DWORD *)v27 & 0x40000) == 0 )
        break;
LABEL_70:
      ++v26;
      v27 += 96;
      v63 = v26;
      if ( v26 >= *((_DWORD *)a2 + 12) )
      {
        v6 = v64;
        goto LABEL_72;
      }
    }
    v29 = *((_QWORD *)v28 + 8);
    v30 = 0;
    if ( v61 )
    {
      if ( v29 <= *((_QWORD *)this + 362) )
      {
        if ( (*((_DWORD *)v28 + 1) & 8) != 0 )
        {
          v26 = v63;
          if ( (int)((HIDWORD(*((_QWORD *)v28 + 2)) - HIDWORD(*(_QWORD *)(v27 + 28)))
                   * (HIDWORD(*((_QWORD *)v28 + 2)) - HIDWORD(*(_QWORD *)(v27 + 28)))
                   + (*((_QWORD *)v28 + 2) - *(_QWORD *)(v27 + 28)) * (*((_QWORD *)v28 + 2) - *(_QWORD *)(v27 + 28))) <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 777) * *((_DWORD *)this + 777)) )
          {
            v30 = 1;
          }
          else
          {
            *((_DWORD *)this + 770) &= ~0x1000u;
            v5 = 1;
            v62 = 1;
          }
        }
      }
      else
      {
        *((_DWORD *)this + 770) &= ~0x1000u;
      }
      goto LABEL_66;
    }
    v31 = *((_QWORD *)this + 12) * *((unsigned int *)this + 776);
    v59 = *((_QWORD *)v28 + 12);
    v32 = v31 / 0x3E8;
    v57 = *(_QWORD *)a2 - v29;
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v33 = v57 < v32;
      if ( v58 )
      {
        v34 = *((_QWORD *)v58 + 8);
        if ( *((_QWORD *)v58 + 12) > v34
          || v34 - *((_QWORD *)v28 + 8) >= *((_QWORD *)this + 12)
                                         * (unsigned __int64)*((unsigned int *)this + 776)
                                         / 0x3E8 )
        {
          goto LABEL_64;
        }
LABEL_59:
        if ( v59 <= v29 )
        {
          v30 = 1;
LABEL_65:
          v26 = v63;
LABEL_66:
          *((_DWORD *)v28 + 1) = *((_DWORD *)v28 + 1) & 0xFFFFFFF7 | (8 * v30);
          if ( v30 )
          {
            ++v19;
            v35 = 2LL;
            if ( (unsigned __int64)v19 < 2 )
              v35 = v19;
            v60[v35 - 1] = (struct CContactState *)v28;
          }
          goto LABEL_70;
        }
LABEL_64:
        v30 = 0;
        goto LABEL_65;
      }
    }
    else
    {
      v33 = v57 < v32;
    }
    if ( !v33 )
      goto LABEL_64;
    goto LABEL_59;
  }
LABEL_72:
  v18 = v62;
LABEL_73:
  v36 = *((_DWORD *)this + 770);
  if ( (v36 & 0x1000) == 0 )
    goto LABEL_85;
  v37 = *((_DWORD *)this + 704);
  if ( v6 )
  {
    if ( v37 != 2
      || *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 776)
                                                 / 0x3E8 )
    {
      return;
    }
    v5 = 1;
    *((_DWORD *)this + 770) = v36 & 0xFFFFEFFF;
LABEL_99:
    v44 = *((_DWORD *)a2 + 9);
    v45 = v60[0];
    if ( v44 || v19 > 1 || !(unsigned int)CPTPEngine::IsRCZClick(this, a2, v60[0], &v56) )
    {
      if ( v19 < 2 )
        goto LABEL_126;
      if ( !v5 )
      {
        v48 = *((_DWORD *)this + 770);
        *((_DWORD *)this + 704) = v19;
        v49 = v48 & 0xFFFFCFFF | 0x1000;
        *((_DWORD *)this + 770) = v49;
        switch ( v19 )
        {
          case 2:
            v50 = *((_QWORD *)v45 + 2) - *((_QWORD *)v60[1] + 2);
            v51 = HIDWORD(*((_QWORD *)v45 + 2)) - HIDWORD(*((_QWORD *)v60[1] + 2));
            *((_DWORD *)this + 770) = v49 | (*((unsigned int *)this + 805) >= (unsigned __int64)(v51 * v51 + v50 * v50)
                                           ? 0x2000
                                           : 0);
            goto LABEL_133;
          case 3:
            v52 = 3LL;
            break;
          case 4:
            v52 = 4LL;
            break;
          case 5:
            v52 = 5LL;
            break;
          default:
            goto LABEL_133;
        }
        CBasePTPEngine::SendShellOutput(this, v52);
LABEL_133:
        if ( *((_DWORD *)this + 706) == 2 && !v6 )
          *((_DWORD *)this + 770) |= 0x80000u;
        return;
      }
      if ( v19 <= 2 )
      {
LABEL_126:
        v53 = 18;
        if ( v44 )
        {
          v53 = 25;
        }
        else if ( v5 )
        {
          v53 = 19;
          if ( v19 == 2 )
            v53 = 21;
        }
        CPTPEngine::SendLeftDownFromPhysical(this, (__int64)a2, (__int64 *)v56, v53);
      }
    }
    else
    {
      v46 = *((_DWORD *)this + 770) | 0x100;
      *((_DWORD *)this + 770) = v46;
      if ( (v46 & 0x10) == 0 )
      {
        CBasePTPEngine::SendLastActionTelemetry((__int64)this, v5 != 0 ? 22 : 16);
        if ( v56 )
          CBasePTPEngine::SendPositionTelemetry((__int64)this, 1, (__int64)*v56);
        v47 = *(struct tagPOINT *)((char *)a2 + 28);
        if ( (*((_DWORD *)this + 824) & 0x200) != 0 )
          v47 = **(struct tagPOINT **)&CPTPEngine::DoTPButtonWarpBack(this, (struct PTPInput *)&v61);
        CPTPEngine::SendMouseDownAtPoint(this, 8, v47, 0);
      }
    }
    goto LABEL_132;
  }
  v38 = v36 & 0xFFFFEFFF;
  *((_DWORD *)this + 770) = v38;
  if ( v37 != 2 )
  {
    switch ( v37 )
    {
      case 3:
        CBasePTPEngine::SendShellOutput(this, 6LL);
        v41 = 23;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 7LL);
        v41 = 24;
        break;
      case 5:
        CBasePTPEngine::SendShellOutput(this, 8LL);
        v41 = 26;
        break;
      default:
        goto LABEL_85;
    }
    CBasePTPEngine::SendLastActionTelemetry((__int64)this, v41);
LABEL_85:
    v39 = v55;
    goto LABEL_86;
  }
  v39 = v55;
  if ( (v38 & 0x2000) != 0 )
  {
    if ( (v38 & 0x10) != 0 )
      goto LABEL_86;
    *((_QWORD *)this + 381) = v55;
    CPTPEngine::SendTimedMouseClick(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    v40 = 17;
  }
  else
  {
    if ( (v38 & 8) != 0 )
      goto LABEL_86;
    *((_QWORD *)this + 381) = v55;
    CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    v40 = 20;
  }
  CBasePTPEngine::SendLastActionTelemetry((__int64)this, v40);
LABEL_86:
  if ( !v18 )
    goto LABEL_136;
  if ( v6 )
    goto LABEL_99;
  v42 = *((_DWORD *)this + 770);
  if ( (v42 & 0x10) != 0 && (v42 & 0x100) != 0 && (v42 & 0x40) == 0 )
  {
    v43 = 16;
  }
  else
  {
    if ( (v42 & 8) == 0 || (v42 & 0x80u) == 0 || (v42 & 0x20) != 0 )
      goto LABEL_113;
    v43 = 4;
  }
  *((_QWORD *)this + 381) = v39;
  CPTPEngine::SendMouseUpAtPoint(this, v43, *(struct tagPOINT *)((char *)a2 + 28));
LABEL_113:
  *((_DWORD *)this + 770) &= 0xFFFFFE7F;
LABEL_132:
  if ( !v5 )
    goto LABEL_133;
LABEL_136:
  if ( *((_DWORD *)this + 698) <= 2u )
  {
    v54 = *((_DWORD *)this + 770);
    if ( ((v54 & 8) != 0 || (v54 & 0x10) != 0)
      && !*((_DWORD *)a2 + 9)
      && (*((_DWORD *)this + 705) || *((_DWORD *)this + 697)) )
    {
      CPTPEngine::HandleDrag(this, a2);
    }
  }
}
