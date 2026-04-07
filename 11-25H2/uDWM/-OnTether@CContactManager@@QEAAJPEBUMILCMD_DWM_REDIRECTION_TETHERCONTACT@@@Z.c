/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AAF14
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002B000 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180030520 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AA208 (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800CE920 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800CE9F0 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800CEE4C (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // r14
  unsigned int v5; // r15d
  unsigned int v6; // r9d
  __int64 *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rsi
  CTetherVisual *v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  CContactManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  CContactManager *v16; // rcx
  struct CTouchVisual *v17; // rdx
  _BYTE *v18; // rcx
  char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  CBaseObject **v22; // rdx
  int Touch; // eax
  CContactManager *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rax
  CContactManager *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v36; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+88h] [rbp+58h] BYREF

  v37 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v36 = 0LL;
  GetDesktopID(1LL);
  v5 = -1;
  v6 = 0;
  v7 = (__int64 *)((char *)this + 56);
  while ( v6 < *((_DWORD *)this + 20) )
  {
    v7 = (__int64 *)((char *)this + 56);
    if ( *(_DWORD *)(104LL * v6 + *((_QWORD *)this + 7)) == *((_DWORD *)a2 + 1) )
    {
      v5 = v6;
      break;
    }
    ++v6;
  }
  if ( (v5 & 0x80000000) != 0 || (v8 = *v7, *(_DWORD *)(104LL * v5 + *v7 + 4) != 1) )
  {
    v11 = -2147024809;
    goto LABEL_47;
  }
  v9 = 104LL * v5;
  v10 = *(CTetherVisual **)(v9 + v8 + 72);
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( v10 )
    {
      v36 = *(CBaseObject **)(104LL * v5 + v8 + 72);
      v28 = *((_DWORD *)this + 44);
      v29 = v28 + 1;
      if ( v28 + 1 >= v28 )
      {
        v30 = 0;
        if ( v29 > *((_DWORD *)this + 43) )
        {
          v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v36);
          v30 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xBEu, 0LL);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v10;
          *((_DWORD *)this + 44) = v29;
        }
      }
      else
      {
        v30 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      }
      v32 = *((_QWORD *)this + 7);
      v33 = *(CContactManager **)(v9 + v32 + 72);
      if ( v30 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v33, *(struct CTouchVisual **)(v9 + v32 + 72));
      }
      else
      {
        CMILRefCountBase::AddRef(v33);
        CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
      }
      v34 = *(CBaseObject **)(104LL * v5 + *((_QWORD *)this + 7) + 72);
      v11 = 0;
      if ( v34 )
      {
        CBaseObject::Release(v34);
        *(_QWORD *)(104LL * v5 + *((_QWORD *)this + 7) + 72) = 0LL;
      }
      goto LABEL_47;
    }
    v11 = -2147024809;
LABEL_44:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_47;
  }
  if ( v10 )
  {
    CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
    v11 = 0;
    goto LABEL_47;
  }
  v12 = CreateTouchVisual<CTetherVisual>(0LL, &v36);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3CDu, 0LL);
    v4 = v36;
    goto LABEL_44;
  }
  v4 = v36;
  v14 = CContactManager::AddToTouchNode(v13, 0LL, v36);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CEu, 0LL);
    goto LABEL_44;
  }
  v15 = CTetherVisual::Start(
          v4,
          (const struct tagPOINT *)((char *)a2 + 12),
          (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL));
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3CFu, 0LL);
    goto LABEL_44;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v4;
  v17 = *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 80);
  if ( v17 )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v16, v17);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 96) = 0;
    v18 = (char *)this + 324;
    if ( *((_BYTE *)this + 324) )
    {
      v19 = (char *)this + 324;
    }
    else
    {
      if ( !*(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
        goto LABEL_47;
      v19 = (char *)this + 324;
    }
    v20 = 104LL * v5;
    v21 = *((_QWORD *)this + 7);
    v22 = (CBaseObject **)(v20 + v21 + 48);
    if ( !*v22 && !*(_QWORD *)(v20 + v21 + 88) )
    {
      Touch = CreateTouchVisual<CDirectTouchVisual>(0LL, v22);
      v11 = Touch;
      if ( Touch < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3E1u, 0LL);
        goto LABEL_47;
      }
      CContactManager::AddToTouchNode(v24, 0LL, *(struct CVisual **)(104LL * v5 + *((_QWORD *)this + 7) + 48));
      v18 = v19;
    }
    v25 = 104LL * v5;
    v26 = *((_QWORD *)this + 7);
    v27 = -5;
    if ( !*v18 )
      v27 = *(_DWORD *)(v25 + v26 + 40);
    CDirectTouchVisual::StartDown(
      *(_QWORD *)(v25 + v26 + 48),
      (const struct tagPOINT *)(v26 + 8 + v25),
      (const struct tagRECT *)(v25 + v26 + 24),
      v27);
  }
LABEL_47:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
  return v11;
}
