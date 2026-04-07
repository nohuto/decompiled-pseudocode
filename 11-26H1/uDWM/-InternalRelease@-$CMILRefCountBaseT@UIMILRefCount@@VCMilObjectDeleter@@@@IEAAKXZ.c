/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800704EC
 * Callers:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800704E0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x180070568 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800705D0 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
    }
  }
  return v3;
}
