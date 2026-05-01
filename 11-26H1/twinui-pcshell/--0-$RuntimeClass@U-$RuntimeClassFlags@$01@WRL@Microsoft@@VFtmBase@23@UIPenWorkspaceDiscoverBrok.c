/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BD8E4
 * Callers:
 *     ??0PenWorkspaceDiscoverBroker@@QEAA@XZ @ 0x18013572C (--0PenWorkspaceDiscoverBroker@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>>'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowManagementInputUsageEvents>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
