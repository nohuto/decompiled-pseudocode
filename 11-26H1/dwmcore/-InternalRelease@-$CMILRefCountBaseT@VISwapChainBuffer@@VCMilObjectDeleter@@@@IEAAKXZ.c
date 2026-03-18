/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801CBD64
 * Callers:
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CBD44 (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDDisplaySwapChainBuffer@@UEAAKXZ @ 0x18021FCB0 (-Release@CDDisplaySwapChainBuffer@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A5A6C (--4-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800E2EC0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 216LL))(a1, 1LL);
    }
  }
  return v3;
}
