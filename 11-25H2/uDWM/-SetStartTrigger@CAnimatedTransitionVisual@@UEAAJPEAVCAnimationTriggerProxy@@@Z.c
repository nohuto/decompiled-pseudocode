/*
 * XREFs of ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008A230
 * Callers:
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x18009A60C (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008C080 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetStartTrigger(
        CAnimatedTransitionVisual *this,
        struct CAnimationTriggerProxy *a2)
{
  int v2; // r8d
  CAnimatedTransitionVisual *v3; // r9
  unsigned int v4; // r11d
  CAnimationResource **v5; // r10
  unsigned int v6; // r8d

  v2 = 0;
  v3 = this;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 84) )
    {
      return (unsigned int)-2147024891;
    }
    else
    {
      v4 = 0;
      v5 = (CAnimationResource **)((char *)this + 568);
      do
      {
        if ( v2 < 0 )
          break;
        if ( *v5 )
          v2 = CAnimationResource::SetTrigger(*v5, a2);
        ++v4;
        ++v5;
      }
      while ( v4 < 7 );
      *((_QWORD *)v3 + 84) = a2;
      CMILRefCountBase::AddRef(a2);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v6;
}
