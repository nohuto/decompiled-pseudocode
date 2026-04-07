/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C2750
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800ADB70 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C3A7C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800C4428 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  int v4; // r8d
  int DesktopThumbnail; // eax
  unsigned int i; // esi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // r14d
  unsigned int v12; // eax
  signed int LastError; // eax
  unsigned int v15; // [rsp+20h] [rbp-48h]
  CBaseObject *v16; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3 & 0xFFF;
  v16 = 0LL;
  v18 = 0LL;
  if ( v4 != 75 && v4 != 76 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( !EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x1237u, 0LL);
    goto LABEL_28;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v16);
  v3 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    v15 = 4664;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 184); ++i )
    {
      v17 = *(struct tagRECT *)(*(_QWORD *)(a1 + 160) + 16LL * i);
      DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v17, 1, &v18);
      v3 = DesktopThumbnail;
      if ( DesktopThumbnail < 0 )
      {
        v15 = 4671;
        goto LABEL_20;
      }
      v9 = *(_DWORD *)(a1 + 152);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        v3 = -2147024362;
        v12 = 183;
        v11 = -2147024362;
        goto LABEL_15;
      }
      if ( v10 > *(_DWORD *)(a1 + 148) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 128, 8, 1, &v18);
        v3 = v11;
        if ( v11 < 0 )
        {
          v12 = 194;
LABEL_15:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v12, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v11,
            0x1240u,
            0LL);
          goto LABEL_21;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * v9) = v18;
        *(_DWORD *)(a1 + 152) = v10;
      }
      v18 = 0LL;
    }
    DesktopThumbnail = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
      goto LABEL_21;
    v15 = 4677;
  }
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    DesktopThumbnail,
    v15,
    0LL);
LABEL_21:
  if ( v16 )
    CBaseObject::Release(v16);
LABEL_28:
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
