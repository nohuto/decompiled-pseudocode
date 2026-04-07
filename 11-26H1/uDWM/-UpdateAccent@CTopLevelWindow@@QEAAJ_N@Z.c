/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800603B0 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180060898 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001AE30 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180020840 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18006924C (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18006E418 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x18007530C (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x18008D9A8 (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800CB5FC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, bool a2)
{
  unsigned int v2; // edi
  int v5; // eax
  struct CVisual **v6; // rbx
  struct CWindowData *v7; // rdx
  int v8; // eax
  int inserted; // eax
  __int64 v10; // rax
  struct CWindowData *v11; // rdx
  int updated; // eax
  int v13; // eax

  v2 = 0;
  v5 = *(_DWORD *)(*((_QWORD *)this + 87) + 168LL);
  if ( v5 == 3 || (unsigned int)(v5 - 4) <= 1 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(*((CWindowBackgroundTreatmentVisual **)this + 25));
  v6 = (struct CVisual **)((char *)this + 240);
  if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(*((_QWORD *)this + 87) + 168LL)) )
  {
    if ( !*v6 )
    {
      v8 = CAccent::Create((struct CAccent **)this + 30);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xDF6u, 0LL);
        return v2;
      }
      *((_BYTE *)*v6 + 496) = (*(_DWORD *)(*((_QWORD *)this + 87) + 120LL) & 0x400000) != 0;
      inserted = CContainerVisual::InsertChildAfter(
                   *((CContainerVisual **)this + 29),
                   *v6,
                   *((struct CVisual **)this + 33));
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xDFCu, 0LL);
        return v2;
      }
      v6 = (struct CVisual **)((char *)this + 240);
    }
    v10 = *((_QWORD *)this + 87);
    if ( !*(_DWORD *)(v10 + 176) && (*(_BYTE *)(v10 + 172) & 2) == 0 && *(_DWORD *)(v10 + 168) == 2 )
    {
      v6 = (struct CVisual **)((char *)this + 240);
      *(_DWORD *)(*((_QWORD *)this + 87) + 176LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
    }
    v11 = (struct CWindowData *)*((_QWORD *)this + 87);
    if ( *((_DWORD *)v11 + 42) == 3 || (unsigned int)(*((_DWORD *)v11 + 42) - 4) < 2 )
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53));
    else
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v11);
    CAccent::SetParentVisible(*((CAccent **)this + 30), a2);
    updated = CAccent::UpdateAccentPolicy(
                *v6,
                (const struct tagRECT *)(*((_QWORD *)this + 87) + 48LL),
                (const struct ACCENT_POLICY *)(*((_QWORD *)this + 87) + 168LL),
                *(struct CBaseGeometryProxy **)(*((_QWORD *)this + 87) + 424LL));
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xE17u, 0LL);
  }
  else if ( *v6 )
  {
    CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v7);
    v13 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 29), *v6);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xE20u, 0LL);
    }
    else if ( *v6 )
    {
      CBaseObject::Release(*v6);
      *v6 = 0LL;
    }
  }
  return v2;
}
