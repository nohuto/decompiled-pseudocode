/*
 * XREFs of ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800705D0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800704EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddRef@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800705C0 (-AddRef@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMILRefCountImpl::AddReference(CMILRefCountImpl *this)
{
  signed __int32 v1; // ebx
  char v2; // cc
  unsigned __int32 v3; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this, 1u);
  v2 = (v1 + 1 < 0) ^ __OFADD__(1, v1) | (v1 == -1);
  v3 = v1 + 1;
  if ( v2 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILRefCountImpl::AddReference",
      L"onecoreuap\\restricted\\windows\\inc\\private\\dwm\\common\\Shared\\refcountbase.cpp",
      0x18u);
  return v3;
}
