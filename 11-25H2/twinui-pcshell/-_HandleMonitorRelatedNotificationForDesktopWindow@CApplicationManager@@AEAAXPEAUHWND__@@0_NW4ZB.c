/*
 * XREFs of ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x18008921C
 * Callers:
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180087580 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1801D525C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800881A4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180088CBC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        CApplicationManager *a1,
        __int64 a2,
        HWND a3,
        char a4,
        unsigned int a5)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // esi
  struct IImmersiveMonitor *v13; // rbx
  struct ISyncIAMEventHandler *v14; // rcx
  struct IObjectArray *v15; // rcx
  struct ISyncIAMEventHandler *v16; // [rsp+50h] [rbp-10h] BYREF
  struct IObjectArray *v17; // [rsp+58h] [rbp-8h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+38h] BYREF

  v18 = 0LL;
  if ( GetShellWindow() != a3
    && !(unsigned int)GetPropW(a3, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 94) + 24LL))(*((_QWORD **)a1 + 94)) != a3 )
  {
    (*(void (__fastcall **)(_QWORD *, HWND, GUID *, GUID *, struct IImmersiveMonitor **))(**((_QWORD **)a1 + 70) + 88LL))(
      *((_QWORD **)a1 + 70),
      a3,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      &v18);
  }
  v9 = (__int64 *)*((_QWORD *)a1 + 67);
  v10 = *v9;
  if ( a4 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, struct IImmersiveMonitor *, _DWORD, _DWORD, _QWORD))(v10 + 24))(
               v9,
               a2,
               a5,
               0LL,
               v18,
               0,
               0,
               0LL);
    v12 = 3;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IImmersiveMonitor *))(v10 + 32))(v9, a2, v18);
    v12 = 2;
  }
  if ( !(_BYTE)result )
    goto LABEL_8;
  v13 = v18;
  if ( v18 )
  {
    v19 = 0;
    result = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(**((_QWORD **)a1 + 70) + 32LL))(
               *((_QWORD **)a1 + 70),
               &v19);
    if ( v19 > 1 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 66) + 56LL))(*((_QWORD **)a1 + 66));
      if ( (_DWORD)result == 1 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a1 + 67) + 88LL))(
                   *((_QWORD **)a1 + 67),
                   a2);
        if ( (_BYTE)result )
        {
          v17 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
          result = CApplicationManager::_GetSingleMonitorObjectArray(a1, v13, &v17);
          if ( (int)result >= 0 )
          {
            v16 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
            result = CApplicationManager::_GetGlobalSyncEventHandler(a1, &v16);
            if ( (int)result >= 0 )
              result = (*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v16 + 24LL))(
                         v16,
                         v17,
                         ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
                         0LL,
                         1,
                         v12,
                         0xFFFF);
            v14 = v16;
            if ( v16 )
            {
              v16 = 0LL;
              result = (*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
            }
          }
          v15 = v17;
          if ( v17 )
          {
            v17 = 0LL;
            result = ((__int64 (__fastcall *)(struct IObjectArray *))v15->lpVtbl->Release)(v15);
          }
        }
      }
    }
LABEL_8:
    v13 = v18;
  }
  if ( v13 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
