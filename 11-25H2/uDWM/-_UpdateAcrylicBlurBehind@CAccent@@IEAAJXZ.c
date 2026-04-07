/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18007B938
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18003F4F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z @ 0x1800A0530 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  struct CVisualProxy **v3; // rdx
  unsigned int v4; // r8d
  int updated; // eax
  struct CVisualProxy **v6; // rdx
  CContainerVisual *v7; // rcx
  int v9; // eax
  CBaseObject *v10; // rcx
  int v11; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 37) && *((_BYTE *)this + 333) )
  {
    CRenderDataVisual::ClearInstructions(this);
    v3 = (struct CVisualProxy **)*((_QWORD *)this + 35);
    if ( v3 )
    {
      CContainerVisual::RemoveChild(this, v3);
      v10 = (CBaseObject *)*((_QWORD *)this + 35);
      if ( v10 )
      {
        CBaseObject::Release(v10);
        *((_QWORD *)this + 35) = 0LL;
      }
    }
    *(_OWORD *)(*((_QWORD *)this + 37) + 312LL) = *(_OWORD *)((char *)this + 536);
    if ( *((_DWORD *)this + 60) == 3 )
      v4 = 0;
    else
      v4 = *((_DWORD *)this + 62);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 37),
                (CAccent *)((char *)this + 240),
                v4,
                0LL);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x450u, 0LL);
    }
    else
    {
      v6 = (struct CVisualProxy **)*((_QWORD *)this + 37);
      v7 = v6[3];
      if ( v7 != this )
      {
        if ( v7 && (v11 = CContainerVisual::RemoveChild(v7, v6), v1 = v11, v11 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x458u, 0LL);
        }
        else
        {
          v9 = CContainerVisual::AddChild(this, *((struct CVisual **)this + 37));
          v1 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x45Au, 0LL);
        }
      }
    }
  }
  return v1;
}
