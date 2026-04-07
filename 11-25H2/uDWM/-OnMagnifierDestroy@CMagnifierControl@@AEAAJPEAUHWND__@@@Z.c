/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800BB0FC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006C2D0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18006CC00 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x18008604C (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800BB348 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(CMagnifierControl *this, __int64 a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbp
  unsigned int v4; // esi
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v6; // rbx
  CBaseObject *v7; // rcx

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 56);
  v4 = 0;
  CWindowList::UnregisterForSoftwareCursorChangeNotification(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (struct ISoftwareCursorChangeListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(v2, a2);
  v6 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v7 = Element[1];
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)v6 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(v2, v6);
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, -2147023728, 0x270u, 0LL);
  }
  return v4;
}
