/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800AE514
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008CDB4 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AE234 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E3C90 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AE154 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ @ 0x1800AE508 (-GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ.c)
 *     ?SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z @ 0x1800AE81C (-SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800AE894 (-SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        LPCRECT lprc,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rbp
  unsigned int v6; // ebx
  __int64 i; // rdx
  int v8; // edx
  CMILRefCountBase *v9; // rcx
  struct CPerMonitorDesktopThumbnail *v10; // rcx
  int v11; // eax
  char *v12; // r10
  __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // eax
  int v16; // edi
  CPerMonitorDesktopThumbnail *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(lprc, 0);
  if ( !v5 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x104u, 0LL);
    goto LABEL_19;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(v8 + 1) )
  {
    if ( CPerMonitorDesktopThumbnail::GetMonitor(*(CPerMonitorDesktopThumbnail **)(*((_QWORD *)this + 30) + 8 * i)) == v5 )
    {
      CMILRefCountBase::AddRef(v9);
      *a3 = v10;
      break;
    }
  }
  v6 = 0;
  if ( *a3 )
    goto LABEL_19;
  v11 = CPerMonitorDesktopThumbnail::Create(v18);
  v6 = v11;
  if ( v11 >= 0 )
  {
    CPerMonitorDesktopThumbnail::SetVisual(v18[0], this);
    CPerMonitorDesktopThumbnail::SetMonitor(v18[0], v5);
    v12 = (char *)this + 240;
    v13 = *((unsigned int *)this + 66);
    v14 = v13 + 1;
    if ( (int)v13 + 1 < (unsigned int)v13 )
    {
      v6 = -2147024362;
      v15 = 179;
      v16 = -2147024362;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v15, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x117u, 0LL);
      goto LABEL_19;
    }
    v16 = 0;
    if ( v14 > *((_DWORD *)v12 + 5) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 8, 1, v18);
      v6 = v16;
      if ( v16 < 0 )
      {
        v15 = 190;
        goto LABEL_17;
      }
    }
    else
    {
      *(CPerMonitorDesktopThumbnail **)(*(_QWORD *)v12 + 8 * v13) = v18[0];
      *((_DWORD *)v12 + 6) = v14;
    }
    v6 = v16;
    *a3 = v18[0];
    return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x114u, 0LL);
LABEL_19:
  if ( v18[0] )
    CBaseObject::Release(v18[0]);
  return v6;
}
