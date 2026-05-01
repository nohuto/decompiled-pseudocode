/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIPenWorkspaceScreenCaptureBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801B0CC0
 * Callers:
 *     ??1CGITCallbackArray@@UEAA@XZ @ 0x18008BEE8 (--1CGITCallbackArray@@UEAA@XZ.c)
 *     ??1ObjectArray@Discover@PenWorkspace@@UEAA@XZ @ 0x1803DE964 (--1ObjectArray@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIDiscoverRecentItem@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803DEA60 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIDiscoverRecentItem@@@WR.c)
 *     ??1PenWorkspaceScreenCaptureBroker@@UEAA@XZ @ 0x1803E00D8 (--1PenWorkspaceScreenCaptureBroker@@UEAA@XZ.c)
 *     ??1RecentItem@Discover@PenWorkspace@@UEAA@XZ @ 0x1803E20A0 (--1RecentItem@Discover@PenWorkspace@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(result + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
