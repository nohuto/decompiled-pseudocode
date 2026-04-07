/*
 * XREFs of ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x1800CF1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800CF470 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::OnAnimationComplete(CThumbnailTransition *this, int a2)
{
  CBaseObject *v3; // rbx
  CThumbnailTransition *v4; // rcx

  if ( *((_DWORD *)this + 4) == a2 )
  {
    v3 = (CThumbnailTransition *)((char *)this - 16);
    CMILRefCountBase::AddRef((CThumbnailTransition *)((char *)this - 16));
    CThumbnailTransition::StopAnimation(v4);
    *((_DWORD *)this + 4) = -1;
    CBaseObject::Release(v3);
  }
  return 0LL;
}
