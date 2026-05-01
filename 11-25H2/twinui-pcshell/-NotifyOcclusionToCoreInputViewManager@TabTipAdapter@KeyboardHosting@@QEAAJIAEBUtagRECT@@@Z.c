/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180096F9C
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18002CF90 (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18046A200 (--$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4C.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18046C69C (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // esi
  int OcclusionsVectorView; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx
  void **v13; // rax
  int v14; // [rsp+20h] [rbp-29h]
  _BYTE v15[4]; // [rsp+30h] [rbp-19h] BYREF
  int v16; // [rsp+34h] [rbp-15h] BYREF
  int v17; // [rsp+38h] [rbp-11h] BYREF
  __int64 v18; // [rsp+40h] [rbp-9h] BYREF
  __int128 v19; // [rsp+48h] [rbp-1h] BYREF
  void *v20[4]; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v21; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = a2;
  v16 = 0;
  (*(void (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 280LL))(*((_QWORD *)this + 16), a2, &v16);
  *(float *)&v19 = (float)a3->left;
  *((float *)&v19 + 1) = (float)a3->top;
  *((float *)&v19 + 2) = (float)(a3->right - a3->left);
  *((float *)&v19 + 3) = (float)(a3->bottom - a3->top);
  v21 = v19;
  v18 = 0LL;
  OcclusionsVectorView = KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView((__int64)this, v4, &a3->left, &v18);
  v7 = OcclusionsVectorView;
  if ( OcclusionsVectorView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)OcclusionsVectorView);
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 72LL))(*((_QWORD *)this + 6), v18);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    return v7;
  }
  v17 = 11;
  v15[0] = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, _BYTE *))(**((_QWORD **)this + 9) + 136LL))(
         *((_QWORD *)this + 9),
         v4,
         &v17,
         v15);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9,
      v14);
  if ( !v15[0] )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7D2,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
  if ( !v17 || v17 == 8 )
  {
    KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(this, v20);
    v13 = v20;
    if ( v20[3] > (void *)7 )
      v13 = (void **)v20[0];
    *(_QWORD *)&v19 = v13;
    TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
      (unsigned int)&v17,
      (unsigned int)&v16,
      (unsigned int)&v19,
      (unsigned int)&v21,
      (__int64)this + 456,
      (__int64)this + 472);
    std::wstring::_Tidy_deallocate(v20);
  }
  v10 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
