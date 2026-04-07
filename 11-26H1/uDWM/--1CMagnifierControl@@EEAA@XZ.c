/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x1800BA5A4
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x1800BA6A0 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x1800787D8 (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAXPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800BAB40 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAXP.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(CMagnifierControl *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  void *v5; // rcx
  CMagnifierControl::MagnifierTableElement *v6; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  CWindowList::UnregisterForSoftwareCursorChangeNotification(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (struct ISoftwareCursorChangeListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)0x80);
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(
                                                       (PRTL_GENERIC_TABLE)((char *)this + 56),
                                                       &RestartKey);
    if ( !v6 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 56),
      v6);
  }
  CBaseObject::~CBaseObject(this);
}
