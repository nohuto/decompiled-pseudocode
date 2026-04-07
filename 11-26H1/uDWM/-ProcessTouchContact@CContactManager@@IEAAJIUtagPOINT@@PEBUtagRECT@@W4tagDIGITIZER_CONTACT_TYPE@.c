/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800122A4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800A8F38 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180002DDC (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800032EC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x180011CDC (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z @ 0x180012EE8 (-UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18005ECAC (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18005ED24 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F15C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18005F198 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x180070C90 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800734BC (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z @ 0x180079464 (-SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800796A4 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088DF8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x1800A8D10 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B848C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B85E8 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B8738 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B8A2C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800C88CC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800C8B90 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800CD2FC (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800CD330 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  unsigned int v8; // esi
  unsigned int v9; // edx
  __int64 v11; // rax
  int v12; // edi
  int v13; // ebx
  unsigned int *v14; // rbx
  CDirectTouchVisual *v15; // rcx
  struct CVisual **v16; // rdi
  __int64 v17; // rcx
  CTouchDragVisual *v18; // rcx
  CDirectTouchVisual *v19; // rcx
  const struct tagRECT *v20; // rax
  CIndirectTouchVisual *v21; // rcx
  CTetherVisual *v22; // rcx
  int Touch; // eax
  CContactManager *v25; // rcx
  CContactManager *v26; // rcx
  CDirectTouchVisual *v27; // rcx
  CContactManager *v28; // rcx
  int v29; // r12d
  CDirectTouchVisual *v30; // rcx
  bool v31; // r12
  char v32; // al
  __int64 v33; // r9
  __int64 v34; // rdx
  struct tagRECT *v35; // r15
  __int64 v36; // rdx
  struct tagRECT *v37; // r14
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rcx
  unsigned int v42; // r8d
  char v43; // al
  CContactManager *v44; // rcx
  CIndirectTouchVisual *v45; // rcx
  struct tagRECT *v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // edx
  int v49; // eax
  CContactManager *v50; // rcx
  CBaseObject *v51; // rcx
  int v52; // eax
  CContactManager *v53; // rcx
  bool v54; // r14
  CTouchPressHoldVisual *v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // edx
  int v58; // r14d
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // edx
  int v62; // eax
  unsigned int v63; // r9d
  CBaseObject *v64; // rcx
  CBaseObject *v65; // rcx
  unsigned int v66; // eax
  unsigned int v67; // r8d
  int v68; // eax
  CContactManager *v69; // rcx
  CBaseObject *v70; // rcx
  CContactManager *v71; // rcx
  unsigned int v72; // eax
  unsigned int v73; // edx
  CBaseObject *v74; // rcx
  unsigned int v75; // [rsp+20h] [rbp-C1h]
  struct tagPOINT v76; // [rsp+40h] [rbp-A1h] BYREF
  struct tagRECT *v77[2]; // [rsp+48h] [rbp-99h] BYREF
  unsigned int v78; // [rsp+58h] [rbp-89h]
  unsigned int v79; // [rsp+5Ch] [rbp-85h]
  _DWORD v80[2]; // [rsp+60h] [rbp-81h] BYREF
  struct tagPOINT v81; // [rsp+68h] [rbp-79h]
  struct tagPOINT v82; // [rsp+70h] [rbp-71h]
  __int128 v83; // [rsp+78h] [rbp-69h]
  unsigned int v84; // [rsp+88h] [rbp-59h]
  struct CVisual *v85[2]; // [rsp+90h] [rbp-51h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-41h]
  __int64 v87; // [rsp+A8h] [rbp-39h]
  __int64 v88; // [rsp+B0h] [rbp-31h]
  __int64 v89; // [rsp+B8h] [rbp-29h]
  char v90; // [rsp+C0h] [rbp-21h]
  char v91; // [rsp+C1h] [rbp-20h]

  v77[0] = a4;
  v8 = 0;
  v76 = a3;
  v9 = 0;
  v78 = -1;
  while ( v9 < *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(104LL * v9 + *(_QWORD *)(a1 + 56)) == a2 )
    {
      v11 = v9;
      v78 = v9;
      goto LABEL_5;
    }
    ++v9;
  }
  v11 = v78;
LABEL_5:
  v12 = a5;
  v13 = a6 & 0x80;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v12 = 3;
  if ( (int)v11 < 0 )
  {
    if ( v12 != 2 )
    {
      if ( v12 != 1 || (a6 & 0x80) == 0 )
        return v8;
      v13 = a6 & 0x80;
    }
    if ( v13 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      {
        McTemplateU0q_EtwEventWriteTransfer(128LL, &UdwmIndirectTouchVisual_Received_Info, a2);
        v13 = a6 & 0x80;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0q_EtwEventWriteTransfer(128LL, &UdwmDirectTouchDownAnimation_Start, a2);
    }
    memset_0(v80, 0, 0x68uLL);
    v80[0] = a2;
    v84 = -1;
    v80[1] = v12 == 2;
    v81 = v76;
    v82 = v76;
    *(_OWORD *)v85 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v86 = 0LL;
    v89 = 0LL;
    v90 = 0;
    v83 = (__int128)*v77[0];
    if ( v13 )
    {
      v91 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7);
      v8 = Touch;
      if ( Touch < 0 )
      {
        v75 = 1382;
        goto LABEL_69;
      }
      *((_DWORD *)v85[1] + 86) = a2;
      CContactManager::AddToTouchNode(v44, a7, v85[1]);
      if ( v12 == 1 )
        CIndirectTouchVisual::StartHover(v85[1], &v76, v84);
      else
        CIndirectTouchVisual::StartEngage(v85[1], &v76, v84);
    }
    else
    {
      v91 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7, v85);
      v8 = Touch;
      if ( Touch < 0 )
      {
        v75 = 1376;
        goto LABEL_69;
      }
      CContactManager::AddToTouchNode(v25, a7, v85[0]);
      CDirectTouchVisual::StartDown((__int64)v85[0], &v76, v77[0], v84);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(a1 + 56, v80);
    return v8;
  }
  v14 = (unsigned int *)(*(_QWORD *)(a1 + 56) + 104 * v11);
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      if ( !*((_BYTE *)v14 + 97) )
        goto LABEL_25;
      if ( *((_BYTE *)v14 + 96) )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          (CContactManager *)0x80,
          *((struct CTouchVisual **)v14 + 10));
        *((_QWORD *)v14 + 10) = 0LL;
        *((_BYTE *)v14 + 96) = 0;
      }
      if ( *(_BYTE *)(a1 + 324) )
        goto LABEL_25;
      if ( *((_QWORD *)v14 + 9) )
        goto LABEL_25;
      if ( *((_QWORD *)v14 + 11) )
        goto LABEL_25;
      if ( *((_QWORD *)v14 + 8) )
        goto LABEL_25;
      if ( !v14[10] )
        goto LABEL_25;
      v15 = (CDirectTouchVisual *)*((_QWORD *)v14 + 6);
      if ( v15 )
      {
        if ( CDirectTouchVisual::IsInInitialDelay(v15) )
          goto LABEL_25;
      }
      v16 = (struct CVisual **)(v14 + 20);
      if ( *((_QWORD *)v14 + 10)
        || (v17 = (v76.x - v14[4]) * (v76.x - v14[4]) + (v76.y - v14[5]) * (v76.y - v14[5]),
            (int)v17 <= (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 225.0)) )
      {
LABEL_23:
        v18 = (CTouchDragVisual *)*((_QWORD *)v14 + 10);
        if ( v18 )
          CTouchDragVisual::NotifyTouchDrag(v18, &v76);
LABEL_25:
        v19 = (CDirectTouchVisual *)*((_QWORD *)v14 + 6);
        *((struct tagPOINT *)v14 + 1) = v76;
        v20 = v77[0];
        *(struct tagRECT *)(v14 + 6) = *v77[0];
        if ( v19 )
          CDirectTouchVisual::UpdateLocation(v19, &v76, v20);
        v21 = (CIndirectTouchVisual *)*((_QWORD *)v14 + 7);
        if ( v21 )
        {
          if ( v14[1] == 1 )
          {
            CIndirectTouchVisual::UpdateLocation(v21, &v76);
          }
          else
          {
            CIndirectTouchVisual::StartEngage(v21, &v76, v14[10]);
            v14[1] = 1;
          }
        }
        v22 = (CTetherVisual *)*((_QWORD *)v14 + 9);
        if ( v22 )
          CTetherVisual::UpdatePosition(v22, 0LL, &v76);
        return v8;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v17, &UdwmTouchDragVisual_Start, a2);
      Touch = CreateTouchVisual<CTouchDragVisual>(a7);
      v8 = Touch;
      if ( Touch < 0 )
      {
        v75 = 1166;
      }
      else
      {
        CTouchDragVisual::UpdateShowContact(*v16, v14[10]);
        Touch = CContactManager::AddToTouchNode(v26, a7, *v16);
        v8 = Touch;
        if ( Touch < 0 )
        {
          v75 = 1168;
        }
        else
        {
          Touch = CTouchDragVisual::SetContactManager(*v16, (struct CContactManager *)a1);
          v8 = Touch;
          if ( Touch >= 0 )
          {
            v27 = (CDirectTouchVisual *)*((_QWORD *)v14 + 6);
            *((_BYTE *)v14 + 96) = 0;
            if ( v27 )
              CDirectTouchVisual::FadeOut(v27);
            goto LABEL_23;
          }
          v75 = 1169;
        }
      }
LABEL_69:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, v75, 0LL);
      return v8;
    }
    if ( v12 != 3 )
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x53Du, 0LL);
      return v8;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(128LL, &UdwmTouchUpReceived_Info, a2);
    CContactManager::CleanupFinishedAnimations((CContactManager *)a1);
    v79 = 194;
    v29 = -2147024362;
    if ( *((_BYTE *)v14 + 97) )
    {
      v30 = (CDirectTouchVisual *)*((_QWORD *)v14 + 6);
      v31 = v30 && CDirectTouchVisual::IsInInitialDelay(v30);
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v30, v30);
      v32 = CContactManager::CheckShowContact(a1, v14[10], 2LL);
      v33 = 0LL;
      if ( v32
        && v14[1]
        && (!*((_QWORD *)v14 + 10) || !(unsigned __int8)CContactManager::CheckShowContact(v28, v14[10], 4LL))
        && *((_QWORD *)v14 + 8) == v33
        && *((_QWORD *)v14 + 11) == v33
        && (int)CContactManager::FindStationaryAnimation(a1, a2, 2LL) < 0
        && (int)CContactManager::FindStationaryAnimation(a1, v34, 3LL) < 0 )
      {
        v43 = (unsigned __int8)CContactManager::CheckShowContact(a1, v14[10], 1LL) && !v31 ? 0 : v42;
        Touch = CContactManager::StartStationaryAnimationWithDelay(
                  v41,
                  a2,
                  v42,
                  (__int64 *)&v76,
                  (__int64)v77[0],
                  a7,
                  v43);
        v8 = Touch;
        if ( Touch < 0 )
        {
          v75 = 1247;
          goto LABEL_69;
        }
      }
      v29 = -2147024362;
LABEL_64:
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v28, *((struct CTouchVisual **)v14 + 10));
      v35 = (struct tagRECT *)*((_QWORD *)v14 + 8);
      if ( !v35 )
        goto LABEL_65;
      v54 = 0;
      if ( CTouchPressHoldVisual::IsHolding(*((CTouchPressHoldVisual **)v14 + 8)) )
      {
        v77[0] = (struct tagRECT *)*v14;
        v56 = *(_DWORD *)(a1 + 304);
        v77[1] = v35;
        v57 = v56 + 1;
        if ( v56 + 1 < v56 )
        {
          v58 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
        }
        else
        {
          v58 = 0;
          if ( v57 > *(_DWORD *)(a1 + 300) )
          {
            v59 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 280, 16LL, 1LL, v77);
            v58 = v59;
            if ( v59 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC2u, 0LL);
          }
          else
          {
            *(_OWORD *)(*(_QWORD *)(a1 + 280) + 16LL * v56) = *(_OWORD *)v77;
            *(_DWORD *)(a1 + 304) = v57;
          }
        }
        v54 = v58 >= 0;
        goto LABEL_133;
      }
      if ( v35[14].left != 1 && !CTouchPressHoldVisual::IsOKToCleanup(v55) )
      {
        v77[0] = v35;
        v60 = *(_DWORD *)(a1 + 176);
        v61 = v60 + 1;
        if ( v60 + 1 < v60 )
        {
          v62 = -2147024362;
          v63 = 183;
        }
        else
        {
          if ( v61 <= *(_DWORD *)(a1 + 172) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * v60) = v35;
            *(_DWORD *)(a1 + 176) = v61;
LABEL_128:
            v54 = 1;
            goto LABEL_133;
          }
          v62 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 8LL, 1LL, v77);
          if ( v62 >= 0 )
            goto LABEL_128;
          v63 = 194;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, v63, 0LL);
      }
LABEL_133:
      v64 = (CBaseObject *)*((_QWORD *)v14 + 8);
      if ( v54 )
        CBaseObject::AddRef(v64);
      else
        CContactManager::StopAndRemoveFromRootNode(v64, *((struct CTouchVisual **)v14 + 8));
      v65 = (CBaseObject *)*((_QWORD *)v14 + 8);
      if ( v65 )
        CBaseObject::Release(v65);
LABEL_65:
      v36 = *((_QWORD *)v14 + 9);
      if ( !v36 )
        goto LABEL_66;
      v77[0] = *((struct tagRECT **)v14 + 9);
      v66 = *(_DWORD *)(a1 + 176);
      v67 = v66 + 1;
      if ( v66 + 1 < v66 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
      }
      else
      {
        if ( v67 <= *(_DWORD *)(a1 + 172) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * v66) = v36;
          *(_DWORD *)(a1 + 176) = v67;
LABEL_141:
          CBaseObject::AddRef(*((CBaseObject **)v14 + 9));
          CTetherVisual::SnapToAnchor(*((CTetherVisual **)v14 + 9));
          goto LABEL_146;
        }
        v68 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 8LL, 1LL, v77);
        if ( v68 >= 0 )
          goto LABEL_141;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xC2u, 0LL);
      }
      CContactManager::StopAndRemoveFromRootNode(v69, *((struct CTouchVisual **)v14 + 9));
LABEL_146:
      v70 = (CBaseObject *)*((_QWORD *)v14 + 9);
      if ( v70 )
        CBaseObject::Release(v70);
LABEL_66:
      v37 = (struct tagRECT *)*((_QWORD *)v14 + 11);
      if ( !v37 )
      {
LABEL_67:
        DynArray<CTouchContact,0>::RemoveAt(a1 + 56, v78);
        return v8;
      }
      if ( !CPressTapVisual::IsOKToCleanup(*((CPressTapVisual **)v14 + 11)) )
      {
        v77[0] = v37;
        v72 = *(_DWORD *)(a1 + 176);
        v73 = v72 + 1;
        if ( v72 + 1 < v72 )
        {
          v79 = 183;
        }
        else
        {
          if ( v73 <= *(_DWORD *)(a1 + 172) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * v72) = v37;
            *(_DWORD *)(a1 + 176) = v73;
LABEL_153:
            CBaseObject::AddRef(*((CBaseObject **)v14 + 11));
            goto LABEL_157;
          }
          v29 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 8LL, 1LL, v77);
          if ( v29 >= 0 )
            goto LABEL_153;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v79, 0LL);
      }
      CContactManager::StopAndRemoveFromRootNode(v71, *((struct CTouchVisual **)v14 + 11));
LABEL_157:
      v74 = (CBaseObject *)*((_QWORD *)v14 + 11);
      if ( v74 )
        CBaseObject::Release(v74);
      goto LABEL_67;
    }
    v38 = *((_QWORD *)v14 + 7);
    if ( !v38 )
      goto LABEL_64;
    v77[0] = *((struct tagRECT **)v14 + 7);
    v39 = *(_DWORD *)(a1 + 176);
    v40 = v39 + 1;
    if ( v39 + 1 < v39 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
    }
    else
    {
      if ( v40 <= *(_DWORD *)(a1 + 172) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * v39) = v38;
        *(_DWORD *)(a1 + 176) = v40;
LABEL_74:
        CBaseObject::AddRef(*((CBaseObject **)v14 + 7));
        CIndirectTouchVisual::StartIdle(*((_QWORD *)v14 + 7), &v76, v14[10]);
        goto LABEL_113;
      }
      v52 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 8LL, 1LL, v77);
      if ( v52 >= 0 )
        goto LABEL_74;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xC2u, 0LL);
    }
    CContactManager::StopAndRemoveFromRootNode(v53, *((struct CTouchVisual **)v14 + 7));
LABEL_113:
    v28 = (CContactManager *)*((_QWORD *)v14 + 7);
    if ( v28 )
      CBaseObject::Release(v28);
    goto LABEL_64;
  }
  v45 = (CIndirectTouchVisual *)*((_QWORD *)v14 + 7);
  if ( v45 )
  {
    if ( !v14[1] )
    {
      CIndirectTouchVisual::UpdateLocation(v45, &v76);
      return v8;
    }
    CIndirectTouchVisual::StartHover(v45, &v76, v14[10]);
    v46 = (struct tagRECT *)*((_QWORD *)v14 + 9);
    v14[1] = 0;
    if ( v46 )
    {
      v77[0] = v46;
      v47 = *(_DWORD *)(a1 + 176);
      v48 = v47 + 1;
      if ( v47 + 1 < v47 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
      }
      else
      {
        if ( v48 <= *(_DWORD *)(a1 + 172) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * v47) = v46;
          *(_DWORD *)(a1 + 176) = v48;
LABEL_94:
          CBaseObject::AddRef(*((CBaseObject **)v14 + 9));
          CTetherVisual::SnapToAnchor(*((CTetherVisual **)v14 + 9));
          goto LABEL_99;
        }
        v49 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 8LL, 1LL, v77);
        if ( v49 >= 0 )
          goto LABEL_94;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xC2u, 0LL);
      }
      CContactManager::StopAndRemoveFromRootNode(v50, *((struct CTouchVisual **)v14 + 9));
LABEL_99:
      v51 = (CBaseObject *)*((_QWORD *)v14 + 9);
      if ( v51 )
      {
        CBaseObject::Release(v51);
        *((_QWORD *)v14 + 9) = 0LL;
      }
    }
  }
  return v8;
}
