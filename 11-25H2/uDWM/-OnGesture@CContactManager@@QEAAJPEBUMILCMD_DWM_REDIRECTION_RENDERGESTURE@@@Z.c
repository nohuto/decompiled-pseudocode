/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002B000 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18002B7AC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18002BC10 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18002D1A0 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180030520 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F00 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F50 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007FFC8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x18008F130 (-StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryV.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180096528 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800AA078 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800AA140 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AA2D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800AA640 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800AA6FC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800AAA80 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800AB3D0 (-_RemoveForcedPressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B955C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B96C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BC49C (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BCA24 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D0E14 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D0F7C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D10D8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1800E41B0 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int started; // ebx
  unsigned int v5; // r12d
  int v6; // esi
  unsigned int i; // r8d
  unsigned int j; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  CContactManager *v16; // rcx
  int Touch; // eax
  CContactManager *v18; // rcx
  CContactManager *v19; // rcx
  CContactManager *v20; // rcx
  CBaseObject *v21; // rcx
  int v22; // r9d
  CContactManager *v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  CContactManager *v29; // rcx
  __int64 v30; // rbx
  CContactManager *v31; // rcx
  CContactManager *v32; // rcx
  CContactManager *v33; // rcx
  CContactManager *v34; // rcx
  CContactManager *v35; // rcx
  struct CTouchVisual *v36; // r15
  struct tagRECT *v37; // r8
  CContactManager *v38; // rcx
  __int64 v39; // rdx
  CMILRefCountBase *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // edx
  int v43; // esi
  unsigned int v44; // eax
  CBaseObject *v45; // rcx
  CContactManager *v46; // rcx
  CContactManager *v47; // rcx
  __int64 v48; // r15
  struct CTouchVisual *v49; // rdx
  __int64 v50; // rax
  CBaseObject **v51; // rdx
  CContactManager *v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r9d
  __int64 v57; // rax
  CContactManager *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  CMILRefCountBase *v63; // rsi
  int v64; // ebx
  _QWORD *v65; // r12
  __int64 v66; // r15
  CContactManager *v67; // rcx
  CContactManager *v68; // rcx
  __int64 v69; // r15
  CContactManager *v70; // rcx
  CBaseObject *v71; // rcx
  CContactManager *v72; // rcx
  CContactManager *v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  int v76; // eax
  CContactManager *v77; // rcx
  __int64 v78; // r15
  struct CTouchVisual *v79; // rdx
  __int64 v80; // rax
  CBaseObject **v81; // rdx
  CContactManager *v82; // rcx
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rcx
  int v86; // r9d
  __int64 v87; // rax
  CContactManager *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  CMILRefCountBase *v93; // rsi
  int v94; // ebx
  _QWORD *v95; // r12
  __int64 v96; // r15
  CContactManager *v97; // rcx
  CContactManager *v98; // rcx
  unsigned int v100; // [rsp+20h] [rbp-50h]
  struct tagRECT *v101; // [rsp+20h] [rbp-50h]
  CMILRefCountBase *v102[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v103; // [rsp+48h] [rbp-28h]
  struct tagRECT v104; // [rsp+50h] [rbp-20h] BYREF

  v103 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = 0;
  v5 = -1;
  v6 = -1;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( *(_DWORD *)(104LL * i + *((_QWORD *)this + 7)) == *((_DWORD *)a2 + 2) )
    {
      v6 = i;
      break;
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 28); ++j )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * j) == *((_DWORD *)a2 + 2) )
    {
      v5 = j;
      break;
    }
  }
  v9 = *((_DWORD *)a2 + 4);
  v104.top = v9 - 25;
  v104.bottom = v9 + 25;
  v10 = *((_DWORD *)a2 + 3);
  v104.left = v10 - 25;
  v104.right = v10 + 25;
  GetDesktopID(1LL);
  v11 = *((_DWORD *)a2 + 1);
  v12 = 5LL;
  if ( v11 > 5 )
  {
    v25 = v11 - 6;
    if ( !v25 )
    {
      CContactManager::CancelStationaryAnimationsInRadius(this, 2LL, (char *)a2 + 12);
      CContactManager::CancelStationaryAnimationsInRadius(this, 1LL, (char *)a2 + 12);
      v101 = &v104;
      v12 = 3LL;
      goto LABEL_168;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_47;
          v102[0] = 0LL;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v30 = 104LL * (unsigned int)v6;
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v29,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 48));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v31,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 56));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v32,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 80));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v33,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 88));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v34,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 64));
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 56) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 80) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 88) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 64) = 0LL;
            *(_BYTE *)(*((_QWORD *)this + 7) + v30 + 96) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(0LL);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 759;
            goto LABEL_33;
          }
          v36 = v102[0];
          CContactManager::AddToTouchNode(v35, 0LL, v102[0]);
          if ( v6 < 0 )
            v37 = &v104;
          else
            v37 = (struct tagRECT *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      v102[0],
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v37,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v38, 0LL, (struct CVisualProxy **)v102[0]);
            if ( v102[0] )
              CBaseObject::Release(v102[0]);
            v100 = 775;
            goto LABEL_28;
          }
          if ( v6 >= 0 )
          {
            v39 = 104LL * (unsigned int)v6;
            *(CMILRefCountBase **)(*((_QWORD *)this + 7) + v39 + 88) = v102[0];
            v40 = *(CMILRefCountBase **)(*((_QWORD *)this + 7) + v39 + 88);
LABEL_65:
            CMILRefCountBase::AddRef(v40);
LABEL_66:
            if ( !v36 )
              goto LABEL_169;
            v45 = v36;
            goto LABEL_128;
          }
          v41 = *((_DWORD *)this + 44);
          v42 = v41 + 1;
          if ( v41 + 1 < v41 )
          {
            v43 = -2147024362;
            v44 = 179;
LABEL_70:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, v44, 0LL);
            CContactManager::StopAndRemoveFromRootNode(v46, v36);
            goto LABEL_66;
          }
          if ( v42 > *((_DWORD *)this + 43) )
          {
            v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, v102);
            if ( v43 < 0 )
            {
              v44 = 190;
              goto LABEL_70;
            }
          }
          else
          {
            *(CMILRefCountBase **)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v102[0];
            *((_DWORD *)this + 44) = v42;
          }
          v40 = v36;
          goto LABEL_65;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v48 = 104LL * (unsigned int)v6;
          v49 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v48 + 64);
          if ( v49 )
          {
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v47, v49);
            *(_QWORD *)(*((_QWORD *)this + 7) + v48 + 64) = 0LL;
            v50 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v50 + v48 + 88) )
            {
              if ( *(_BYTE *)(v50 + v48 + 97) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v50 + v48 + 40) )
                {
                  v51 = (CBaseObject **)(v48 + v50 + 48);
                  if ( !*v51 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(0LL, v51);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v100 = 678;
                      goto LABEL_33;
                    }
                    CContactManager::AddToTouchNode(
                      v52,
                      0LL,
                      *(struct CVisual **)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 48));
                  }
                  v53 = 104LL * (unsigned int)v6;
                  v54 = *((_QWORD *)this + 7);
                  v55 = *(_QWORD *)(v53 + v54 + 48);
                  if ( *((_BYTE *)this + 324) )
                    v56 = -5;
                  else
                    v56 = *(_DWORD *)(v53 + v54 + 40);
                  CDirectTouchVisual::StartDown(v55, (const struct tagPOINT *)((char *)a2 + 12), &v104, v56);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v48 + v50 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(0LL);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v100 = 688;
                    goto LABEL_33;
                  }
                  v57 = *((_QWORD *)this + 7);
                  v58 = *(CContactManager **)(v57 + v48 + 56);
                  *((_DWORD *)v58 + 94) = *(_DWORD *)(v57 + 104LL * (unsigned int)v6);
                  CContactManager::AddToTouchNode(v58, 0LL, *(struct CVisual **)(*((_QWORD *)this + 7) + v48 + 56));
                }
                v59 = *((_QWORD *)this + 7);
                v60 = v48 + v59 + 8;
                v61 = *(_QWORD *)(v59 + v48 + 56);
                v62 = *(unsigned int *)(v59 + v48 + 40);
                if ( *(_DWORD *)(v59 + v48 + 4) )
                  CIndirectTouchVisual::StartEngage(v61, v60, v62);
                else
                  CIndirectTouchVisual::StartHover(v61, v60, v62);
              }
            }
          }
        }
        v63 = 0LL;
        v102[0] = 0LL;
        v64 = *((_DWORD *)this + 76) - 1;
        if ( v64 < 0 )
          goto LABEL_102;
        v65 = (_QWORD *)((char *)this + 280);
        v66 = 16LL * v64;
        do
        {
          if ( *(_DWORD *)(v66 + *v65) == *((_DWORD *)a2 + 2) )
          {
            v63 = *(CMILRefCountBase **)(v66 + *v65 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v64);
          }
          v66 -= 16LL;
          --v64;
        }
        while ( v64 >= 0 );
        v102[0] = v63;
        if ( !v63 )
        {
LABEL_102:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(0LL);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 718;
            goto LABEL_33;
          }
          v63 = v102[0];
          CContactManager::AddToTouchNode(v67, 0LL, v102[0]);
        }
        started = CTouchPressHoldVisual::StartAbort(v63, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_169;
        CContactManager::RemoveFromTouchNode(v68, 0LL, (struct CVisualProxy **)v63);
        if ( v63 )
          CBaseObject::Release(v63);
        v100 = 726;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
          v102[0] = (CMILRefCountBase *)*((unsigned int *)a2 + 2);
          v102[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(0LL);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 620;
            goto LABEL_33;
          }
          CContactManager::AddToTouchNode(v72, 0LL, v102[1]);
          started = CTouchPressHoldVisual::StartHold(v102[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v74 = *((unsigned int *)this + 68);
            v75 = v74 + 1;
            if ( (int)v74 + 1 >= (unsigned int)v74 )
            {
              started = 0;
              if ( v75 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v74) = *(_OWORD *)v102;
                *((_DWORD *)this + 68) = v75;
                goto LABEL_169;
              }
              v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 16, 1, v102);
              started = v76;
              if ( v76 >= 0 )
                goto LABEL_169;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v76, 0xBEu, 0LL);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v73, 0LL, (struct CVisualProxy **)v102[1]);
          v45 = v102[1];
          if ( !v102[1] )
            goto LABEL_169;
LABEL_128:
          CBaseObject::Release(v45);
          goto LABEL_169;
        }
        if ( v6 < 0 )
          goto LABEL_47;
        v69 = 104LL * (unsigned int)v6;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v69 + 4) != 1 )
          goto LABEL_47;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, 0LL);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 644;
          goto LABEL_33;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(v69 + *((_QWORD *)this + 7) + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_169;
        CContactManager::RemoveFromTouchNode(v70, 0LL, *(struct CVisualProxy ***)(v69 + *((_QWORD *)this + 7) + 64));
        v71 = *(CBaseObject **)(v69 + *((_QWORD *)this + 7) + 64);
        if ( v71 )
        {
          CBaseObject::Release(v71);
          *(_QWORD *)(v69 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v100 = 650;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
      {
        CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v78 = 104LL * (unsigned int)v6;
        v79 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v78 + 64);
        if ( v79 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v77, v79);
          *(_QWORD *)(v78 + *((_QWORD *)this + 7) + 64) = 0LL;
          v80 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v78 + v80 + 88) )
          {
            if ( *(_BYTE *)(v78 + v80 + 97) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v78 + v80 + 40) )
              {
                v81 = (CBaseObject **)(v78 + v80 + 48);
                if ( !*v81 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(0LL, v81);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v100 = 550;
                    goto LABEL_33;
                  }
                  CContactManager::AddToTouchNode(
                    v82,
                    0LL,
                    *(struct CVisual **)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 48));
                }
                v83 = 104LL * (unsigned int)v6;
                v84 = *((_QWORD *)this + 7);
                v85 = *(_QWORD *)(v83 + v84 + 48);
                if ( *((_BYTE *)this + 324) )
                  v86 = -5;
                else
                  v86 = *(_DWORD *)(v83 + v84 + 40);
                CDirectTouchVisual::StartDown(v85, (const struct tagPOINT *)((char *)a2 + 12), &v104, v86);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v78 + v80 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(0LL);
                started = Touch;
                if ( Touch < 0 )
                {
                  v100 = 560;
                  goto LABEL_33;
                }
                v87 = *((_QWORD *)this + 7);
                v88 = *(CContactManager **)(v78 + v87 + 56);
                *((_DWORD *)v88 + 94) = *(_DWORD *)(v78 + v87);
                CContactManager::AddToTouchNode(v88, 0LL, *(struct CVisual **)(v78 + *((_QWORD *)this + 7) + 56));
              }
              v89 = *((_QWORD *)this + 7);
              v90 = v78 + v89 + 8;
              v91 = *(_QWORD *)(v78 + v89 + 56);
              v92 = *(unsigned int *)(v78 + v89 + 40);
              if ( *(_DWORD *)(v78 + v89 + 4) )
                CIndirectTouchVisual::StartEngage(v91, v90, v92);
              else
                CIndirectTouchVisual::StartHover(v91, v90, v92);
            }
          }
        }
      }
      v93 = 0LL;
      v102[0] = 0LL;
      v94 = *((_DWORD *)this + 76) - 1;
      if ( v94 < 0 )
        goto LABEL_160;
      v95 = (_QWORD *)((char *)this + 280);
      v96 = 16LL * v94;
      do
      {
        if ( *(_DWORD *)(v96 + *v95) == *((_DWORD *)a2 + 2) )
        {
          v93 = *(CMILRefCountBase **)(v96 + *v95 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v94);
        }
        v96 -= 16LL;
        --v94;
      }
      while ( v94 >= 0 );
      v102[0] = v93;
      if ( !v93 )
      {
LABEL_160:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(0LL);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 590;
          goto LABEL_33;
        }
        v93 = v102[0];
        CContactManager::AddToTouchNode(v97, 0LL, v102[0]);
      }
      started = CTouchPressHoldVisual::StartRightTap(v93, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_169;
      CContactManager::RemoveFromTouchNode(v98, 0LL, (struct CVisualProxy **)v93);
      if ( v93 )
        CBaseObject::Release(v93);
      v100 = 598;
    }
LABEL_28:
    v22 = started;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v100, 0LL);
    goto LABEL_169;
  }
  if ( v11 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimation(this, v24, 2LL, (char *)a2 + 12, &v104, 0LL);
    }
  }
  else
  {
    if ( !v11 )
    {
      v101 = 0LL;
      v12 = 4LL;
      goto LABEL_168;
    }
    v13 = v11 - 1;
    if ( !v13 )
    {
      v101 = 0LL;
      goto LABEL_168;
    }
    v14 = (CContactManager *)(unsigned int)(v13 - 1);
    if ( !(_DWORD)v14 )
    {
      if ( (v5 & 0x80000000) == 0 )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          v14,
          *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v23,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v5),
                  0LL);
        started = Touch;
        if ( Touch < 0 )
        {
          v100 = 460;
          goto LABEL_33;
        }
      }
      v101 = 0LL;
      v12 = 6LL;
      goto LABEL_168;
    }
    v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        if ( (v5 & 0x80000000) == 0 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
            v15,
            *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
          *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
          Touch = CContactManager::StartPenBarrelVisual(
                    v16,
                    (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v5),
                    0LL);
          started = Touch;
          if ( Touch < 0 )
          {
            v100 = 503;
LABEL_33:
            v22 = Touch;
            goto LABEL_34;
          }
        }
        v101 = 0LL;
        v12 = 7LL;
LABEL_168:
        CContactManager::StartStationaryAnimation(this, *((unsigned int *)a2 + 2), v12, (char *)a2 + 12, v101, 0LL);
        goto LABEL_169;
      }
LABEL_47:
      started = -2147024809;
      goto LABEL_169;
    }
    if ( (v5 & 0x80000000) != 0 )
      goto LABEL_47;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v15,
      *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 8));
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 8) = 0LL;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v18,
      *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
    Touch = CreateTouchVisual<CPenPressHoldVisual>(0LL);
    started = Touch;
    if ( Touch < 0 )
    {
      v100 = 483;
      goto LABEL_33;
    }
    CContactManager::AddToTouchNode(v19, 0LL, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
    started = CPenPressHoldVisual::Start(
                *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16),
                (const struct tagPOINT *)((char *)a2 + 12));
    if ( started < 0 )
    {
      CContactManager::RemoveFromTouchNode(
        v20,
        0LL,
        *(struct CVisualProxy ***)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
      v21 = *(CBaseObject **)(*((_QWORD *)this + 11) + 40LL * v5 + 16);
      if ( v21 )
      {
        CBaseObject::Release(v21);
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
      }
      v100 = 490;
      goto LABEL_28;
    }
  }
LABEL_169:
  CContactManager::CleanupFinishedAnimations(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)started;
}
