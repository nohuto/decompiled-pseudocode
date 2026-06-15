/*
 * XREFs of ?RuntimeClassInitialize@CCompositeSystemEffect@@QEAAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@@Z @ 0x18014FD70
 * Callers:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18014EC2C (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = 0;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a1 + 80) = a3;
  *(_DWORD *)(a1 + 84) = a4;
  *(_DWORD *)(a1 + 88) = a5;
  if ( !a6 )
    return 0LL;
  v8 = a1 + 96;
  while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                          v8,
                          (_OWORD *)(a7 + 16LL * v7)) )
  {
    if ( ++v7 >= a6 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D9,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
