/*
 * XREFs of ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047BB10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x180026E24 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z @ 0x180026F18 (--4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800284E8 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800291B0 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?front@?$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@@std@@QEAAAEAUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@XZ @ 0x1803EDE38 (-front@-$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$deque@UPendingShowHide.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x1804786F0 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047A59C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     ?pop_front@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAAXXZ @ 0x180480A2C (-pop_front@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPending.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *a3)
{
  char *v5; // rsi
  unsigned int v6; // ebx
  const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData *v7; // rax
  __m128 *ViewOptions; // rax
  ViewOptions *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v14; // eax
  _BYTE v15[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v16[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+4Ch] [rbp-B4h]
  int v19; // [rsp+54h] [rbp-ACh]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[72]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp-38h]
  float v24; // [rsp+D0h] [rbp-30h]
  float v25; // [rsp+D4h] [rbp-2Ch]
  float v26; // [rsp+D8h] [rbp-28h]
  float v27; // [rsp+DCh] [rbp-24h]
  char v28; // [rsp+E0h] [rbp-20h]
  __int64 v29[3]; // [rsp+E8h] [rbp-18h] BYREF
  __m128 v30[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v31[3]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v5 = (char *)this + 512;
  if ( *((_QWORD *)this + 68) )
  {
    v7 = (const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)std::queue<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::front((_QWORD *)this + 64);
    KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
      (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v22,
      v7);
    if ( !v28 )
    {
      while ( *((_QWORD *)this + 68) )
        std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::pop_front(v5);
      v6 = -2147418113;
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x52C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_16;
    }
    v15[0] = 0;
    (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
      a3,
      v15);
    if ( v15[0] )
    {
      v14 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(
              (__int64)this,
              *((_DWORD *)this + 124),
              0,
              0,
              0);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54B,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v16[0] = 0;
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 256LL))(*((_QWORD *)this + 16), v16);
      ViewOptions = GetViewOptions(v30, (__int64)v22, (__int64)v29, v16[0]);
      ViewOptions::operator=((__int64)&v17, (__int64)ViewOptions);
      std::vector<Geometry::CRect>::_Tidy(v31);
      v9 = ViewOptions::ViewOptions((ViewOptions *)v30, (const struct ViewOptions *)&v17);
      v16[0] = (int)v24;
      v16[1] = (int)v25;
      v16[2] = (int)(float)(v26 + v24);
      v16[3] = (int)(float)(v27 + v25);
      v10 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow((__int64)this, v23, v16, (__int64)v9);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x538,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v10);
        std::vector<Geometry::CRect>::_Tidy((__int64 *)&v20);
LABEL_16:
        std::vector<Geometry::CRect>::_Tidy(v29);
        return v6;
      }
      if ( v23 == *((_DWORD *)this + 124) )
      {
        v12 = *((unsigned int *)this + 96);
        if ( (_DWORD)v12 != 1 )
        {
          v12 = 2LL;
          *((_DWORD *)this + 96) = 2;
        }
        LOBYTE(v11) = *((_BYTE *)this + 388);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _BYTE))(**((_QWORD **)this + 4) + 640LL))(
          *((_QWORD *)this + 4),
          v12,
          0LL,
          v11,
          *((_BYTE *)this + 389));
        *((_DWORD *)this + 96) = 0;
      }
      std::vector<Geometry::CRect>::_Tidy((__int64 *)&v20);
    }
    std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::pop_front(v5);
    v6 = 0;
    goto LABEL_16;
  }
  v6 = -2147418113;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x51F,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)0x8000FFFFLL);
  return v6;
}
