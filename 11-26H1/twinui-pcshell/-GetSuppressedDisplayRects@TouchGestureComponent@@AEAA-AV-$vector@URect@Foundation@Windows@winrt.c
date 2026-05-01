/*
 * XREFs of ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x18058BA4C
 * Callers:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058BD50 (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@XZ @ 0x180173A28 (--DIterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801ACDAC (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x180219984 (--$_Emplace_one_at_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAAEA.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18029B8B0 (-begin@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18029B8D8 (-end@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18029B934 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x18058B874 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall TouchGestureComponent::GetSuppressedDisplayRects(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  struct IImmersiveMonitor *v6; // rbx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+28h] [rbp-41h] BYREF
  int v11; // [rsp+30h] [rbp-39h]
  struct IImmersiveMonitor *v12; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v15; // [rsp+58h] [rbp-11h] BYREF
  __int64 v16[2]; // [rsp+68h] [rbp-1h] BYREF
  int v17; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v18[3]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v19; // [rsp+98h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v18[2] = (__int64)a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v11 = 1;
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 128);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v5 = v4(v3, &v10);
  if ( v5 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
      (__int64)v16,
      v10);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::begin(
      (__int64)v16,
      (__int64)&v13);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::end(
      (__int64)v16,
      (__int64)&v17);
    while ( v13 != v17 || v14[1] != v18[1] )
    {
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::operator*(
        (__int64)&v13,
        &v12);
      v9 = 0;
      v6 = v12;
      v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v12 + 48LL))(v12, &v9);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA0,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
          (const char *)(unsigned int)v7);
LABEL_13:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        break;
      }
      if ( !v9 )
        goto LABEL_13;
      if ( TouchGestureHelper::DoesMonitorSuppressGestures((IUnknown *)v6) )
      {
        v19 = 0LL;
        if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v6 + 72LL))(v6, &v19) >= 0 )
        {
          *(float *)&v15 = (float)(int)v19;
          *((float *)&v15 + 1) = (float)SDWORD1(v19);
          *((float *)&v15 + 2) = (float)(DWORD2(v19) - v19);
          *((float *)&v15 + 3) = (float)(HIDWORD(v19) - DWORD1(v19));
          std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>((__int64)a2, &v15);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      ++v13;
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x98,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return a2;
}
