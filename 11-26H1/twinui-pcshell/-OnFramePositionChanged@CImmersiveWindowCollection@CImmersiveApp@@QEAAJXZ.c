/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005A9B4
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18005A9A0 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800A8800 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180059AFC (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AC00 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18005D718 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C09F4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  bool v6; // zf
  __m128i v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // esi
  int v11; // esi
  int v12; // eax
  const RECT *v13; // rdx
  int v14; // eax
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  int v18; // eax
  _BYTE v19[48]; // [rsp+20h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-39h]
  __int128 v21; // [rsp+80h] [rbp-9h] BYREF
  __int128 v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  __int128 v25; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 248LL))(*((_QWORD *)this + 18));
  if ( v2 != *((_BYTE *)this + 193) )
  {
    *((_BYTE *)this + 193) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 0LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 19));
  }
  v3 = *((_QWORD *)this + 18);
  v23 = 0LL;
  v24 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 120LL))(v3, &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C02,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = *((_DWORD *)this + 8) == -1;
    v7 = *(__m128i *)((char *)this + 88);
    v20 = *((_QWORD *)this + 13);
    DWORD2(v22) = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)this + 6));
    LODWORD(v23) = v20;
    LODWORD(v22) = _mm_cvtsi128_si32(v7);
    if ( !v6 && *((_DWORD *)this + 18) != -1 )
      HIDWORD(v22) = HIDWORD(*((_QWORD *)this + 7));
    v8 = *((_QWORD *)this + 18);
    v19[0] = 0;
    v5 = 0;
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 272LL))(v8, v19) >= 0
      && v19[0] != *((_BYTE *)this + 195) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 264LL))(
              *((_QWORD *)this + 18),
              (unsigned int)-(v19[0] == 0));
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E44,
          (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v18);
      *((_BYTE *)this + 195) = v19[0];
    }
    v9 = *((_QWORD *)this + 18);
    v10 = *((_DWORD *)this + 51);
    v25 = 0LL;
    v11 = v10 & 2;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 128LL))(v9, &v25);
    v13 = (const RECT *)&v25;
    if ( v12 < 0 )
      v13 = 0LL;
    if ( v13 )
      CopyRect((LPRECT)this + 1, v13);
    v14 = v24;
    v15 = v22;
    *(_OWORD *)((char *)this + 72) = v21;
    v16 = v23;
    *(_OWORD *)((char *)this + 88) = v15;
    *((_QWORD *)this + 13) = v16;
    *((_DWORD *)this + 28) = v14;
    if ( *((_QWORD *)this + 21) && !v11 )
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(this);
  }
  return v5;
}
