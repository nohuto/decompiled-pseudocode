/*
 * XREFs of ??$capture@UIImmersiveMonitor@@AEAU?$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z$$TAEBU6@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitor@@@0@AEAU?$com_ptr@UIImmersiveMonitorManager@@@0@$$QEAP8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@2PEAPEAX@Z$$QEA$$T2@Z @ 0x180570600
 * Callers:
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806B3D75 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$46.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::capture<IImmersiveMonitor,winrt::com_ptr<IImmersiveMonitorManager> &,long (IImmersiveMonitorManager::*)(HMONITOR__ *,_GUID const &,_GUID const &,void * *),std::nullptr_t,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 (__fastcall **a3)(__int64, __int64, GUID *, void *, __int64 *),
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, GUID *, void *, __int64 *); // rax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v13 = a1;
  v14 = 0LL;
  v11 = 0;
  v6 = *a4;
  v7 = *a2;
  v8 = *a3;
  v12 = 0LL;
  v9 = v8(v7, v6, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &winrt::impl::guid_v<IImmersiveMonitor>, &v14);
  winrt::check_hresult((int *)&v13, v9, (__int64)&v11);
  *a1 = v14;
  return a1;
}
