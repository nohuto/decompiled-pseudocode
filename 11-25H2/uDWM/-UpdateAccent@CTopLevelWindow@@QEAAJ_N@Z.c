/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C
 * Callers:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BBC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180043858 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000F850 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A5FC (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180078DA4 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180078F18 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18007C8B0 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x1800805E0 (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800D00CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CWindowBackgroundTreatmentVisual **this, bool a2)
{
  unsigned int v2; // esi
  struct CVisual **v5; // rbx
  struct CWindowData *v6; // rdx
  CWindowBackgroundTreatmentVisual *v8; // rax
  struct CWindowData *v9; // rdx
  int updated; // eax
  int v11; // eax
  int inserted; // eax
  int v13; // eax

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)this[89] + 42) - 3) <= 2 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(this[27]);
  v5 = this + 32;
  if ( CAccent::s_IsPolicyActive((CWindowBackgroundTreatmentVisual *)((char *)this[89] + 168)) )
  {
    if ( !*v5 )
    {
      v11 = CAccent::Create(this + 32);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE7Cu, 0LL);
        return v2;
      }
      *((_BYTE *)*v5 + 552) = (*((_DWORD *)this[89] + 30) & 0x400000) != 0;
      inserted = CContainerVisual::InsertChildAfter(this[31], *v5, this[35]);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xE87u, 0LL);
        return v2;
      }
      v5 = this + 32;
    }
    v8 = this[89];
    if ( !*((_DWORD *)v8 + 44) && (*((_BYTE *)v8 + 172) & 2) == 0 && *((_DWORD *)v8 + 42) == 2 )
    {
      v5 = this + 32;
      *((_DWORD *)this[89] + 44) = CTopLevelWindow::GetTransparentGradientColorForAccent((CTopLevelWindow *)this);
    }
    v9 = this[89];
    if ( *((_DWORD *)v9 + 42) == 3 || (unsigned int)(*((_DWORD *)v9 + 42) - 4) <= 1 )
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53));
    else
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v9);
    CAccent::SetParentVisible(this[32], a2);
    updated = CAccent::UpdateAccentPolicy(
                *v5,
                (const struct tagRECT *)this[89] + 3,
                (CWindowBackgroundTreatmentVisual *)((char *)this[89] + 168),
                *((struct CBaseGeometryProxy **)this[89] + 53));
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xEA2u, 0LL);
  }
  else if ( *v5 )
  {
    CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v6);
    v13 = CContainerVisual::RemoveChild(this[31], *v5);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xEABu, 0LL);
    }
    else if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
  }
  return v2;
}
