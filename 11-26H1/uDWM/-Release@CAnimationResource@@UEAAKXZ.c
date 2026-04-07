/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x180077970
 * Callers:
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041818 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800504DC (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D5DEC (--1-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1CAnimationResource@@IEAA@XZ @ 0x18000719C (--1CAnimationResource@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    CAnimationResource::~CAnimationResource(this);
    DefaultHeap::Free(this);
  }
  return v2;
}
