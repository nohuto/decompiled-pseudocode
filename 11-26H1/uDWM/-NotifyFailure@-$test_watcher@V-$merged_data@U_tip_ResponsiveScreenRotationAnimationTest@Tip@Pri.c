/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D32F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180026930 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180041F68 (-begin_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18008A89C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180090754 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800D4DD4 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  char v4; // bl
  _BYTE v6[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v7; // [rsp+B8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( tip2::details::shared_data<0,0,0>::begin_update(v2 + 8) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v4 = tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(v2 + 80, v6);
    wil::details::shared_buffer::reset(&v7);
    if ( !v4 )
      *(_DWORD *)(v2 + 72) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,0>::end_update(v2 + 8);
  return 0;
}
