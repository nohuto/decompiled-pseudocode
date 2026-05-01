/*
 * XREFs of ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804F3C74
 * Callers:
 *     ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x1804F4050 (--_GCAutoAppTransitionRequest@@UEAAPEAXI@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x1804F80B0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$5 @ 0x1806CB084 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$5.c)
 *     _TabletModePositioner::OnOutgoingTransitionCompleted_::_1_::dtor$1 @ 0x1806CB114 (_TabletModePositioner--OnOutgoingTransitionCompleted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
