/*
 * XREFs of ??0?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@QEAA@XZ @ 0x18004F720
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004E870 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Privat.c)
 * Callees:
 *     ??0?$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18004F7EC (--0-$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  _OWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0xC140022A7329LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>::`vftable';
  *((_QWORD *)&v3 + 1) = "ResponsiveScreenRotationAnimationTest";
  v4[0] = v3;
  v4[2] = 0uLL;
  v4[1] = 1uLL;
  tip2::details::shared_data<0,0,0>::shared_data<0,0,0>(a1 + 8, a1, v4);
  *(_DWORD *)(a1 + 264) = 0;
  *(_WORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
