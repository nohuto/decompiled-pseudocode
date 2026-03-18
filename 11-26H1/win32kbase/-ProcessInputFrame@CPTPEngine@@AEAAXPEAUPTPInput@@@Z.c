/*
 * XREFs of ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1401039A4 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1401058D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x140135B6C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x14013F3D0 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1401488F4 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x14017B56C (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1401B0F94 (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::ProcessInputFrame(CPTPEngine *this, struct PTPInput *a2)
{
  char v4; // si
  _DWORD *v5; // rcx
  int v6; // edx
  unsigned __int64 v7; // rax
  CPTPEngine *v8; // rcx
  unsigned __int64 v9; // rax
  _DWORD *v10; // r8
  char *v11; // rsi
  char *v12; // r14
  int v13; // ecx
  unsigned int v14; // r15d
  int v15; // r13d
  CPTPEngine *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // r15d
  _DWORD *v21; // r14
  _DWORD *v22; // r13
  __int64 v23; // rsi
  __int64 v24; // r12
  int v25; // ecx
  bool v26; // zf
  unsigned int v27; // r15d
  _DWORD *v28; // rsi
  struct CContactState *v29; // rdx
  unsigned int v30; // r14d
  __int64 v31; // rax
  int v32; // esi
  char v33; // r14
  unsigned int v34; // esi
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // r10d
  __int64 v41; // rcx
  int v42; // eax
  int v43; // [rsp+20h] [rbp-50h]
  int v44; // [rsp+24h] [rbp-4Ch]
  char *v45; // [rsp+28h] [rbp-48h]
  unsigned int v46; // [rsp+28h] [rbp-48h]
  _OWORD v47[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v48; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+60h] [rbp-10h]
  unsigned int v50; // [rsp+B8h] [rbp+48h]
  unsigned int v51; // [rsp+C0h] [rbp+50h]
  unsigned int v52; // [rsp+C0h] [rbp+50h]
  int v53; // [rsp+C8h] [rbp+58h]

  v43 = 0;
  v50 = 0;
  v53 = 0;
  v44 = 0;
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v4 = 1;
  }
  else
  {
    v49 = 0LL;
    memset(v47, 0, 24);
    v4 = 0;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, v47);
  }
  v5 = (_DWORD *)((char *)a2 + 36);
  if ( !*((_DWORD *)a2 + 9) )
  {
    if ( !v4 || (v6 = *((_DWORD *)this + 768), (v6 & 0x2000000) != 0) && (v6 & 0x4000000) == 0 )
    {
      v5 = (_DWORD *)((char *)a2 + 36);
      if ( *((_DWORD *)a2 + 12) > (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 0LL);
        v7 = *((_QWORD *)this + 375);
        if ( v7 && *((_QWORD *)a2 + 1) > v7 && (int)CPTPEngine::GetSensitivityLevel(this) > 0 )
          CPTPEngine::TPAAPSetCurtainState(v8, 1);
        *((_QWORD *)this + 375) = *(_QWORD *)a2;
        v9 = *((_QWORD *)a2 + 2);
        if ( v9 > *((_QWORD *)a2 + 1) )
        {
          v47[0] = v9;
          *(_QWORD *)&v47[1] = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
          CBasePTPEngine::SendTelemetryOutput(this, 0LL, v47);
        }
        *((_DWORD *)this + 768) |= 0x4000000u;
        v5 = (_DWORD *)((char *)a2 + 36);
      }
    }
  }
  if ( !*v5 )
  {
    v10 = (_DWORD *)((char *)this + 2792);
    *((_DWORD *)this + 703) = 0;
    *((_DWORD *)this + 698) = 0;
    v11 = (char *)a2 + 56;
    v51 = 0;
    v45 = (char *)a2 + 56;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        v46 = *((_DWORD *)v11 + 1) % *((_DWORD *)this + 4);
        v12 = (char *)this + 328 * v46 + 816;
        v13 = *(_DWORD *)v12;
        if ( (*(_DWORD *)v12 & 1) != 0 && ((v13 & 0x20000000) == 0 || (*((_DWORD *)v11 + 3) & 0x60000) == 0) )
        {
          v49 = 0LL;
          memset(v47, 0, 24);
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, v47);
          *(_DWORD *)v12 &= 0xDFFFFFFE;
          v13 = *(_DWORD *)v12;
        }
        if ( (v13 & 0x20000000) == 0 )
        {
          v44 = 1;
          *(_DWORD *)v12 = v13 | 0x20000000;
          *((_QWORD *)v12 + 9) = *((_QWORD *)v11 + 10);
          *((_QWORD *)v12 + 4) = *((_QWORD *)v11 + 5);
        }
        v14 = 0;
        *(_OWORD *)(v12 + 232) = *(_OWORD *)v11;
        *(_OWORD *)(v12 + 248) = *((_OWORD *)v11 + 1);
        *(_OWORD *)(v12 + 264) = *((_OWORD *)v11 + 2);
        *(_OWORD *)(v12 + 280) = *((_OWORD *)v11 + 3);
        *(_OWORD *)(v12 + 296) = *((_OWORD *)v11 + 4);
        *(_OWORD *)(v12 + 312) = *((_OWORD *)v11 + 5);
        v15 = *((_DWORD *)v11 + 3);
        *((_DWORD *)v11 + 3) = v15 & 0xFFFFFF8F;
        if ( (*(_DWORD *)v12 & 1) == 0 )
        {
          v14 = ((v15 & 0xFFFFFF8F) >> 23) & 4;
          if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, *(struct tagPOINT *)(v11 + 40))
            && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(v16, a2, 0x40u, 0) )
          {
            v14 |= 2u;
          }
          if ( (*((_DWORD *)this + 821) & 2) != 0
            && !(unsigned int)PtInRect((char *)this + 3024, *((_QWORD *)v11 + 5), v17, v18, v43)
            && (*(_QWORD *)a2 - *((_QWORD *)v12 + 9) >= *((_QWORD *)this + 12)
                                                      * (unsigned __int64)*((unsigned int *)this + 784)
                                                      / 0x3E8
             || *((_DWORD *)a2 + 12) == 1
             || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(this, a2, (struct CContactState *)v12)) )
          {
            v14 |= 1u;
          }
          if ( v14 || (v15 & 0x40000) != 0 )
            *((_DWORD *)v11 + 3) = 0;
        }
        *((_DWORD *)v12 + 57) = v14;
        if ( *((_DWORD *)v11 + 3) )
        {
          CPTPEngine::UpdateTPStateIndicator(this, a2, (struct CContactState *)v12, (struct PTPEnginePointerNode *)v11);
          if ( (*(_DWORD *)v12 & 2) != 0 )
          {
            ++v43;
            *(_OWORD *)((char *)v47 + 8) = 0LL;
            v50 = v46;
            *(_QWORD *)&v47[0] = *(_QWORD *)a2;
            v53 = 1;
            v48 = v47[0];
            v49 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v47 + 8), *(__m128d *)((char *)v47 + 8));
            CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v48);
          }
          else if ( *((_DWORD *)this + 706) != 1 )
          {
            *((_DWORD *)v12 + 1) &= ~8u;
          }
          if ( (*((_DWORD *)v11 + 3) & 0x40000) == 0 )
            ++*((_DWORD *)this + 698);
        }
        else if ( (v15 & 0x2000006) != 0 )
        {
          ++*((_DWORD *)this + 703);
        }
        else
        {
          v19 = *(_DWORD *)v12;
          if ( (*(_DWORD *)v12 & 1) != 0 )
          {
            v49 = 0LL;
            memset(v47, 0, 24);
            CBasePTPEngine::SendTelemetryOutput(this, 11LL, v47);
            v19 = *(_DWORD *)v12 & 0xFFFFFFFE;
          }
          *(_DWORD *)v12 = v19 & 0xDFFFFFFF;
        }
        v11 += 96;
        ++v51;
      }
      while ( v51 < *((_DWORD *)a2 + 12) );
      v45 = (char *)a2 + 56;
      v11 = (char *)a2 + 56;
      v10 = (_DWORD *)((char *)this + 2792);
    }
    v20 = 0;
    v21 = (_DWORD *)((char *)this + 2804);
    *((_DWORD *)this + 701) = 0;
    v52 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v22 = v11 + 12;
      do
      {
        v23 = (unsigned int)(*(v22 - 2) % *((_DWORD *)this + 4));
        v24 = 328 * v23;
        v25 = *((_DWORD *)this + 82 * v23 + 204);
        if ( (v25 & 1) != 0 )
        {
          if ( (*v22 & 0x40000) != 0 )
          {
            if ( *((_DWORD *)this + 697) && (v25 & 0x10000) != 0 )
              CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
            if ( *((_DWORD *)this + 706) == 2 && (_DWORD)v23 == *((_DWORD *)this + 696) )
            {
              v26 = *((_DWORD *)this + 698) == 0;
              *((_DWORD *)this + 706) = 1;
              if ( !v26 )
              {
                CPTPEngine::ResetDragThresholds(this, a2);
                v27 = 0;
                if ( *((_DWORD *)a2 + 12) )
                {
                  v28 = v45 + 12;
                  do
                  {
                    v29 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v28 - 2) % *((_DWORD *)this + 4)) + 816);
                    if ( (*(_DWORD *)v29 & 1) != 0 && (*v28 & 0x40000) == 0 )
                    {
                      CPTPEngine::SetContactRestingState(this, v29, 1);
                      *(_DWORD *)((char *)this + v24 + 820) &= ~1u;
                    }
                    ++v27;
                    v28 += 24;
                  }
                  while ( v27 < *((_DWORD *)a2 + 12) );
                }
                v20 = v52;
              }
              if ( (*(_DWORD *)((_BYTE *)this + v24 + 816) & 0x1000) != 0
                && (__int64)((unsigned __int64)(1000LL
                                              * (*(_QWORD *)((char *)this + v24 + 896)
                                               - *(_QWORD *)((char *)this + v24 + 912)))
                           / *((_QWORD *)this + 12)) >= *((unsigned int *)this + 844) )
              {
                *((_QWORD *)this + 380) = *(_QWORD *)((char *)this + v24 + 896);
              }
            }
          }
          else
          {
            if ( (v25 & 0x100) != 0 )
              ++*v21;
            if ( *((_DWORD *)this + 706) == 1 && (v44 || v53) )
              CPTPEngine::ResetDragThresholds(this, a2);
          }
        }
        ++v20;
        v22 += 24;
        v52 = v20;
      }
      while ( v20 < *((_DWORD *)a2 + 12) );
      v21 = (_DWORD *)((char *)this + 2804);
      v10 = (_DWORD *)((char *)this + 2792);
    }
    *((_DWORD *)this + 702) = *v10 - *v21;
    if ( !v53 )
      goto LABEL_105;
    if ( *((_DWORD *)this + 706) == 1 )
      CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
    if ( !*((_DWORD *)this + 762) )
    {
LABEL_91:
      v33 = 0;
      *((_DWORD *)this + 699) = 0;
      v34 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        do
        {
          v35 = *((_DWORD *)a2 + 15);
          v36 = *((_DWORD *)this + 4);
          v37 = v35 % v36;
          v38 = *((_DWORD *)this + 82 * v37 + 204);
          if ( (v38 & 1) != 0 && (v38 & 2) == 0 && (v38 & 0x10) == 0 && ((v38 & 0x80000) != 0 || v38 >= 0) )
          {
            v33 = 1;
            *((_DWORD *)this + 82 * v37 + 204) = v38 & 0x7FFFFFFF;
            v35 = *((_DWORD *)a2 + 15);
            v36 = *((_DWORD *)this + 4);
          }
          v39 = *((_DWORD *)a2 + 12);
          ++v34;
        }
        while ( v34 < v39 );
        if ( v33 )
        {
          v40 = 0;
          if ( v39 )
          {
            do
            {
              v41 = v35 % v36;
              v42 = *((_DWORD *)this + 82 * v41 + 204);
              if ( (v42 & 1) != 0 && (v42 & 2) != 0 )
              {
                *((_DWORD *)this + 82 * v41 + 204) = v42 & 0x7FFFFFFF;
                v35 = *((_DWORD *)a2 + 15);
                v36 = *((_DWORD *)this + 4);
              }
              ++v40;
            }
            while ( v40 < *((_DWORD *)a2 + 12) );
          }
        }
      }
LABEL_105:
      CPTPEngine::ApplyHeuristics(this, a2, v53 != 0, v44 != 0);
      return;
    }
    if ( v43 == 1 && *((_DWORD *)this + 763) )
    {
      v30 = v50;
      v31 = *((_QWORD *)this + 41 * v50 + 104);
      if ( (int)((*(_QWORD *)((char *)this + 2836) - v31) * (*(_QWORD *)((char *)this + 2836) - v31)
               + (HIDWORD(*(_QWORD *)((char *)this + 2836)) - HIDWORD(v31))
               * (HIDWORD(*(_QWORD *)((char *)this + 2836)) - HIDWORD(v31))) <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 787) * *((_DWORD *)this + 787)) )
      {
        v32 = 1;
        goto LABEL_89;
      }
    }
    else
    {
      v30 = v50;
    }
    v32 = 0;
LABEL_89:
    CPTPEngine::CancelMouseUpTimer(this, v32 ^ 1);
    if ( v32 )
    {
      *((_DWORD *)this + 697) = *((_DWORD *)this + 764);
      *((_DWORD *)this + 764) = 0;
      *((_DWORD *)this + 82 * v30 + 204) |= 0x8000u;
    }
    goto LABEL_91;
  }
}
