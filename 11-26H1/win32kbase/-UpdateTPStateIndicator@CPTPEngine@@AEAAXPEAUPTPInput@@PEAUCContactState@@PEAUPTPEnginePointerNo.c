/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1401058D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x140132DC8 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x14013F3D0 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1401488F4 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x14017E6B4 (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1401B15D4 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v7; // rsi
  CPTPEngine *v11; // rcx
  _DWORD *v12; // r8
  struct tagPOINT *v13; // r9
  int v14; // r9d
  int v15; // r11d
  int v16; // r10d
  unsigned int v17; // r10d
  _DWORD *v18; // rdx
  unsigned int v19; // r10d
  int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  unsigned int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // r15d
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // rdx

  v4 = *((_QWORD *)a4 + 5);
  v5 = 0;
  v7 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    *((_QWORD *)a3 + 1) = v4;
    if ( !(unsigned int)CPTPEngine::GetSensitivityLevel((__int64)this)
      || !CPTPEngine::PointInsideCurtainRegion(v11, v13[5]) )
    {
      *v12 |= 0x1000u;
      CPTPEngine::TPAAPSetCurtainState(v11, 0);
    }
    v14 = *((_DWORD *)this + 768);
    if ( (v14 & 0x100000) != 0
      && *(_QWORD *)a2 - *((_QWORD *)this + 361) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 811)
                                                  / 0x3E8 )
    {
      v14 &= ~0x100000u;
      *((_DWORD *)this + 768) = v14;
    }
    v15 = -2097153;
    if ( (v14 & 0x200000) != 0
      && *(_QWORD *)a2 - *((_QWORD *)this + 361) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 811)
                                                  / 0x3E8 )
    {
      *((_DWORD *)this + 768) = v14 & 0xFFDFFFFF;
    }
    v16 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 752, v4) )
    {
      v16 |= 0x40u;
      *(_DWORD *)a3 = v16;
    }
    if ( (v16 & 0x80u) == 0 && SHIDWORD(v4) < *((_DWORD *)this + 753) )
      v16 |= 0x80u;
    if ( (v16 & 1) != 0 )
    {
      v23 = v16 & 0xFFFFFFFD;
      v24 = v7 - *((_QWORD *)a3 + 8);
      *(_DWORD *)a3 = v23;
      v25 = *((_QWORD *)this + 361);
      v26 = *((_QWORD *)this + 362);
      v27 = v23 & 0xFFFFFFDF | (*((_QWORD *)this + 364) < v24 ? 0x20 : 0);
      *(_DWORD *)a3 = v27;
      v28 = v15 & v27 | (*((_QWORD *)this + 365) < v24 ? 0x200000 : 0);
      *(_DWORD *)a3 = v28;
      v29 = v28 & 0xFFBFFFFF | (*((_QWORD *)this + 366) < v24 ? 0x400000 : 0);
      *(_DWORD *)a3 = v29;
      if ( v7 - v26 >= (unsigned __int64)(v7 - v25) )
        v26 = v25;
      v30 = v29 & 0xFF7FFFFF | (*((_QWORD *)this + 365) < (unsigned __int64)(v7 - v26) ? 0x800000 : 0);
      *(_DWORD *)a3 = v30;
      if ( (v30 & 0x10) == 0 && (unsigned __int64)(v7 - *((_QWORD *)a3 + 9)) > *((_QWORD *)this + 363) )
      {
        *(_DWORD *)a3 = v30 | 0x10;
        if ( *((_DWORD *)this + 706) == 1 && (*((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13)) )
        {
          CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
          *((_DWORD *)a2 + 10) = 0;
        }
      }
      if ( (*(_DWORD *)a3 & 0x100) == 0
        && (*((_DWORD *)this + 768) & 0x8000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v7, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v4, v7, a3);
        v31 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 4) == 0
          && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v4, 0) )
        {
          v31 |= 4u;
          *(_DWORD *)a3 = v31;
        }
        v32 = v31;
        if ( (v31 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v4, 1) )
        {
          v32 = v31 | 8;
          *(_DWORD *)a3 = v31 | 8;
        }
        if ( (v32 & 0x100000) == 0
          && *((unsigned int *)this + 809)
           * (__int64)(int)((HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v4)))
           + (unsigned __int64)*((unsigned int *)this + 810)
           * (int)((*((_QWORD *)a3 + 2) - v4) * (*((_QWORD *)a3 + 2) - v4)) >= *((unsigned int *)this + 809)
                                                                             * (unsigned __int64)*((unsigned int *)this
                                                                                                 + 810) )
        {
          v32 |= 0x100000u;
          *(_DWORD *)a3 = v32;
        }
        if ( (v32 & 0x1000000) == 0
          && *((unsigned int *)this + 780) * (__int64)(int)((*((_QWORD *)a3 + 3) - v4) * (*((_QWORD *)a3 + 3) - v4))
           + (unsigned __int64)*((unsigned int *)this + 779)
           * (int)((HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4))) >= *((unsigned int *)this + 779) * (unsigned __int64)*((unsigned int *)this + 780) )
        {
          v32 |= 0x1000000u;
          *(_DWORD *)a3 = v32;
        }
        if ( (v32 & 0x2000000) == 0
          && *((unsigned int *)this + 780) * (__int64)(int)((*((_QWORD *)a3 + 4) - v4) * (*((_QWORD *)a3 + 4) - v4))
           + (unsigned __int64)*((unsigned int *)this + 779)
           * (int)((HIDWORD(*((_QWORD *)a3 + 4)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 4)) - HIDWORD(v4))) >= *((unsigned int *)this + 779) * (unsigned __int64)*((unsigned int *)this + 780) )
        {
          v32 |= 0x2000000u;
          *(_DWORD *)a3 = v32;
        }
        if ( (v32 & 0x10000000) == 0 )
        {
          v33 = (unsigned int)(*((_DWORD *)this + 804) * *((_DWORD *)this + 804));
          v34 = (unsigned int)(*((_DWORD *)this + 805) * *((_DWORD *)this + 805));
          if ( v33 * (int)((HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)))
             + v34 * (int)((*((_QWORD *)a3 + 3) - v4) * (*((_QWORD *)a3 + 3) - v4)) >= (unsigned __int64)(v33 * v34) )
            *(_DWORD *)a3 = v32 | 0x10000000;
        }
      }
    }
    else
    {
      v17 = v16 & 0xFF8FFFE3;
      *((_QWORD *)a3 + 8) = v7;
      *(_DWORD *)a3 = v17;
      v18 = (_DWORD *)((char *)this + 2824);
      *((_QWORD *)a3 + 11) = v7;
      *((_QWORD *)a3 + 13) = v7;
      v19 = v17 & 0xE3FFCFFC | 3;
      *((_QWORD *)a3 + 16) = v7;
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 2) = v4;
      *((_QWORD *)a3 + 3) = v4;
      *((_QWORD *)a3 + 6) = v4;
      *((_QWORD *)a3 + 7) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v19;
      *((_DWORD *)a3 + 35) = 0;
      if ( !*((_DWORD *)this + 697) || (v20 = 0x4000, *v18 == 1) )
        v20 = 0;
      *((_DWORD *)a3 + 1) |= 0xBu;
      *((_DWORD *)a3 + 36) = 0;
      v21 = v20 & 0xBCF0743F | v19 & 0xBCF0343F;
      *((_QWORD *)a3 + 10) = v7;
      *(_DWORD *)a3 = v21;
      *((_QWORD *)a3 + 5) = v4;
      v22 = (*((_DWORD *)this + 6) << 10) ^ (v21 ^ (*((_DWORD *)this + 6) << 10)) & 0xFFFFFBFF;
      *(_DWORD *)a3 = v22;
      if ( (*((_DWORD *)this + 768) & 1) == 0 && (*v18 == 1 || *v18 == 2) )
        v5 = 0x80000000;
      *(_DWORD *)a3 = v5 | v22 & 0x7FFFFFFF;
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v4, v7, a3);
    }
  }
}
