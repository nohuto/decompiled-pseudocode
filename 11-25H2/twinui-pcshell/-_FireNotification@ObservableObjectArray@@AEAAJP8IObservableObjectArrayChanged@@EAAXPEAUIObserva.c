/*
 * XREFs of ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1804AC524
 * Callers:
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804AC460 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804AC82C (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801C2138 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@XZ @ 0x18043C940 (--DIterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804AC158 (--0Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UIObservableObjec.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804AC188 (--0Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$ComPtr@UIObserva.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1804AC214 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UI.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1804AC2B4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ObservableObjectArray::_FireNotification(
        RTL_SRWLOCK *a1,
        void (__fastcall *a2)(__int64, RTL_SRWLOCK *, __int64),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct IObjectArray *v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  struct IObjectArray *v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  struct IObjectArray *v17; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  __int64 v24; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct IObjectArray *v26; // [rsp+A0h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  CallbackArray = CGITRegistrationList::GetCallbackArray(a1 + 12, &v15);
  v9 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v10 = CGITRegistrationList::GetCallbackArray(a1 + 6, &v26);
    v9 = v10;
    if ( v10 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
        (__int64)&v17,
        (__int64)v15);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v19,
        (__int64)&v17,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v22,
        (__int64)&v17,
        v18);
      while ( v19 != v22 || v21 != v24 )
      {
        details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::operator*(
          (__int64)&v19,
          &v16);
        (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, __int64))(*(_QWORD *)v16 + 24LL))(v16, a1, a3, a4);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        ++v19;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v19);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v11 = v26;
      v17 = v26;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v18 = 0;
      v12 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v11->lpVtbl->GetCount)(v11, &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10,
          (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v12);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::Iterator(
        (__int64)&v19,
        (__int64)&v17,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::Iterator(
        (__int64)&v22,
        (__int64)&v17,
        v18);
      while ( v19 != v22 || v21 != v24 )
      {
        v13 = v20;
        v16 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        a2(v13, a1, a4);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        ++v19;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::GetCurrentObject(&v19);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
        (__int64)&v17,
        (__int64)v15);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v19,
        (__int64)&v17,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v22,
        (__int64)&v17,
        v18);
      while ( v19 != v22 || v21 != v24 )
      {
        details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::operator*(
          (__int64)&v19,
          &v16);
        (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, __int64))(*(_QWORD *)v16 + 32LL))(v16, a1, a3, a4);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        ++v19;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v19);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v9;
}
