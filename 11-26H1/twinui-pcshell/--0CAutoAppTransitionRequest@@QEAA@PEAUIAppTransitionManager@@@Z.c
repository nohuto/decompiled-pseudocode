/*
 * XREFs of ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x18051525C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180519BD0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAutoAppTransitionRequest *__fastcall CAutoAppTransitionRequest::CAutoAppTransitionRequest(
        CAutoAppTransitionRequest *this,
        struct IAppTransitionManager *a2)
{
  *(_QWORD *)this = &CAutoAppTransitionRequest::`vftable';
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 16) = 0;
  return this;
}
