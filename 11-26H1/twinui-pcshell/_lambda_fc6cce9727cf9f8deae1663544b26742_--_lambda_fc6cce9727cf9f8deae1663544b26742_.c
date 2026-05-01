/*
 * XREFs of _lambda_fc6cce9727cf9f8deae1663544b26742_::_lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x180409BA8
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180380054 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_180380054.c)
 */

__int64 __fastcall lambda_fc6cce9727cf9f8deae1663544b26742_::_lambda_fc6cce9727cf9f8deae1663544b26742_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a3[1];
  *(_QWORD *)(a1 + 24) = a3[2];
  v6 = *a3;
  *a3 = 0LL;
  a3[2] = 0LL;
  a3[1] = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = v6;
  *((_BYTE *)a3 + 24) = 1;
  *(_QWORD *)(a1 + 48) = a4[1];
  *(_QWORD *)(a1 + 56) = a4[2];
  v7 = *a4;
  *a4 = 0LL;
  a4[2] = 0LL;
  a4[1] = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = v7;
  *((_BYTE *)a4 + 24) = 1;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 72),
    a5);
  *(_QWORD *)(a1 + 72) = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  return a1;
}
