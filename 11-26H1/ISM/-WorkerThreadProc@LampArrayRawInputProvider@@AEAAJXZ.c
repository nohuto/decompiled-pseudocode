/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005D6B4
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180081280 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x18005D8FC (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18005DB24 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x18005E1E4 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800897E0 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800898E4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProc(HANDLE *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  PnpDeviceWatcher *v4; // r15
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  _QWORD *v11; // r13
  unsigned int LastError; // esi
  int v13; // edi
  unsigned int v14; // r15d
  HANDLE *v15; // rdi
  LampArrayDevice *v16; // rcx
  DWORD v17; // r9d
  const char *v18; // r9
  __int64 v19; // rdx
  __int64 v21; // rdx
  BOOL bAlertable; // [rsp+20h] [rbp-40h]
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-28h] BYREF
  HANDLE Handles[3]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v2 = (__int64 *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v24, this);
  v4 = (PnpDeviceWatcher *)(v3 + 192);
  v5 = *v2;
  v6 = PnpDeviceWatcher::Initialize((PnpDeviceWatcher *)(v3 + 192), (struct LampArrayRawInputProvider *)v3);
  v10 = v6;
  if ( v6 < 0 )
  {
    v21 = 547LL;
  }
  else
  {
    v11 = this + 5;
    v6 = SipcServer::Create(v8, v7, v9, this);
    v10 = v6;
    if ( v6 >= 0 )
    {
      Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 40LL))(*v11);
      LastError = -2147024882;
      Handles[1] = this[41];
      Handles[2] = this[42];
      while ( 2 )
      {
        if ( *((_BYTE *)this + 184) )
        {
          LastError = 0;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 32LL))(*v11);
          if ( v13 < 0 )
          {
            v19 = 569LL;
          }
          else
          {
            v24 = -1;
            v13 = PnpDeviceWatcher::ProcessDeviceNotifications(v4, &v24);
            if ( v13 >= 0 )
            {
              v14 = -1;
              v15 = (HANDLE *)this[9];
              while ( v15 != this + 9 )
              {
                v16 = (LampArrayDevice *)v15[2];
                v23 = 0;
                if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(v16, &v23) == -2147024882 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x241,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparray"
                                  "rawinputprovider.cpp",
                    (const char *)0x8007000ELL,
                    bAlertable);
                  goto LABEL_19;
                }
                v15 = (HANDLE *)*v15;
                if ( v23 < v14 )
                  v14 = v23;
              }
              v17 = v24;
              if ( v14 < v24 )
                v17 = v14;
              if ( WaitForMultipleObjectsEx(3u, Handles, 0, v17, 1) != -1 )
              {
                v4 = (PnpDeviceWatcher *)(this + 24);
                continue;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x247,
                            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\l"
                                          "amparrayrawinputprovider.cpp",
                            v18);
              break;
            }
            v19 = 573LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
            (const char *)(unsigned int)v13,
            bAlertable);
          LastError = v13;
        }
        break;
      }
LABEL_19:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v5 + 40));
      PnpDeviceWatcher::Shutdown((PnpDeviceWatcher *)(v5 + 192));
      return LastError;
    }
    v21 = 556LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)v6,
    bAlertable);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v5 + 40));
  PnpDeviceWatcher::Shutdown((PnpDeviceWatcher *)(v5 + 192));
  return v10;
}
