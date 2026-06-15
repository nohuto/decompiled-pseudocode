/*
 * XREFs of ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180046BE4
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002F810 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180029304 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180029710 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x1800455E8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___ @ 0x1800CD3B4 (wil--scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___.c)
 *     wil::details::lambda_call__lambda_62e8f2fa1d5fd9a23f449c3dec7741ca___::_lambda_call__lambda_62e8f2fa1d5fd9a23f449c3dec7741ca___ @ 0x1800CD3CC (wil--details--lambda_call__lambda_62e8f2fa1d5fd9a23f449c3dec7741ca___--_lambda_call__lambda_62e8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
        const void **this,
        struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int AudioSessionPropertyStore; // ebx
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = CAudioSessionInstanceId::ToPersistedString(this + 73, &v12, 1);
  AudioSessionPropertyStore = v4;
  if ( v4 >= 0 )
  {
    v11 = -2147023728;
    v6 = lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(v8, &v12, &v11);
    wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___(v9, v6);
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(
                                  g_PolicyConfig,
                                  (struct IAudioSessionInfo *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
                                  a2);
    v11 = AudioSessionPropertyStore;
    wil::details::lambda_call__lambda_62e8f2fa1d5fd9a23f449c3dec7741ca___::_lambda_call__lambda_62e8f2fa1d5fd9a23f449c3dec7741ca___(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF95,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  return AudioSessionPropertyStore;
}
