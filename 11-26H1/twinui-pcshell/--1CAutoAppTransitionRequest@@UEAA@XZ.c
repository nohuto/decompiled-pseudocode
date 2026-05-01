/*
 * XREFs of ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x180515370
 * Callers:
 *     ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x180515750 (--_GCAutoAppTransitionRequest@@UEAAPEAXI@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180519BD0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$5 @ 0x1806F35ED (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$5.c)
 *     _TabletModePositioner::OnOutgoingTransitionCompleted_::_1_::dtor$1 @ 0x1806F367D (_TabletModePositioner--OnOutgoingTransitionCompleted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAutoAppTransitionRequest::~CAutoAppTransitionRequest(CAutoAppTransitionRequest *this)
{
  __int64 *v1; // rbx

  *(_QWORD *)this = &CAutoAppTransitionRequest::`vftable';
  v1 = (__int64 *)((char *)this + 8);
  if ( *((_BYTE *)this + 16) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 40LL))(*v1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
}
