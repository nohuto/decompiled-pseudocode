/*
 * XREFs of ??0?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806326E4
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1806375B8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_WORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 266) = 0;
  *(_OWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 296) = 7LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_WORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 328) = 7LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_WORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 360) = 7LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_WORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 392) = 7LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_WORD *)(a1 + 368) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 400) = 1;
  return result;
}
