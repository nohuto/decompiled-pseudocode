/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180020840 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180042A30 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800635F0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x180094FEC (--0CAccentTransition@@QEAA@XZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // edi
  __int64 v3; // rcx
  CAccentTransition *v4; // rax
  CAccentTransition *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v6 = 722;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v6, 0LL);
    v7 = *((_QWORD *)this + 33);
    if ( v7 )
    {
      CBaseObject::Release((CBaseObject *)(v7 + 8));
      *((_QWORD *)this + 33) = 0LL;
    }
    return (unsigned int)updated;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 200)) || !CAccent::_IsAnimationNeeded(this) )
  {
    updated = CAccent::EndTransition(this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v6 = 740;
    goto LABEL_13;
  }
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = (CAccentTransition *)DefaultHeap::AllocClear(0x28uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CAccentTransition::CAccentTransition(v4);
  *((_QWORD *)this + 33) = v5;
  updated = CAccentTransition::StartAnimation(v5, (CAccent *)((char *)this + 200), this);
  if ( updated < 0 )
  {
    v6 = 735;
    goto LABEL_13;
  }
  return (unsigned int)updated;
}
