/*
 * XREFs of ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800897E0
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005D6B4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18001FEA8 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800898D8 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800898E4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x1800E74B4 (-RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX.c)
 *     ?RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E75A8 (-RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTR.c)
 */

__int64 __fastcall PnpDeviceWatcher::Initialize(PnpDeviceWatcher *this, struct LampArrayRawInputProvider *a2)
{
  PnpDeviceWatcher *v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // r8
  DWORD CurrentThreadId; // eax
  const struct _GUID *v7; // rdx
  PnpApiWrapper *v8; // rcx
  const char *v9; // r9
  int LastError; // eax
  HSTRING v11; // rdx
  PnpApiWrapper *v12; // rcx
  unsigned int v13; // edi
  void **v15; // [rsp+20h] [rbp-28h]
  void **v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = (PnpDeviceWatcher *)*_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
                              &v22,
                              (__int64)this);
  *v4 = v5;
  CurrentThreadId = GetCurrentThreadId();
  _InterlockedExchange64((volatile __int64 *)this + 3, (__int64)OpenThread(0x1FFFFFu, 0, CurrentThreadId));
  if ( !std::_Atomic_storage<unsigned __int64,8>::load((char *)this + 24) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x26,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
                  v9);
LABEL_5:
    v13 = LastError;
    PnpDeviceWatcher::Shutdown(v3);
    return v13;
  }
  LastError = PnpApiWrapper::RegisterDeviceInterfaceNotification(
                v8,
                v7,
                (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                (char *)this + 16,
                v15);
  if ( LastError < 0 )
    goto LABEL_5;
  LastError = PnpApiWrapper::RegisterDeviceInstanceNotification(
                v12,
                v11,
                (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                (char *)this + 8,
                v16);
  if ( LastError < 0 )
    goto LABEL_5;
  PnpApiWrapper::Details::EnumerateDevices(
    (__int64 (__fastcall *)(__int64, __int64, void *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInterfaceList,
    (const wchar_t *)PnpApiWrapper::Adapters::GetDeviceInterfaceListSize,
    3u,
    (__int64)&xmmword_180206C70,
    v17,
    v19,
    (__int64)this);
  PnpApiWrapper::Details::EnumerateDevices(
    (__int64 (__fastcall *)(__int64, __int64, void *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInstanceList,
    (const wchar_t *)PnpApiWrapper::Adapters::GetDeviceInstanceListSize,
    1u,
    (__int64)&GUID_NULL,
    v18,
    v20,
    (__int64)this);
  return 0LL;
}
