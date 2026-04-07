/*
 * XREFs of ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18004F3F8
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18004F2C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x18004F4CC (--0CPenBarrelKeyVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800502E0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ??2CContainerVisual@@KAPEAX_K@Z @ 0x180085CD8 (--2CContainerVisual@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CPenBarrelKeyVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CPenBarrelKeyVisual *v4; // rax
  CPenBarrelKeyVisual *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3Cu, 0LL);
    return v7;
  }
  v4 = (CPenBarrelKeyVisual *)CContainerVisual::operator new(0x110uLL);
  if ( v4 )
  {
    v5 = CPenBarrelKeyVisual::CPenBarrelKeyVisual(v4, a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = CPenBarrelKeyVisual::Initialize(v5);
      if ( (v7 & 0x80000000) == 0 )
      {
        *a2 = v6;
        return v7;
      }
      v8 = 66;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = -2147024882;
  v8 = 64;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
