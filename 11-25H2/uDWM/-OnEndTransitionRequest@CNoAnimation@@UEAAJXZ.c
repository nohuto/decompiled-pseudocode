/*
 * XREFs of ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800697B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180069860 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z @ 0x180097320 (-_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CNoAnimation::OnEndTransitionRequest(CNoAnimation *this)
{
  CBaseObject *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  CBaseObject *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v7 = 0LL;
  v3 = CStoryboard::OnEndTransitionRequest(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x114Au, 0LL);
  }
  else
  {
    v5 = CStoryboard::_CreateAndAddNullComponent(this, 1, &v7);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x114Cu, 0LL);
    v1 = v7;
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return v4;
}
