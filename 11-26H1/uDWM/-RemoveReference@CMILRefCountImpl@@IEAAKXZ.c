/*
 * XREFs of ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x180070568
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800704EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMILRefCountImpl::RemoveReference(CMILRefCountImpl *this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( v1 < -1 )
    AssertW(
      L"Tried to Release an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILRefCountImpl::RemoveReference",
      L"onecoreuap\\restricted\\windows\\inc\\private\\dwm\\common\\Shared\\refcountbase.cpp",
      0x26u);
  return (unsigned int)v1;
}
