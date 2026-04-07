/*
 * XREFs of ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008C080
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180061DC0 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008A230 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CAnimationResource::SetTrigger(CAnimationResource *this, struct CAnimationTriggerProxy *a2)
{
  __int64 result; // rax

  result = 2147942405LL;
  if ( !*((_BYTE *)this + 65) && !*((_QWORD *)this + 11) )
  {
    *((_QWORD *)this + 11) = a2;
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
    return 0LL;
  }
  return result;
}
