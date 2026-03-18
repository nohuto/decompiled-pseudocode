/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400C9040 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EEF10 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1400EF3B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1400F8D74 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140129474 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x14015169C (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?CrossedMainTapDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x140193658 (-CrossedMainTapDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1401936F8 (-CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x140193790 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14022550C (Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r14
  unsigned __int64 v10; // rcx
  _DWORD *v11; // r8
  struct tagPOINT *v12; // r9
  int v13; // r9d
  unsigned __int64 v14; // rcx
  int v15; // r9d
  int v16; // r8d
  int v17; // r10d
  int v18; // ebp
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  int v21; // eax
  int v22; // r10d
  unsigned int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // ecx
  int v32; // r11d
  __int64 v33; // r10

  v5 = *((_QWORD *)a4 + 5);
  v7 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    *((_QWORD *)a3 + 1) = v5;
    if ( !(unsigned int)CPTPEngine::GetSensitivityLevel((__int64)this)
      || !CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)v10, v12[5]) )
    {
      *v11 |= 0x1000u;
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)v10, 0);
    }
    v13 = *((_DWORD *)this + 770);
    if ( (v13 & 0x100000) != 0 )
    {
      v10 = *(_QWORD *)a2 - *((_QWORD *)this + 361);
      if ( v10 >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 814) / 0x3E8 )
        *((_DWORD *)this + 770) = v13 & 0xFFEFFFFF;
    }
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v10) )
    {
      v15 = *((_DWORD *)this + 770);
      if ( (v15 & 0x200000) != 0 )
      {
        v14 = *(_QWORD *)a2 - *((_QWORD *)this + 361);
        if ( v14 >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 814) / 0x3E8 )
          *((_DWORD *)this + 770) = v15 & 0xFFDFFFFF;
      }
    }
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 754, v5) )
      *(_DWORD *)a3 = v16 | 0x40;
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v14)
      && (*(_DWORD *)a3 & 0x80u) == 0
      && SHIDWORD(v5) < *((_DWORD *)this + 755) )
    {
      *(_DWORD *)a3 |= 0x80u;
    }
    v17 = *(_DWORD *)a3;
    v18 = 1;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
      v19 = v17 & 0xFF8FFFE3;
      *((_QWORD *)a3 + 8) = v7;
      *(_DWORD *)a3 = v19;
      *((_QWORD *)a3 + 11) = v7;
      *((_QWORD *)a3 + 13) = v7;
      v20 = v19 & 0xC7FFCFFC | 3;
      *((_QWORD *)a3 + 16) = v7;
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 2) = v5;
      *((_QWORD *)a3 + 3) = v5;
      *((_QWORD *)a3 + 6) = v5;
      *((_QWORD *)a3 + 7) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v20;
      *((_DWORD *)a3 + 35) = 0;
      if ( !*((_DWORD *)this + 697) || (v21 = 0x4000, *((_DWORD *)this + 706) == 1) )
        v21 = 0;
      *((_DWORD *)a3 + 1) |= 0x16u;
      *((_DWORD *)a3 + 36) = 0;
      v22 = v21 & 0x78F0743F | v20 & 0x78F0343F;
      *((_QWORD *)a3 + 10) = v7;
      *(_DWORD *)a3 = v22;
      *((_QWORD *)a3 + 5) = v5;
      *(_DWORD *)a3 = (*((_DWORD *)this + 6) << 10) ^ ((*((_DWORD *)this + 6) << 10) ^ v22) & 0xFFFFFBFF;
      if ( (unsigned int)Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (*((_DWORD *)this + 770) & 1) == 0 && (unsigned int)(*((_DWORD *)this + 706) - 1) <= 1 )
          goto LABEL_31;
      }
      else if ( (*((_DWORD *)this + 770) & 1) == 0
             && (unsigned int)(*((_DWORD *)this + 706) - 1) <= 1
             && *(_QWORD *)a2 - *((_QWORD *)this + 375) >= *((_QWORD *)this + 12)
                                                         * (unsigned __int64)*((unsigned int *)this + 821)
                                                         / 0x3E8 )
      {
        goto LABEL_31;
      }
      v18 = 0;
LABEL_31:
      *((_DWORD *)a3 + 1) = v18 | *((_DWORD *)a3 + 1) & 0xFFFFFFFE;
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v7, a3);
      return;
    }
    v23 = v17 & 0xFFFFFFFD;
    v24 = v7 - *((_QWORD *)a3 + 8);
    *(_DWORD *)a3 = v23;
    v25 = *((_QWORD *)this + 362);
    v26 = *((_QWORD *)this + 361);
    v27 = v23 & 0xFFFFFFDF | (*((_QWORD *)this + 364) < v24 ? 0x20 : 0);
    *(_DWORD *)a3 = v27;
    v28 = v27 & 0xFFDFFFFF | (*((_QWORD *)this + 365) < v24 ? 0x200000 : 0);
    *(_DWORD *)a3 = v28;
    v29 = v28 & 0xFFBFFFFF | (*((_QWORD *)this + 366) < v24 ? 0x400000 : 0);
    *(_DWORD *)a3 = v29;
    if ( v7 - v25 >= (unsigned __int64)(v7 - v26) )
      v25 = v26;
    v30 = v29 & 0xFF7FFFFF | (*((_QWORD *)this + 365) < (unsigned __int64)(v7 - v25) ? 0x800000 : 0);
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
    v31 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x4000000) == 0 && (unsigned __int64)(v7 - *((_QWORD *)a3 + 8)) > *((_QWORD *)this + 367) )
    {
      v31 |= 0x4000000u;
      *(_DWORD *)a3 = v31;
    }
    if ( (v31 & 0x100) == 0
      && (*((_DWORD *)this + 770) & 0x8000) != 0
      && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v7, a3) )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v7, a3);
      if ( (*(_DWORD *)a3 & 4) == 0
        && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
      {
        *(_DWORD *)a3 |= 4u;
      }
      if ( (*(_DWORD *)a3 & 8) == 0
        && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
      {
        *(_DWORD *)a3 |= 8u;
      }
      v32 = *(_DWORD *)a3;
      if ( (*(_DWORD *)a3 & 0x100000) == 0 )
      {
        v33 = *((_QWORD *)a3 + 2);
        if ( *((unsigned int *)this + 813) * (__int64)(((int)v33 - (int)v5) * ((int)v33 - (int)v5))
           + (unsigned __int64)*((unsigned int *)this + 812)
           * (HIDWORD(v33) - HIDWORD(v5))
           * (HIDWORD(v33) - HIDWORD(v5)) >= *((unsigned int *)this + 813)
                                           * (unsigned __int64)*((unsigned int *)this + 812) )
        {
          v32 |= 0x100000u;
          *(_DWORD *)a3 = v32;
        }
      }
      if ( (v32 & 0x1000000) == 0
        && (unsigned int)CPTPEngine::CrossedMainTapDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
      {
        *(_DWORD *)a3 |= 0x1000000u;
      }
      if ( (*(_DWORD *)a3 & 0x2000000) == 0
        && (unsigned int)CPTPEngine::CrossedMainTapDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
      {
        *(_DWORD *)a3 |= 0x2000000u;
      }
      if ( (*(_DWORD *)a3 & 0x20000000) == 0
        && (unsigned int)CPTPEngine::CrossedTPDisallowRightPressThreshold(this, a3, (struct tagPOINT)v5) )
      {
        *(_DWORD *)a3 |= 0x20000000u;
      }
    }
  }
}
