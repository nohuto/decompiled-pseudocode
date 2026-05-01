/*
 * XREFs of ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804D24E4
 * Callers:
 *     ??_ECAppTransitionTargetManager@@UEAAPEAXI@Z @ 0x1804D2610 (--_ECAppTransitionTargetManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1804D32E0 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

void __fastcall CAppTransitionTargetManager::~CAppTransitionTargetManager(CAppTransitionTargetManager *this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll((char *)this + 40);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>((__int64)this + 8);
}
