/*
 * XREFs of ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIHAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI0$$QEAHAEA_K00@Z @ 0x180164018
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x180166F14 (-OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z.c)
 *     ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z @ 0x18016786C (-OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KII@Z @ 0x180164630 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KII@Z.c)
 *     ?Attach@?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180165468 (-Attach@-$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXP.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,int,unsigned __int64 &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  void *v11; // rax
  __int64 v12; // rax
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v11;
  if ( v11 )
  {
    v12 = Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(
            (Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)v11,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7);
    Microsoft::WRL::ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>::Attach(a1, v12);
    v14 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return a1;
}
