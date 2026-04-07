/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x1800029F4 (-StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryV.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800130EC (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18004F2C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18005ECD4 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18005ED24 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F15C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088DF8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800A81AC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800A8274 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800A840C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800A8780 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800A883C (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800A8C80 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800A9554 (-_RemoveForcedPressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B848C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B85E8 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BBD38 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BC2D0 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD3C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD530 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD684 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1800E0C90 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int started; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // esi
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
  CPressTapVisual *v36; // r14
  struct tagRECT *v37; // r8
  CContactManager *v38; // rcx
  __int64 v39; // rdx
  CBaseObject *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // edx
  int v43; // esi
  unsigned int v44; // eax
  CContactManager *v45; // rcx
  CBaseObject *v46; // rcx
  CContactManager *v47; // rcx
  __int64 v48; // r14
  struct CTouchVisual *v49; // rdx
  __int64 v50; // rax
  CBaseObject **v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // r9d
  __int64 v56; // rax
  CContactManager *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  CBaseObject *v62; // rsi
  int v63; // ebx
  _QWORD *v64; // r12
  __int64 v65; // r14
  CContactManager *v66; // rcx
  CContactManager *v67; // rcx
  __int64 v68; // r14
  CContactManager *v69; // rcx
  CBaseObject *v70; // rcx
  CContactManager *v71; // rcx
  CContactManager *v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // edx
  int v75; // eax
  CContactManager *v76; // rcx
  __int64 v77; // r14
  struct CTouchVisual *v78; // rdx
  __int64 v79; // rax
  CBaseObject **v80; // rdx
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // r9d
  __int64 v85; // rax
  CContactManager *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  CBaseObject *v91; // rsi
  int v92; // ebx
  _QWORD *v93; // r12
  __int64 v94; // r14
  CContactManager *v95; // rcx
  CContactManager *v96; // rcx
  unsigned int v98; // [rsp+20h] [rbp-40h]
  unsigned __int64 v99; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v100[2]; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v101; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v102; // [rsp+58h] [rbp-8h]

  v102 = &CDesktopManager::s_csDwmInstance;
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
  v101.top = v9 - 25;
  v101.bottom = v9 + 25;
  v10 = *((_DWORD *)a2 + 3);
  v101.left = v10 - 25;
  v101.right = v10 + 25;
  v99 = 0LL;
  GetDesktopID(1LL, &v99);
  v11 = *((_DWORD *)a2 + 1);
  v12 = 5LL;
  if ( v11 > 5 )
  {
    v25 = v11 - 6;
    if ( !v25 )
    {
      CContactManager::CancelStationaryAnimationsInRadius(this, 2LL, (char *)a2 + 12);
      CContactManager::CancelStationaryAnimationsInRadius(this, 1LL, (char *)a2 + 12);
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
          v100[0] = 0LL;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( (v6 & 0x80000000) == 0 )
          {
            v30 = 104LL * v6;
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
          Touch = CreateTouchVisual<CPressTapVisual>(v99);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 759;
            goto LABEL_33;
          }
          v36 = v100[0];
          CContactManager::AddToTouchNode(v35, v99, v100[0]);
          if ( (v6 & 0x80000000) != 0 )
            v37 = &v101;
          else
            v37 = (struct tagRECT *)(104LL * v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      v36,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v37,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v38, v99, v36);
            if ( v36 )
              CBaseObject::Release(v36);
            v98 = 775;
            goto LABEL_28;
          }
          if ( (v6 & 0x80000000) == 0 )
          {
            v39 = 104LL * v6;
            *(_QWORD *)(*((_QWORD *)this + 7) + v39 + 88) = v36;
            v40 = *(CBaseObject **)(*((_QWORD *)this + 7) + v39 + 88);
LABEL_65:
            CBaseObject::AddRef(v40);
LABEL_69:
            if ( !v36 )
              goto LABEL_170;
            v46 = v36;
            goto LABEL_128;
          }
          v100[0] = v36;
          v41 = *((_DWORD *)this + 44);
          v42 = v41 + 1;
          if ( v41 + 1 < v41 )
          {
            v43 = -2147024362;
            v44 = 183;
          }
          else
          {
            if ( v42 <= *((_DWORD *)this + 43) )
            {
              *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * v41) = v36;
              *((_DWORD *)this + 44) = v42;
LABEL_64:
              v40 = v36;
              goto LABEL_65;
            }
            v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, v100);
            if ( v43 >= 0 )
              goto LABEL_64;
            v44 = 194;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, v44, 0LL);
          CContactManager::StopAndRemoveFromRootNode(v45, v36);
          goto LABEL_69;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( (v6 & 0x80000000) == 0 )
        {
          v48 = 104LL * v6;
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
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v99, v51);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v98 = 678;
                      goto LABEL_33;
                    }
                    CContactManager::AddToTouchNode(
                      (CContactManager *)(104LL * v6),
                      v99,
                      *(struct CVisual **)(104LL * v6 + *((_QWORD *)this + 7) + 48));
                  }
                  v52 = 104LL * v6;
                  v53 = *((_QWORD *)this + 7);
                  v54 = *(_QWORD *)(v52 + v53 + 48);
                  if ( *((_BYTE *)this + 324) )
                    v55 = -5;
                  else
                    v55 = *(_DWORD *)(v52 + v53 + 40);
                  CDirectTouchVisual::StartDown(v54, (const struct tagPOINT *)((char *)a2 + 12), &v101, v55);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v48 + v50 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v99);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v98 = 688;
                    goto LABEL_33;
                  }
                  v56 = *((_QWORD *)this + 7);
                  v57 = *(CContactManager **)(v56 + v48 + 56);
                  *((_DWORD *)v57 + 86) = *(_DWORD *)(v56 + 104LL * v6);
                  CContactManager::AddToTouchNode(v57, v99, *(struct CVisual **)(*((_QWORD *)this + 7) + v48 + 56));
                }
                v58 = *((_QWORD *)this + 7);
                v59 = v48 + v58 + 8;
                v60 = *(_QWORD *)(v58 + v48 + 56);
                v61 = *(unsigned int *)(v58 + v48 + 40);
                if ( *(_DWORD *)(v58 + v48 + 4) )
                  CIndirectTouchVisual::StartEngage(v60, v59, v61);
                else
                  CIndirectTouchVisual::StartHover(v60, v59, v61);
              }
            }
          }
        }
        v62 = 0LL;
        v100[0] = 0LL;
        v63 = *((_DWORD *)this + 76) - 1;
        if ( v63 < 0 )
          goto LABEL_102;
        v64 = (_QWORD *)((char *)this + 280);
        v65 = 16LL * v63;
        do
        {
          if ( *(_DWORD *)(v65 + *v64) == *((_DWORD *)a2 + 2) )
          {
            v62 = *(CBaseObject **)(v65 + *v64 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v63);
          }
          v65 -= 16LL;
          --v63;
        }
        while ( v63 >= 0 );
        v100[0] = v62;
        if ( !v62 )
        {
LABEL_102:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v99);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 718;
            goto LABEL_33;
          }
          v62 = v100[0];
          CContactManager::AddToTouchNode(v66, v99, v100[0]);
        }
        started = CTouchPressHoldVisual::StartAbort(v62, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_170;
        CContactManager::RemoveFromTouchNode(v67, v99, v62);
        if ( v62 )
          CBaseObject::Release(v62);
        v98 = 726;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
          v100[0] = (CBaseObject *)*((unsigned int *)a2 + 2);
          v100[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v99);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 620;
            goto LABEL_33;
          }
          CContactManager::AddToTouchNode(v71, v99, v100[1]);
          started = CTouchPressHoldVisual::StartHold(v100[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v73 = *((_DWORD *)this + 68);
            v74 = v73 + 1;
            if ( v73 + 1 < v73 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
              started = -2147024362;
            }
            else
            {
              started = 0;
              if ( v74 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16LL * v73) = *(_OWORD *)v100;
                *((_DWORD *)this + 68) = v74;
                goto LABEL_170;
              }
              v75 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 16, 1, v100);
              started = v75;
              if ( v75 >= 0 )
                goto LABEL_170;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0xC2u, 0LL);
            }
          }
          CContactManager::RemoveFromTouchNode(v72, v99, v100[1]);
          v46 = v100[1];
          if ( !v100[1] )
            goto LABEL_170;
LABEL_128:
          CBaseObject::Release(v46);
          goto LABEL_170;
        }
        if ( (v6 & 0x80000000) != 0 )
          goto LABEL_47;
        v68 = 104LL * v6;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v68 + 4) != 1 )
          goto LABEL_47;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v99);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 644;
          goto LABEL_33;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v68 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_170;
        CContactManager::RemoveFromTouchNode(v69, v99, *(struct CVisual **)(*((_QWORD *)this + 7) + v68 + 64));
        v70 = *(CBaseObject **)(*((_QWORD *)this + 7) + v68 + 64);
        if ( v70 )
        {
          CBaseObject::Release(v70);
          *(_QWORD *)(*((_QWORD *)this + 7) + v68 + 64) = 0LL;
        }
        v98 = 650;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
      {
        CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( (v6 & 0x80000000) == 0 )
      {
        v77 = 104LL * v6;
        v78 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v77 + 64);
        if ( v78 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v76, v78);
          *(_QWORD *)(*((_QWORD *)this + 7) + v77 + 64) = 0LL;
          v79 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v79 + v77 + 88) )
          {
            if ( *(_BYTE *)(v79 + v77 + 97) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v79 + v77 + 40) )
              {
                v80 = (CBaseObject **)(v77 + v79 + 48);
                if ( !*v80 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v99, v80);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v98 = 550;
                    goto LABEL_33;
                  }
                  CContactManager::AddToTouchNode(
                    (CContactManager *)(104LL * v6),
                    v99,
                    *(struct CVisual **)(104LL * v6 + *((_QWORD *)this + 7) + 48));
                }
                v81 = 104LL * v6;
                v82 = *((_QWORD *)this + 7);
                v83 = *(_QWORD *)(v81 + v82 + 48);
                if ( *((_BYTE *)this + 324) )
                  v84 = -5;
                else
                  v84 = *(_DWORD *)(v81 + v82 + 40);
                CDirectTouchVisual::StartDown(v83, (const struct tagPOINT *)((char *)a2 + 12), &v101, v84);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v77 + v79 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v99);
                started = Touch;
                if ( Touch < 0 )
                {
                  v98 = 560;
                  goto LABEL_33;
                }
                v85 = *((_QWORD *)this + 7);
                v86 = *(CContactManager **)(v85 + v77 + 56);
                *((_DWORD *)v86 + 86) = *(_DWORD *)(v85 + 104LL * v6);
                CContactManager::AddToTouchNode(v86, v99, *(struct CVisual **)(*((_QWORD *)this + 7) + v77 + 56));
              }
              v87 = *((_QWORD *)this + 7);
              v88 = v77 + v87 + 8;
              v89 = *(_QWORD *)(v87 + v77 + 56);
              v90 = *(unsigned int *)(v87 + v77 + 40);
              if ( *(_DWORD *)(v87 + v77 + 4) )
                CIndirectTouchVisual::StartEngage(v89, v88, v90);
              else
                CIndirectTouchVisual::StartHover(v89, v88, v90);
            }
          }
        }
      }
      v91 = 0LL;
      v100[0] = 0LL;
      v92 = *((_DWORD *)this + 76) - 1;
      if ( v92 < 0 )
        goto LABEL_160;
      v93 = (_QWORD *)((char *)this + 280);
      v94 = 16LL * v92;
      do
      {
        if ( *(_DWORD *)(v94 + *v93) == *((_DWORD *)a2 + 2) )
        {
          v91 = *(CBaseObject **)(v94 + *v93 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v92);
        }
        v94 -= 16LL;
        --v92;
      }
      while ( v92 >= 0 );
      v100[0] = v91;
      if ( !v91 )
      {
LABEL_160:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v99);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 590;
          goto LABEL_33;
        }
        v91 = v100[0];
        CContactManager::AddToTouchNode(v95, v99, v100[0]);
      }
      started = CTouchPressHoldVisual::StartRightTap(v91, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_170;
      CContactManager::RemoveFromTouchNode(v96, v99, v91);
      if ( v91 )
        CBaseObject::Release(v91);
      v98 = 598;
    }
LABEL_28:
    v22 = started;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v98, 0LL);
    goto LABEL_170;
  }
  if ( v11 == 5 )
  {
    if ( ((v6 & 0x80000000) != 0 || *(_BYTE *)(104LL * v6 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      v12 = 2LL;
LABEL_169:
      CContactManager::StartStationaryAnimation((__int64)this, v24, v12);
      goto LABEL_170;
    }
    goto LABEL_170;
  }
  if ( !v11 )
  {
    v12 = 4LL;
LABEL_168:
    v24 = *((unsigned int *)a2 + 2);
    goto LABEL_169;
  }
  v13 = v11 - 1;
  if ( !v13 )
    goto LABEL_168;
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
                v99);
      started = Touch;
      if ( Touch < 0 )
      {
        v98 = 460;
        goto LABEL_33;
      }
    }
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
                  v99);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 503;
LABEL_33:
          v22 = Touch;
          goto LABEL_34;
        }
      }
      v12 = 7LL;
      goto LABEL_168;
    }
LABEL_47:
    started = -2147024809;
    goto LABEL_170;
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
  Touch = CreateTouchVisual<CPenPressHoldVisual>(v99);
  started = Touch;
  if ( Touch < 0 )
  {
    v98 = 483;
    goto LABEL_33;
  }
  CContactManager::AddToTouchNode(v19, v99, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v20, v99, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
    v21 = *(CBaseObject **)(*((_QWORD *)this + 11) + 40LL * v5 + 16);
    if ( v21 )
    {
      CBaseObject::Release(v21);
      *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
    }
    v98 = 490;
    goto LABEL_28;
  }
LABEL_170:
  CContactManager::CleanupFinishedAnimations(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)started;
}
