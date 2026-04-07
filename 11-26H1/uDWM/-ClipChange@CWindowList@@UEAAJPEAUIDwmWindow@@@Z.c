/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC30
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800173EC (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180084490 (-CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  CBaseObject **v6; // rsi
  bool v7; // bp
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  HANDLE v11; // rdx
  CTopLevelWindow *v12; // rcx
  int v14; // eax
  int v15; // eax
  int GeometryProxyFromSharedHandle; // eax
  HANDLE hObject; // [rsp+80h] [rbp+18h] BYREF
  CWindowData *v18; // [rsp+88h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  hObject = 0LL;
  v18 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v18);
  v5 = v18;
  if ( v18 && *((_QWORD *)v18 + 4) )
  {
    v6 = (CBaseObject **)((char *)v18 + 424);
    v7 = *((_QWORD *)v18 + 53) != 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *, HANDLE *))(*(_QWORD *)a2 + 320LL))(a2, &hObject);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1787u, 0LL);
    }
    else
    {
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
      v11 = hObject;
      if ( !hObject
        || hObject == (HANDLE)-1LL
        || (GeometryProxyFromSharedHandle = CCompositor::CreateGeometryProxyFromSharedHandle(
                                              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                              hObject,
                                              (struct CBaseGeometryProxy **)v5 + 53),
            v4 = GeometryProxyFromSharedHandle,
            GeometryProxyFromSharedHandle >= 0) )
      {
        v12 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
        if ( v12 && (v15 = CTopLevelWindow::OnClipUpdated(v12, (__int64)v11), v4 = v15, v15 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x1792u, 0LL);
        }
        else if ( v7 != (*v6 != 0LL) )
        {
          v14 = CWindowData::NotifyRepresentationChanged(v5, (__int64)v11, v9, v10);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x179Au, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryProxyFromSharedHandle, 0x178Bu, 0LL);
      }
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
