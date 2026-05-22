/*
 * XREFs of ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180163D84
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x180166F14 (-OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z.c)
 *     ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z @ 0x18016786C (-OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_7e0f520160950e24bd7fd597c2836819_@@@Z @ 0x180163C38 (--$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  *(_QWORD *)&v4 = &v5;
  *((_QWORD *)&v4 + 1) = &v6;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_7e0f520160950e24bd7fd597c2836819_>(
           a1,
           &v4);
}
