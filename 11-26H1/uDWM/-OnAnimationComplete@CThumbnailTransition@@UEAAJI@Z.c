/*
 * XREFs of ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x1800C9140
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800C93DC (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::OnAnimationComplete(CThumbnailTransition *this, int a2)
{
  CBaseObject *v2; // rbx
  CThumbnailTransition *v4; // rcx

  v2 = (CThumbnailTransition *)((char *)this - 16);
  if ( *((_DWORD *)this + 4) == a2 )
  {
    CBaseObject::AddRef((CThumbnailTransition *)((char *)this - 16));
    CThumbnailTransition::StopAnimation(v4);
    *((_DWORD *)this + 4) = -1;
    CBaseObject::Release(v2);
  }
  return 0LL;
}
