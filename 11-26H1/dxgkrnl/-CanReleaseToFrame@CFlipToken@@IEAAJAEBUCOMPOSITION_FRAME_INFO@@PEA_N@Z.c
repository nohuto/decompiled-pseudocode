/*
 * XREFs of ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x140067210
 * Callers:
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A25A0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x14003C7C8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x14003EA94 (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z @ 0x1400A2424 (-CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z.c)
 *     ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1400A27E8 (-SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::CanReleaseToFrame(CFlipToken *this, const struct COMPOSITION_FRAME_INFO *a2, bool *a3)
{
  char started; // al
  char v7; // al

  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      v7 = *((_BYTE *)this + 583);
      goto LABEL_10;
    }
    if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(*((_QWORD *)this + 6), *((_QWORD *)this + 7)) != 2 )
    {
      if ( !*((_QWORD *)this + 13) && *((_BYTE *)this + 578) )
      {
        *a3 = 1;
        return 0LL;
      }
      started = CompositionSurfaceObject::StartCompositionEarly(
                  *((CompositionSurfaceObject **)this + 6),
                  *((_QWORD *)this + 7));
      if ( !CFlipToken::CalcTokenTargetTime(this, a2, started) )
        return 0LL;
      v7 = CFlipToken::SyncIntervalSatisfied(this, a2);
LABEL_10:
      *a3 = v7;
    }
  }
  return 0LL;
}
