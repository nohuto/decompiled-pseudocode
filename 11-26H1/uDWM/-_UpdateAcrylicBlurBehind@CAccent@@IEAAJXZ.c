/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18008BAF0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ConfigureAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAXAEBUACCENT_POLICY@@KPEBN@Z @ 0x180093B8C (-ConfigureAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAXAEBUACCENT_POLICY@@KPEBN@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  LONG v5; // r8d
  LONG v6; // edx
  unsigned int v7; // r8d
  struct CVisual *v8; // rdx
  CContainerVisual *v9; // rcx
  int v10; // eax
  int v11; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 30) && *((_BYTE *)this + 277) )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 28);
    if ( v3 )
    {
      CContainerVisual::RemoveChild(this, v3);
      v4 = (CBaseObject *)*((_QWORD *)this + 28);
      if ( v4 )
      {
        CBaseObject::Release(v4);
        *((_QWORD *)this + 28) = 0LL;
      }
    }
    v5 = 0;
    if ( *((_DWORD *)this + 123) - *((_DWORD *)this + 121) >= 0 )
      v5 = *((_DWORD *)this + 123) - *((_DWORD *)this + 121);
    v6 = 0;
    if ( *((_DWORD *)this + 122) - *((_DWORD *)this + 120) >= 0 )
      v6 = *((_DWORD *)this + 122) - *((_DWORD *)this + 120);
    CVisual::SetSize(*((CVisual **)this + 30), v6, v5);
    if ( *((_DWORD *)this + 46) == 3 )
      v7 = 0;
    else
      v7 = *((_DWORD *)this + 48);
    CAccentAcrylicBlurBehind::ConfigureAcrylicBlurBehind(
      *((CAccentAcrylicBlurBehind **)this + 30),
      (CAccent *)((char *)this + 184),
      v7,
      0LL);
    v8 = (struct CVisual *)*((_QWORD *)this + 30);
    v9 = (CContainerVisual *)*((_QWORD *)v8 + 3);
    if ( v9 != this )
    {
      if ( v9 && (v10 = CContainerVisual::RemoveChild(v9, v8), v1 = v10, v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x41Au, 0LL);
      }
      else
      {
        v11 = CContainerVisual::AddChild(this, *((struct CVisual **)this + 30));
        v1 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x41Cu, 0LL);
      }
    }
  }
  return v1;
}
