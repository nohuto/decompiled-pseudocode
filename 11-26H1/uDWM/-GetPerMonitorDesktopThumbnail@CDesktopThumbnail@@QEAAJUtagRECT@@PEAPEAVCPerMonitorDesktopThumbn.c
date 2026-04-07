/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800ADC00
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AD934 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E0750 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AD858 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ @ 0x1800ADBF4 (-GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ.c)
 *     ?SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z @ 0x1800ADEDC (-SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800ADF54 (-SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z.c)
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
  CBaseObject *v9; // rcx
  struct CPerMonitorDesktopThumbnail *v10; // rcx
  int v11; // eax
  char *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  unsigned int v16; // eax
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
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 62); i = (unsigned int)(v8 + 1) )
  {
    if ( CPerMonitorDesktopThumbnail::GetMonitor(*(CPerMonitorDesktopThumbnail **)(*((_QWORD *)this + 28) + 8 * i)) == v5 )
    {
      CBaseObject::AddRef(v9);
      *a3 = v10;
      break;
    }
  }
  v6 = 0;
  if ( *a3 )
    goto LABEL_19;
  v11 = CPerMonitorDesktopThumbnail::Create(v18);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x114u, 0LL);
  }
  else
  {
    CPerMonitorDesktopThumbnail::SetVisual(v18[0], this);
    CPerMonitorDesktopThumbnail::SetMonitor(v18[0], v5);
    v12 = (char *)this + 224;
    v13 = *((_DWORD *)this + 62);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v6 = -2147024362;
      v16 = 183;
      v15 = -2147024362;
    }
    else
    {
      v15 = 0;
      if ( v14 <= *((_DWORD *)v12 + 5) )
      {
        *(CPerMonitorDesktopThumbnail **)(*(_QWORD *)v12 + 8LL * v13) = v18[0];
        *((_DWORD *)v12 + 6) = v14;
LABEL_14:
        v6 = v15;
        *a3 = v18[0];
        return v6;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 8, 1, v18);
      v6 = v15;
      if ( v15 >= 0 )
        goto LABEL_14;
      v16 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x117u, 0LL);
  }
LABEL_19:
  if ( v18[0] )
    CBaseObject::Release(v18[0]);
  return v6;
}
