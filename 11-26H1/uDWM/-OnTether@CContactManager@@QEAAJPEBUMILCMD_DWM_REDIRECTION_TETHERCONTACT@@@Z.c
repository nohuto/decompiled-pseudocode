/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F15C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800A833C (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800C88CC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800C8998 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800C8B90 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // rsi
  unsigned int i; // r8d
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  CContactManager *v15; // rcx
  struct CTouchVisual *v16; // rdx
  _BYTE *v17; // rcx
  char *v18; // rsi
  __int64 v19; // rax
  CBaseObject **v20; // rdx
  int Touch; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  CContactManager *v30; // rcx
  CBaseObject *v31; // rcx
  unsigned __int64 v33; // [rsp+70h] [rbp+40h] BYREF
  CBaseObject *v34; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+88h] [rbp+58h] BYREF

  v35 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  GetDesktopID(1LL, &v33);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 20) )
      goto LABEL_45;
    if ( *(_DWORD *)(104LL * i + *((_QWORD *)this + 7)) == *((_DWORD *)a2 + 1) )
      break;
  }
  v6 = i;
  if ( (i & 0x80000000) != 0 || (v7 = *((_QWORD *)this + 7), *(_DWORD *)(104LL * i + v7 + 4) != 1) )
  {
LABEL_45:
    v10 = -2147024809;
    goto LABEL_46;
  }
  v8 = 104LL * i;
  v9 = *(_QWORD *)(v7 + v8 + 72);
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( v9 )
    {
      v34 = *(CBaseObject **)(v7 + 104LL * i + 72);
      v25 = *((_DWORD *)this + 44);
      v26 = v25 + 1;
      if ( v25 + 1 < v25 )
      {
        v27 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
      }
      else
      {
        v27 = 0;
        if ( v26 > *((_DWORD *)this + 43) )
        {
          v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v34);
          v27 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC2u, 0LL);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * v25) = v9;
          *((_DWORD *)this + 44) = v26;
        }
      }
      v29 = *((_QWORD *)this + 7);
      v30 = *(CContactManager **)(v29 + v8 + 72);
      if ( v27 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v30, *(struct CTouchVisual **)(v29 + v8 + 72));
      }
      else
      {
        CBaseObject::AddRef(v30);
        CTetherVisual::SnapToAnchor(*(CTetherVisual **)(104 * v6 + *((_QWORD *)this + 7) + 72));
      }
      v31 = *(CBaseObject **)(104 * v6 + *((_QWORD *)this + 7) + 72);
      v10 = 0;
      if ( v31 )
      {
        CBaseObject::Release(v31);
        *(_QWORD *)(104 * v6 + *((_QWORD *)this + 7) + 72) = 0LL;
      }
      goto LABEL_46;
    }
    v10 = -2147024809;
LABEL_43:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_46;
  }
  if ( v9 )
  {
    CTetherVisual::UpdatePosition(
      *(CTetherVisual **)(v7 + 104LL * i + 72),
      (const struct tagPOINT *)((char *)a2 + 12),
      0LL);
    v10 = 0;
    goto LABEL_46;
  }
  v11 = CreateTouchVisual<CTetherVisual>(v33, &v34);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3CDu, 0LL);
    v4 = v34;
    goto LABEL_43;
  }
  v4 = v34;
  v13 = CContactManager::AddToTouchNode(v12, v33, v34);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CEu, 0LL);
    goto LABEL_43;
  }
  v14 = CTetherVisual::Start(
          v4,
          (const struct tagPOINT *)((char *)a2 + 12),
          (const struct tagPOINT *)(v8 + *((_QWORD *)this + 7) + 8LL));
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CFu, 0LL);
    goto LABEL_43;
  }
  *(_QWORD *)(*((_QWORD *)this + 7) + v8 + 72) = v4;
  v16 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v8 + 80);
  if ( !v16 )
    goto LABEL_46;
  CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v15, v16);
  *(_QWORD *)(*((_QWORD *)this + 7) + v8 + 80) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 7) + v8 + 96) = 0;
  v17 = (char *)this + 324;
  if ( *((_BYTE *)this + 324) )
  {
    v18 = (char *)this + 324;
  }
  else
  {
    if ( !*(_DWORD *)(*((_QWORD *)this + 7) + v8 + 40) )
      goto LABEL_46;
    v18 = (char *)this + 324;
  }
  v19 = *((_QWORD *)this + 7);
  v20 = (CBaseObject **)(104 * v6 + v19 + 48);
  if ( !*v20 && !*(_QWORD *)(104 * v6 + v19 + 88) )
  {
    Touch = CreateTouchVisual<CDirectTouchVisual>(v33, v20);
    v10 = Touch;
    if ( Touch < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3E1u, 0LL);
      goto LABEL_46;
    }
    CContactManager::AddToTouchNode(
      (CContactManager *)(104 * v6),
      v33,
      *(struct CVisual **)(104 * v6 + *((_QWORD *)this + 7) + 48));
    v17 = v18;
  }
  v22 = 104 * v6;
  v23 = *((_QWORD *)this + 7);
  v24 = -5;
  if ( !*v17 )
    v24 = *(_DWORD *)(v22 + v23 + 40);
  CDirectTouchVisual::StartDown(
    *(_QWORD *)(104 * v6 + v23 + 48),
    (const struct tagPOINT *)(v23 + 8 + v22),
    (const struct tagRECT *)(v22 + v23 + 24),
    v24);
LABEL_46:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
  return v10;
}
