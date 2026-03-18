/*
 * XREFs of ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400C9040 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400C9278 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400C92CC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EED58 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EEF10 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400EF604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1400F8D74 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140129474 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x14014B2E4 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x140192FF0 (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 *     Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline @ 0x140225608 (Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::ProcessInputFrame(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // r15d
  char v5; // si
  _DWORD *v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rax
  CPTPEngine *v9; // rcx
  char *v10; // rsi
  char *v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  int v14; // r13d
  CPTPEngine *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  _DWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r14
  int v21; // ecx
  unsigned int v22; // r15d
  _DWORD *v23; // rsi
  struct CContactState *v24; // rdx
  unsigned int v25; // r14d
  int v26; // ecx
  int v27; // r8d
  int v28; // esi
  int v29; // eax
  char v30; // r14
  int v31; // r15d
  __int64 v32; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  int v34; // ecx
  bool v35; // zf
  unsigned int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // ecx
  int v40; // [rsp+20h] [rbp-50h]
  unsigned int v41; // [rsp+24h] [rbp-4Ch]
  char *v42; // [rsp+28h] [rbp-48h]
  unsigned int v43; // [rsp+28h] [rbp-48h]
  _OWORD v44[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v45[2]; // [rsp+50h] [rbp-20h] BYREF
  int v46; // [rsp+B8h] [rbp+48h]
  unsigned int v47; // [rsp+C0h] [rbp+50h]
  int v48; // [rsp+C8h] [rbp+58h]

  v48 = 0;
  v2 = 0;
  v40 = 0;
  v47 = 0;
  v46 = 0;
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v5 = 1;
  }
  else
  {
    *(_QWORD *)&v45[1] = 0LL;
    memset(v44, 0, 24);
    v5 = 0;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 8, (__int64)v44);
  }
  v6 = (_DWORD *)((char *)a2 + 36);
  if ( !*((_DWORD *)a2 + 9) )
  {
    if ( !v5 || (v7 = *((_DWORD *)this + 770), (v7 & 0x2000000) != 0) && (v7 & 0x4000000) == 0 )
    {
      v6 = (_DWORD *)((char *)a2 + 36);
      if ( *((_DWORD *)a2 + 12) > (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 0LL);
        v8 = *((_QWORD *)this + 376);
        if ( v8 && *((_QWORD *)a2 + 1) > v8 && (int)CPTPEngine::GetSensitivityLevel(this) > 0 )
          CPTPEngine::TPAAPSetCurtainState(v9, 1);
        *((_QWORD *)this + 376) = *(_QWORD *)a2;
        if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) )
        {
          *(_QWORD *)&v44[0] = *((_QWORD *)a2 + 2);
          *(_OWORD *)((char *)v44 + 8) = 0LL;
          v45[0] = v44[0];
          *(_QWORD *)&v45[1] = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v44 + 8), *(__m128d *)((char *)v44 + 8));
          CBasePTPEngine::SendTelemetryOutput((__int64)this, 0, (__int64)v45);
        }
        *((_DWORD *)this + 770) |= 0x4000000u;
        v6 = (_DWORD *)((char *)a2 + 36);
      }
    }
  }
  if ( !*v6 )
  {
    *((_DWORD *)this + 698) = 0;
    v10 = (char *)a2 + 56;
    *((_DWORD *)this + 703) = 0;
    v41 = 0;
    v42 = (char *)a2 + 56;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        v43 = *((_DWORD *)v10 + 1) % *((_DWORD *)this + 4);
        v11 = (char *)this + 328 * v43 + 816;
        v12 = *(_DWORD *)v11;
        if ( (*(_DWORD *)v11 & 1) != 0 && ((v12 & 0x40000000) == 0 || (*((_DWORD *)v10 + 3) & 0x60000) == 0) )
        {
          *(_QWORD *)&v44[1] = 0LL;
          memset(v45, 0, 24);
          CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)v45);
          v12 = *(_DWORD *)v11 & 0xBFFFFFFE;
          *(_DWORD *)v11 = v12;
        }
        if ( (v12 & 0x40000000) == 0 )
        {
          v40 = 1;
          *(_DWORD *)v11 = v12 | 0x40000000;
          *((_QWORD *)v11 + 9) = *((_QWORD *)v10 + 10);
          *((_QWORD *)v11 + 4) = *((_QWORD *)v10 + 5);
        }
        v13 = 0;
        *(_OWORD *)(v11 + 232) = *(_OWORD *)v10;
        *(_OWORD *)(v11 + 248) = *((_OWORD *)v10 + 1);
        *(_OWORD *)(v11 + 264) = *((_OWORD *)v10 + 2);
        *(_OWORD *)(v11 + 280) = *((_OWORD *)v10 + 3);
        *(_OWORD *)(v11 + 296) = *((_OWORD *)v10 + 4);
        *(_OWORD *)(v11 + 312) = *((_OWORD *)v10 + 5);
        v14 = *((_DWORD *)v10 + 3);
        *((_DWORD *)v10 + 3) = v14 & 0xFFFFFF8F;
        if ( (*(_DWORD *)v11 & 1) == 0 )
        {
          v13 = ((v14 & 0xFFFFFF8F) >> 23) & 4;
          if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, *(struct tagPOINT *)(v10 + 40))
            && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(v15, a2, 0x40u, 0) )
          {
            v13 |= 2u;
          }
          if ( (*((_DWORD *)this + 824) & 2) != 0
            && !(unsigned int)PtInRect((char *)this + 3032, *((_QWORD *)v10 + 5))
            && (*(_QWORD *)a2 - *((_QWORD *)v11 + 9) >= *((_QWORD *)this + 12)
                                                      * (unsigned __int64)*((unsigned int *)this + 786)
                                                      / 0x3E8
             || *((_DWORD *)a2 + 12) == 1
             || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(this, a2, (struct CContactState *)v11)) )
          {
            v13 |= 1u;
          }
          if ( v13 || (v14 & 0x40000) != 0 )
            *((_DWORD *)v10 + 3) = 0;
        }
        *((_DWORD *)v11 + 57) = v13;
        if ( *((_DWORD *)v10 + 3) )
        {
          CPTPEngine::UpdateTPStateIndicator(this, a2, (struct CContactState *)v11, (struct PTPEnginePointerNode *)v10);
          if ( (*(_DWORD *)v11 & 2) != 0 )
          {
            ++v48;
            *(_OWORD *)((char *)v45 + 8) = 0LL;
            v47 = v43;
            *(_QWORD *)&v45[0] = *(_QWORD *)a2;
            v46 = 1;
            v44[0] = v45[0];
            *(_QWORD *)&v44[1] = *(_OWORD *)&_mm_unpackhi_pd(
                                               *(__m128d *)((char *)v45 + 8),
                                               *(__m128d *)((char *)v45 + 8));
            CBasePTPEngine::SendTelemetryOutput((__int64)this, 3, (__int64)v44);
          }
          else if ( *((_DWORD *)this + 706) != 1 )
          {
            *((_DWORD *)v11 + 1) &= ~0x10u;
          }
          if ( (*((_DWORD *)v10 + 3) & 0x40000) == 0 )
            ++*((_DWORD *)this + 698);
        }
        else if ( (v14 & 0x2000006) != 0 )
        {
          ++*((_DWORD *)this + 703);
        }
        else
        {
          v16 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & 1) != 0 )
          {
            *(_QWORD *)&v44[1] = 0LL;
            memset(v45, 0, 24);
            CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)v45);
            v16 = *(_DWORD *)v11 & 0xFFFFFFFE;
          }
          *(_DWORD *)v11 = v16 & 0xBFFFFFFF;
        }
        v10 += 96;
        ++v41;
      }
      while ( v41 < *((_DWORD *)a2 + 12) );
      v2 = v46;
      v42 = (char *)a2 + 56;
      v10 = (char *)a2 + 56;
    }
    *((_DWORD *)this + 701) = 0;
    v17 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v18 = v10 + 12;
      do
      {
        v19 = (unsigned int)(*(v18 - 2) % *((_DWORD *)this + 4));
        v20 = 328 * v19;
        v21 = *((_DWORD *)this + 82 * v19 + 204);
        if ( (v21 & 1) != 0 )
        {
          if ( (*v18 & 0x40000) != 0 )
          {
            if ( *((_DWORD *)this + 697) && (v21 & 0x10000) != 0 )
              CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
            if ( *((_DWORD *)this + 706) == 2 && (_DWORD)v19 == *((_DWORD *)this + 696) )
            {
              v35 = *((_DWORD *)this + 698) == 0;
              *((_DWORD *)this + 706) = 1;
              if ( !v35 )
              {
                CPTPEngine::ResetDragThresholds(this, a2);
                v22 = 0;
                if ( *((_DWORD *)a2 + 12) )
                {
                  v23 = v42 + 12;
                  do
                  {
                    v24 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v23 - 2) % *((_DWORD *)this + 4)) + 816);
                    if ( (*(_DWORD *)v24 & 1) != 0 && (*v23 & 0x40000) == 0 )
                    {
                      CPTPEngine::SetContactRestingState(this, v24, 1);
                      *(_DWORD *)((char *)this + v20 + 820) &= ~2u;
                    }
                    ++v22;
                    v23 += 24;
                  }
                  while ( v22 < *((_DWORD *)a2 + 12) );
                }
              }
              if ( (*(_DWORD *)((_BYTE *)this + v20 + 816) & 0x1000) != 0
                && (__int64)((unsigned __int64)(1000LL
                                              * (*(_QWORD *)((char *)this + v20 + 896)
                                               - *(_QWORD *)((char *)this + v20 + 912)))
                           / *((_QWORD *)this + 12)) >= *((unsigned int *)this + 847) )
              {
                *((_QWORD *)this + 381) = *(_QWORD *)((char *)this + v20 + 896);
              }
            }
          }
          else
          {
            if ( (v21 & 0x100) != 0 )
              ++*((_DWORD *)this + 701);
            if ( *((_DWORD *)this + 706) == 1 && (v40 || v2) )
              CPTPEngine::ResetDragThresholds(this, a2);
          }
        }
        v2 = v46;
        v18 += 24;
        ++v17;
      }
      while ( v17 < *((_DWORD *)a2 + 12) );
    }
    *((_DWORD *)this + 702) = *((_DWORD *)this + 698) - *((_DWORD *)this + 701);
    if ( v46 )
    {
      if ( *((_DWORD *)this + 706) == 1 )
        CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
      if ( !*((_DWORD *)this + 764) )
      {
LABEL_89:
        *((_DWORD *)this + 699) = 0;
        v30 = 0;
        v31 = 0;
        if ( !*((_DWORD *)a2 + 12) )
          goto LABEL_108;
        while ( 1 )
        {
          v32 = 328LL * (unsigned int)(*((_DWORD *)a2 + 15) % *((_DWORD *)this + 4));
          IsEnabledDeviceUsageNoInline = Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline();
          v34 = *(_DWORD *)((char *)this + v32 + 816);
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( (*(_DWORD *)((_BYTE *)this + v32 + 816) & 1) != 0 && (v34 & 2) == 0 )
            {
              v35 = (v34 & 0x10) == 0;
LABEL_97:
              if ( v35 && ((v34 & 0x80000) != 0 || (*(_DWORD *)((_BYTE *)this + v32 + 820) & 1) == 0) )
              {
                *(_DWORD *)((char *)this + v32 + 820) &= ~1u;
                v30 = 1;
              }
            }
          }
          else if ( (*(_DWORD *)((_BYTE *)this + v32 + 816) & 1) != 0 && (v34 & 2) == 0 )
          {
            v35 = (v34 & 0x4000000) == 0;
            goto LABEL_97;
          }
          v36 = *((_DWORD *)a2 + 12);
          if ( ++v31 >= v36 )
          {
            if ( v30 )
            {
              v37 = 0;
              if ( v36 )
              {
                do
                {
                  v38 = 328LL * (unsigned int)(*((_DWORD *)a2 + 15) % *((_DWORD *)this + 4));
                  v39 = *(_DWORD *)((char *)this + v38 + 816);
                  if ( (v39 & 1) != 0 && (v39 & 2) != 0 )
                    *(_DWORD *)((char *)this + v38 + 820) &= ~1u;
                  ++v37;
                }
                while ( v37 < *((_DWORD *)a2 + 12) );
              }
            }
            goto LABEL_108;
          }
        }
      }
      if ( v48 == 1 && *((_DWORD *)this + 765) )
      {
        v25 = v47;
        v26 = *(_QWORD *)((char *)this + 2836) - *((_QWORD *)this + 41 * v47 + 104);
        v27 = HIDWORD(*(_QWORD *)((char *)this + 2836)) - HIDWORD(*((_QWORD *)this + 41 * v47 + 104));
        if ( v27 * v27 + v26 * v26 <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 789) * *((_DWORD *)this + 789)) )
        {
          v28 = 1;
          goto LABEL_87;
        }
      }
      else
      {
        v25 = v47;
      }
      v28 = 0;
LABEL_87:
      CPTPEngine::CancelMouseUpTimer(this, v28 ^ 1);
      if ( v28 )
      {
        v29 = *((_DWORD *)this + 766);
        *((_DWORD *)this + 766) = 0;
        *((_DWORD *)this + 697) = v29;
        *((_DWORD *)this + 82 * v25 + 204) |= 0x8000u;
      }
      goto LABEL_89;
    }
LABEL_108:
    CPTPEngine::ApplyHeuristics(this, a2, v46 != 0, v40 != 0);
  }
}
