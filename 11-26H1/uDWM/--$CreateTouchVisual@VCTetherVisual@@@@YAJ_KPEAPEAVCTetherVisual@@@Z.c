/*
 * XREFs of ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800A833C
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800C84C0 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800C8620 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTetherVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  int v4; // ebx
  CTetherVisual *v5; // rax
  CTetherVisual *v6; // rax
  CBaseObject *v7; // rdi
  unsigned int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v5 = (CTetherVisual *)DefaultHeap::AllocClear(0x130uLL);
    if ( !v5 )
      ModuleFailFastForHRESULT(0x8007000E, retaddr);
    v6 = CTetherVisual::CTetherVisual(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v4 = CTetherVisual::Initialize(v6);
      if ( v4 >= 0 )
      {
        *a2 = v7;
        return (unsigned int)v4;
      }
      v8 = 66;
    }
    else
    {
      v4 = -2147024882;
      v8 = 64;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v8, 0LL);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3Cu, 0LL);
  }
  return (unsigned int)v4;
}
