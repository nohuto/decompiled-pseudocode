/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180109E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18009DBC4 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800A10EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18010A358 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18010AB78 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  char v4; // bl
  _BYTE v6[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v7; // [rsp+B8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 200));
  ++*(_DWORD *)(v2 + 240);
  if ( (*(_DWORD *)(v2 + 72) & 0x100) == 0 )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v4 = tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(v2 + 80, v6);
    wil::details::shared_buffer::reset(&v7);
    if ( !v4 )
      *(_DWORD *)(v2 + 72) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,1>::end_update(v2 + 8);
  return 0;
}
