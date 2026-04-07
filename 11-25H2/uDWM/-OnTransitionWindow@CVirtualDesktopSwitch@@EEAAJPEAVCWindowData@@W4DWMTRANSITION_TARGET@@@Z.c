/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C8740
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AE488 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C997C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800CA348 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  int DesktopThumbnail; // eax
  unsigned int i; // edi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // ebp
  unsigned int v11; // eax
  signed int LastError; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]
  CBaseObject *v15; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
  v17 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
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
    goto LABEL_27;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
  v3 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    v14 = 4664;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 184); ++i )
    {
      v16 = *(struct tagRECT *)(*(_QWORD *)(a1 + 160) + 16LL * i);
      DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v16, 1, &v17);
      v3 = DesktopThumbnail;
      if ( DesktopThumbnail < 0 )
      {
        v14 = 4671;
        goto LABEL_19;
      }
      v8 = *(_DWORD *)(a1 + 152);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v3 = -2147024362;
        v11 = 179;
        v10 = -2147024362;
        goto LABEL_14;
      }
      if ( v9 > *(_DWORD *)(a1 + 148) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 128, 8, 1, &v17);
        v3 = v10;
        if ( v10 < 0 )
        {
          v11 = 190;
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v11, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v10,
            0x1240u,
            0LL);
          goto LABEL_20;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * v8) = v17;
        *(_DWORD *)(a1 + 152) = v9;
      }
      v17 = 0LL;
    }
    DesktopThumbnail = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
      goto LABEL_20;
    v14 = 4677;
  }
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    DesktopThumbnail,
    v14,
    0LL);
LABEL_20:
  if ( v15 )
    CBaseObject::Release(v15);
LABEL_27:
  if ( v17 )
    CBaseObject::Release(v17);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
