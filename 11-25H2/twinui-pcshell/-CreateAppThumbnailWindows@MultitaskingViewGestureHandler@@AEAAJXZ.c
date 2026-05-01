/*
 * XREFs of ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A2FC
 * Callers:
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A170 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@XZ @ 0x1801800A0 (--DIterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B4014 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A2B44 (-begin@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A2B6C (-end@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802A2BC4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x180487E3C (--$-0VCAppThumbnailWindow@@$0A@@-$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailW.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCAppThumbnailWindow@@@std@@@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCAppThumbnailWindow@@@1@QEAV21@AEBV21@@Z @ 0x1804883C4 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCAppThumbnailWindow@@@std@@@-$vector@V-$shared_ptr@VCAp.c)
 *     ??0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180488D84 (--0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180489CB0 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall MultitaskingViewGestureHandler::CreateAppThumbnailWindows(MultitaskingViewGestureHandler *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // r15d
  int v10; // eax
  struct IVirtualDesktop *v11; // r15
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct IApplicationViewCollection *v15; // rbx
  CAppThumbnailWindow *v16; // rax
  _QWORD *v17; // rcx
  int v19; // [rsp+30h] [rbp-69h] BYREF
  struct IVirtualDesktop *v20; // [rsp+38h] [rbp-61h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h] BYREF
  __int64 v22; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-39h] BYREF
  __int64 v25[2]; // [rsp+68h] [rbp-31h] BYREF
  HMONITOR v26; // [rsp+78h] [rbp-21h] BYREF
  __int64 v27; // [rsp+80h] [rbp-19h] BYREF
  std::_Ref_count_base *v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+90h] [rbp-9h] BYREF
  __int64 v30[2]; // [rsp+98h] [rbp-1h] BYREF
  CAppThumbnailWindow *v31; // [rsp+A8h] [rbp+Fh]
  MultitaskingViewGestureHandler *v32; // [rsp+B0h] [rbp+17h]
  char v33; // [rsp+B8h] [rbp+1Fh]
  __int128 v34; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  if ( *((_QWORD *)this + 12) != *((_QWORD *)this + 13) )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
  v22 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  v3 = *v2;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v32 = this;
    v33 = 1;
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
      (__int64)v23,
      v22);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::begin(
      (__int64)v23,
      (__int64)&v24);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::end(
      (__int64)v23,
      (__int64)&v29);
    while ( 1 )
    {
      if ( v24 == v29 && v25[1] == v30[1] )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v30);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
        return 0LL;
      }
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::operator*(
        (__int64)&v24,
        &v21);
      v19 = 0;
      v6 = v21;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v19);
      if ( v7 >= 0 )
      {
        if ( v19 )
        {
          v34 = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 72LL))(v6, &v34);
          v9 = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C3,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
              (const char *)(unsigned int)v8);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v30);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
            MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
            return v9;
          }
          v26 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v6 + 40LL))(v6, &v26);
          v5 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C6,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
              (const char *)(unsigned int)v10);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v30);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
            MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
            goto LABEL_30;
          }
          v11 = 0LL;
          v20 = 0LL;
          v12 = (__int64 *)*((_QWORD *)this + 15);
          if ( v12 )
          {
            v13 = *v12;
            v20 = 0LL;
            v14 = (*(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v13 + 48))(v12, &v20);
            v5 = v14;
            if ( v14 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1CB,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
                (const char *)(unsigned int)v14);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v30);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
              MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
              goto LABEL_30;
            }
            v11 = v20;
          }
          v15 = (struct IApplicationViewCollection *)*((_QWORD *)this + 7);
          v31 = (CAppThumbnailWindow *)operator new(0x248uLL);
          v16 = CAppThumbnailWindow::CAppThumbnailWindow(v31, (const struct Geometry::CRect *)&v34, v15, &v26, v11);
          std::shared_ptr<CAppThumbnailWindow>::shared_ptr<CAppThumbnailWindow>(&v27, v16);
          if ( !v27 )
          {
            v5 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1CF,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
              (const char *)0x8007000ELL);
            if ( v28 )
              std::_Ref_count_base::_Decref(v28);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v30);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
            MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
            goto LABEL_30;
          }
          v17 = (_QWORD *)*((_QWORD *)this + 13);
          if ( v17 == *((_QWORD **)this + 14) )
          {
            std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Emplace_reallocate<std::shared_ptr<CAppThumbnailWindow> const &>(
              (__int64 *)this + 12,
              *((char **)this + 13),
              &v27);
          }
          else
          {
            std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v17, &v27);
            *((_QWORD *)this + 13) += 16LL;
          }
          if ( v28 )
            std::_Ref_count_base::_Decref(v28);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C0,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v7);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      ++v24;
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v24);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B4,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_30:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  return v5;
}
