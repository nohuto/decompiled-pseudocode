/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18002C2B4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AAD34 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002B000 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18002B6D4 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18002B7AC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x18002BAA0 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z @ 0x18002D1F8 (-UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x18002D690 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18002FA00 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180030520 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x180070ED8 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180070F50 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x18007FCF0 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18008821C (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18008A690 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z @ 0x18008B2BC (-SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180096528 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x1800AAB10 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B955C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B96C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B9810 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B9B0C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800CE920 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800CEE4C (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800D0D50 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800D0D80 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        int a5,
        unsigned __int8 a6,
        unsigned __int64 a7)
{
  int v8; // r8d
  unsigned int v9; // r14d
  unsigned int i; // edx
  int v13; // esi
  CContactManager *v14; // rcx
  unsigned int *v15; // rdi
  CDirectTouchVisual *v16; // rcx
  struct CVisual **v17; // rsi
  __int64 v18; // rcx
  CTouchDragVisual *v19; // rcx
  struct tagRECT *v20; // rax
  CDirectTouchVisual *v21; // rcx
  CIndirectTouchVisual *v22; // rcx
  CTetherVisual *v23; // rcx
  int v25; // edi
  int Touch; // eax
  CContactManager *v27; // rcx
  CContactManager *v28; // rcx
  CDirectTouchVisual *v29; // rcx
  CBaseObject *v30; // rcx
  int v31; // r15d
  __int64 v32; // rdx
  CBaseObject *v33; // r13
  struct tagRECT *v34; // r12
  unsigned int v35; // r12d
  __int64 v36; // rdx
  struct tagRECT *v37; // rsi
  CContactManager *v38; // rcx
  CDirectTouchVisual *v39; // rcx
  CBaseObject *v40; // rsi
  char v41; // al
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // al
  CIndirectTouchVisual *v47; // rcx
  struct tagRECT *v48; // r8
  __int64 v49; // r10
  __int64 v50; // rax
  unsigned int v51; // edx
  int v52; // r15d
  int v53; // eax
  CContactManager *v54; // rcx
  CBaseObject *v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // r8d
  int v58; // esi
  int v59; // eax
  CContactManager *v60; // rcx
  bool v61; // si
  CTouchPressHoldVisual *v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // edx
  int v65; // esi
  int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // edx
  int v69; // eax
  unsigned int v70; // r9d
  CMILRefCountBase *v71; // rcx
  CBaseObject *v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // r8d
  int v75; // esi
  int v76; // eax
  CContactManager *v77; // rcx
  CBaseObject *v78; // rcx
  CContactManager *v79; // rcx
  unsigned int v80; // eax
  unsigned int v81; // edx
  CBaseObject *v82; // rcx
  void *v83; // rdx
  unsigned int v84; // [rsp+20h] [rbp-D1h]
  char v85; // [rsp+40h] [rbp-B1h]
  struct tagPOINT v86; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v87; // [rsp+50h] [rbp-A1h]
  struct tagRECT *v88[2]; // [rsp+58h] [rbp-99h] BYREF
  unsigned int v89; // [rsp+68h] [rbp-89h]
  _DWORD v90[2]; // [rsp+70h] [rbp-81h] BYREF
  struct tagPOINT v91; // [rsp+78h] [rbp-79h]
  struct tagPOINT v92; // [rsp+80h] [rbp-71h]
  __int128 v93; // [rsp+88h] [rbp-69h]
  unsigned int v94; // [rsp+98h] [rbp-59h]
  struct CVisual *v95[2]; // [rsp+A0h] [rbp-51h]
  __int64 v96; // [rsp+B0h] [rbp-41h]
  __int64 v97; // [rsp+B8h] [rbp-39h]
  __int64 v98; // [rsp+C0h] [rbp-31h]
  __int64 v99; // [rsp+C8h] [rbp-29h]
  char v100; // [rsp+D0h] [rbp-21h]
  char v101; // [rsp+D1h] [rbp-20h]

  v88[0] = a4;
  v8 = -1;
  v87 = a1;
  v9 = 0;
  v89 = -1;
  v86 = a3;
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    if ( *(_DWORD *)(104LL * i + *(_QWORD *)(a1 + 56)) == a2 )
    {
      v8 = i;
      v89 = i;
      break;
    }
  }
  v13 = a5;
  v14 = (CContactManager *)(a6 & 0x80);
  if ( (a6 & 0x80) == 0 && a5 == 1 )
  {
    v13 = 3;
    v14 = (CContactManager *)(a6 & 0x80);
  }
  if ( v8 < 0 )
  {
    v25 = a6 & 0x80;
    if ( v13 != 2 )
    {
      if ( v13 != 1 )
        return v9;
      v25 = (int)v14;
      if ( (a6 & 0x80) == 0 )
        return v9;
    }
    if ( v25 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_37;
      v83 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_37;
      v83 = &UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0q_EtwEventWriteTransfer(v14, v83, a2);
LABEL_37:
    memset_0(v90, 0, 0x68uLL);
    v91 = a3;
    v92 = a3;
    v94 = -1;
    v90[0] = a2;
    v90[1] = v13 == 2;
    *(_OWORD *)v95 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    v96 = 0LL;
    v99 = 0LL;
    v100 = 0;
    v93 = (__int128)*v88[0];
    if ( v25 )
    {
      v101 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7);
      v9 = Touch;
      if ( Touch < 0 )
      {
        v84 = 1382;
        goto LABEL_40;
      }
      *((_DWORD *)v95[1] + 94) = a2;
      CContactManager::AddToTouchNode(v27, a7, v95[1]);
      if ( v13 == 1 )
        CIndirectTouchVisual::StartHover(v95[1], &v86, v94);
      else
        CIndirectTouchVisual::StartEngage(v95[1], &v86, v94);
    }
    else
    {
      v101 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7);
      v9 = Touch;
      if ( Touch < 0 )
      {
        v84 = 1376;
        goto LABEL_40;
      }
      CContactManager::AddToTouchNode(v38, a7, v95[0]);
      CDirectTouchVisual::StartDown(v95[0], &v86, v88[0], v94);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(a1 + 56, v90);
    return v9;
  }
  v15 = (unsigned int *)(*(_QWORD *)(a1 + 56) + 104LL * (unsigned int)v8);
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      if ( !*((_BYTE *)v15 + 97) )
        goto LABEL_25;
      if ( *((_BYTE *)v15 + 96) )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v14, *((struct CTouchVisual **)v15 + 10));
        *((_QWORD *)v15 + 10) = 0LL;
        *((_BYTE *)v15 + 96) = 0;
      }
      if ( *(_BYTE *)(a1 + 324) )
        goto LABEL_25;
      if ( *((_QWORD *)v15 + 9) )
        goto LABEL_25;
      if ( *((_QWORD *)v15 + 11) )
        goto LABEL_25;
      if ( *((_QWORD *)v15 + 8) )
        goto LABEL_25;
      if ( !v15[10] )
        goto LABEL_25;
      v16 = (CDirectTouchVisual *)*((_QWORD *)v15 + 6);
      if ( v16 )
      {
        if ( CDirectTouchVisual::IsInInitialDelay(v16) )
          goto LABEL_25;
      }
      v17 = (struct CVisual **)(v15 + 20);
      if ( *((_QWORD *)v15 + 10)
        || (v18 = (a3.x - v15[4]) * (a3.x - v15[4]) + (v86.y - v15[5]) * (v86.y - v15[5]),
            (int)v18 <= (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 225.0)) )
      {
LABEL_23:
        v19 = (CTouchDragVisual *)*((_QWORD *)v15 + 10);
        if ( v19 )
        {
          CTouchDragVisual::NotifyTouchDrag(v19, &v86);
          a3 = v86;
        }
LABEL_25:
        v20 = v88[0];
        v21 = (CDirectTouchVisual *)*((_QWORD *)v15 + 6);
        *((struct tagPOINT *)v15 + 1) = a3;
        *(struct tagRECT *)(v15 + 6) = *v20;
        if ( v21 )
          CDirectTouchVisual::UpdateLocation(v21, &v86, v20);
        v22 = (CIndirectTouchVisual *)*((_QWORD *)v15 + 7);
        if ( v22 )
        {
          if ( v15[1] == 1 )
          {
            CIndirectTouchVisual::UpdateLocation(v22, &v86);
          }
          else
          {
            CIndirectTouchVisual::StartEngage(v22, &v86, v15[10]);
            v15[1] = 1;
          }
        }
        v23 = (CTetherVisual *)*((_QWORD *)v15 + 9);
        if ( v23 )
          CTetherVisual::UpdatePosition(v23, 0LL, &v86);
        return v9;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v18, &UdwmTouchDragVisual_Start, a2);
      Touch = CreateTouchVisual<CTouchDragVisual>(a7, (CBaseObject **)v15 + 10);
      v9 = Touch;
      if ( Touch < 0 )
      {
        v84 = 1166;
      }
      else
      {
        CTouchDragVisual::UpdateShowContact(*v17, v15[10]);
        Touch = CContactManager::AddToTouchNode(v28, a7, *v17);
        v9 = Touch;
        if ( Touch < 0 )
        {
          v84 = 1168;
        }
        else
        {
          Touch = CTouchDragVisual::SetContactManager(*v17, (struct CContactManager *)a1);
          v9 = Touch;
          if ( Touch >= 0 )
          {
            v29 = (CDirectTouchVisual *)*((_QWORD *)v15 + 6);
            *((_BYTE *)v15 + 96) = 0;
            if ( v29 )
              CDirectTouchVisual::FadeOut(v29);
            goto LABEL_23;
          }
          v84 = 1169;
        }
      }
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, v84, 0LL);
      return v9;
    }
    if ( v13 != 3 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x53Du, 0LL);
      return v9;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v14, &UdwmTouchUpReceived_Info, a2);
    CContactManager::CleanupFinishedAnimations((CContactManager *)a1);
    v31 = -2147024362;
    if ( *((_BYTE *)v15 + 97) )
    {
      v39 = (CDirectTouchVisual *)*((_QWORD *)v15 + 6);
      if ( !v39 || (v85 = 1, !CDirectTouchVisual::IsInInitialDelay(v39)) )
        v85 = 0;
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v39, v39);
      v40 = (CBaseObject *)v87;
      v41 = CContactManager::CheckShowContact(v87, v15[10], 2LL);
      v42 = 0LL;
      if ( !v41
        || !v15[1]
        || *((_QWORD *)v15 + 10) && (unsigned __int8)CContactManager::CheckShowContact(v30, v15[10], 4LL) )
      {
        v33 = v30;
      }
      else
      {
        if ( *((_QWORD *)v15 + 8) == v42
          && *((_QWORD *)v15 + 11) == v42
          && (int)CContactManager::FindStationaryAnimation(v87, a2, 2LL) < 0
          && (int)CContactManager::FindStationaryAnimation(v87, v43, 3LL) < 0 )
        {
          v46 = (unsigned __int8)CContactManager::CheckShowContact(v87, v15[10], 1LL) && !v85 ? 0 : v45;
          Touch = CContactManager::StartStationaryAnimationWithDelay(v44, a2, v45, &v86, v88[0], a7, v46);
          v9 = Touch;
          if ( Touch < 0 )
          {
            v84 = 1247;
            goto LABEL_40;
          }
        }
        v33 = v40;
      }
    }
    else
    {
      v32 = *((_QWORD *)v15 + 7);
      v33 = (CBaseObject *)v87;
      if ( v32 )
      {
        v88[0] = *((struct tagRECT **)v15 + 7);
        v56 = *(_DWORD *)(v87 + 176);
        v57 = v56 + 1;
        if ( v56 + 1 >= v56 )
        {
          v58 = 0;
          if ( v57 > *(_DWORD *)(v87 + 172) )
          {
            v59 = DynArrayImpl<0>::AddMultipleAndSet(v87 + 152, 8, 1, v88);
            v58 = v59;
            if ( v59 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, 0xBEu, 0LL);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v87 + 152) + 8LL * *(unsigned int *)(v87 + 176)) = v32;
            *((_DWORD *)v33 + 44) = v57;
          }
        }
        else
        {
          v58 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        }
        v60 = (CContactManager *)*((_QWORD *)v15 + 7);
        if ( v58 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v60, *((struct CTouchVisual **)v15 + 7));
        }
        else
        {
          CMILRefCountBase::AddRef(v60);
          CIndirectTouchVisual::StartIdle(*((_QWORD *)v15 + 7), &v86, v15[10]);
        }
        v30 = (CBaseObject *)*((_QWORD *)v15 + 7);
        if ( v30 )
          CBaseObject::Release(v30);
      }
    }
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v30, *((struct CTouchVisual **)v15 + 10));
    v34 = (struct tagRECT *)*((_QWORD *)v15 + 8);
    if ( !v34 )
    {
      v35 = 179;
      goto LABEL_55;
    }
    v61 = 0;
    if ( CTouchPressHoldVisual::IsHolding(*((CTouchPressHoldVisual **)v15 + 8)) )
    {
      v88[0] = (struct tagRECT *)*v15;
      v63 = *((unsigned int *)v33 + 76);
      v88[1] = v34;
      v64 = v63 + 1;
      if ( (int)v63 + 1 >= (unsigned int)v63 )
      {
        v65 = 0;
        if ( v64 > *((_DWORD *)v33 + 75) )
        {
          v66 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33 + 280, 16, 1, v88);
          v65 = v66;
          if ( v66 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0xBEu, 0LL);
        }
        else
        {
          *(_OWORD *)(*((_QWORD *)v33 + 35) + 16 * v63) = *(_OWORD *)v88;
          *((_DWORD *)v33 + 76) = v64;
        }
        v35 = 179;
      }
      else
      {
        v35 = 179;
        v65 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      }
      v61 = v65 >= 0;
      goto LABEL_133;
    }
    if ( v34[16].left != 1 && !CTouchPressHoldVisual::IsOKToCleanup(v62) )
    {
      v88[0] = v34;
      v67 = *((_DWORD *)v33 + 44);
      v68 = v67 + 1;
      if ( v67 + 1 < v67 )
      {
        v35 = 179;
        v69 = -2147024362;
        v70 = 179;
LABEL_137:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v69, v70, 0LL);
LABEL_133:
        v71 = (CMILRefCountBase *)*((_QWORD *)v15 + 8);
        if ( v61 )
          CMILRefCountBase::AddRef(v71);
        else
          CContactManager::StopAndRemoveFromRootNode(v71, *((struct CTouchVisual **)v15 + 8));
        v72 = (CBaseObject *)*((_QWORD *)v15 + 8);
        if ( v72 )
          CBaseObject::Release(v72);
LABEL_55:
        v36 = *((_QWORD *)v15 + 9);
        if ( v36 )
        {
          v88[0] = *((struct tagRECT **)v15 + 9);
          v73 = *((_DWORD *)v33 + 44);
          v74 = v73 + 1;
          if ( v73 + 1 >= v73 )
          {
            v75 = 0;
            if ( v74 > *((_DWORD *)v33 + 43) )
            {
              v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33 + 152, 8, 1, v88);
              v75 = v76;
              if ( v76 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v76, 0xBEu, 0LL);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v33 + 19) + 8LL * *((unsigned int *)v33 + 44)) = v36;
              *((_DWORD *)v33 + 44) = v74;
            }
          }
          else
          {
            v75 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
          }
          v77 = (CContactManager *)*((_QWORD *)v15 + 9);
          if ( v75 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v77, *((struct CTouchVisual **)v15 + 9));
          }
          else
          {
            CMILRefCountBase::AddRef(v77);
            CTetherVisual::SnapToAnchor(*((CTetherVisual **)v15 + 9));
          }
          v78 = (CBaseObject *)*((_QWORD *)v15 + 9);
          if ( v78 )
            CBaseObject::Release(v78);
        }
        v37 = (struct tagRECT *)*((_QWORD *)v15 + 11);
        if ( !v37 )
          goto LABEL_57;
        if ( !CPressTapVisual::IsOKToCleanup(*((CPressTapVisual **)v15 + 11)) )
        {
          v88[0] = v37;
          v80 = *((_DWORD *)v33 + 44);
          v81 = v80 + 1;
          if ( v80 + 1 >= v80 )
          {
            if ( v81 <= *((_DWORD *)v33 + 43) )
            {
              *(_QWORD *)(*((_QWORD *)v33 + 19) + 8LL * v80) = v37;
              *((_DWORD *)v33 + 44) = v81;
LABEL_156:
              CMILRefCountBase::AddRef(*((CMILRefCountBase **)v15 + 11));
              goto LABEL_161;
            }
            v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33 + 152, 8, 1, v88);
            if ( v31 >= 0 )
              goto LABEL_156;
            v35 = 190;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, v35, 0LL);
        }
        CContactManager::StopAndRemoveFromRootNode(v79, *((struct CTouchVisual **)v15 + 11));
LABEL_161:
        v82 = (CBaseObject *)*((_QWORD *)v15 + 11);
        if ( v82 )
          CBaseObject::Release(v82);
LABEL_57:
        DynArray<CTouchContact,0>::RemoveAt((__int64 *)v33 + 7, v89);
        return v9;
      }
      if ( v68 > *((_DWORD *)v33 + 43) )
      {
        v69 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33 + 152, 8, 1, v88);
        if ( v69 < 0 )
        {
          v70 = 190;
          v35 = 179;
          goto LABEL_137;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v33 + 19) + 8LL * *((unsigned int *)v33 + 44)) = v34;
        *((_DWORD *)v33 + 44) = v68;
      }
      v61 = 1;
    }
    v35 = 179;
    goto LABEL_133;
  }
  v47 = (CIndirectTouchVisual *)*((_QWORD *)v15 + 7);
  if ( v47 )
  {
    if ( v15[1] )
    {
      CIndirectTouchVisual::StartHover(v47, &v86, v15[10]);
      v48 = (struct tagRECT *)*((_QWORD *)v15 + 9);
      v15[1] = 0;
      if ( v48 )
      {
        v49 = a1 + 152;
        v88[0] = v48;
        v50 = *(unsigned int *)(a1 + 176);
        v51 = v50 + 1;
        if ( (int)v50 + 1 >= (unsigned int)v50 )
        {
          v52 = 0;
          if ( v51 > *(_DWORD *)(v49 + 20) )
          {
            v53 = DynArrayImpl<0>::AddMultipleAndSet(v49, 8, 1, v88);
            v52 = v53;
            if ( v53 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0xBEu, 0LL);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)v49 + 8 * v50) = v48;
            *(_DWORD *)(v49 + 24) = v51;
          }
        }
        else
        {
          v52 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        }
        v54 = (CContactManager *)*((_QWORD *)v15 + 9);
        if ( v52 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v54, *((struct CTouchVisual **)v15 + 9));
        }
        else
        {
          CMILRefCountBase::AddRef(v54);
          CTetherVisual::SnapToAnchor(*((CTetherVisual **)v15 + 9));
        }
        v55 = (CBaseObject *)*((_QWORD *)v15 + 9);
        if ( v55 )
        {
          CBaseObject::Release(v55);
          *((_QWORD *)v15 + 9) = 0LL;
        }
      }
    }
    else
    {
      CIndirectTouchVisual::UpdateLocation(v47, &v86);
    }
  }
  return v9;
}
