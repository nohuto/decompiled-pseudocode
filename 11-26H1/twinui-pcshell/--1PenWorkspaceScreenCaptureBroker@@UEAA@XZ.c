/*
 * XREFs of ??1PenWorkspaceScreenCaptureBroker@@UEAA@XZ @ 0x1803E931C
 * Callers:
 *     ??_EPenWorkspaceScreenCaptureBroker@@UEAAPEAXI@Z @ 0x1803E93B0 (--_EPenWorkspaceScreenCaptureBroker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall PenWorkspaceScreenCaptureBroker::~PenWorkspaceScreenCaptureBroker(
        PenWorkspaceScreenCaptureBroker *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 7);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>((__int64)this);
}
