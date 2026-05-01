/*
 * XREFs of ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803BD1CC
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1803B65D0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004226C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1802C3454 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x180332624 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  char v4; // bl
  _BYTE v5[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v6; // [rsp+B8h] [rbp-20h] BYREF

  if ( tip2::details::shared_data<0,0,1>::begin_update(a1) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v5, a2);
    v4 = tip2::vector_nothrow<wil::StoredFailureInfo>::push_back((_QWORD *)(a1 + 72), (__int64)v5);
    wil::details::shared_buffer::reset(&v6);
    if ( !v4 )
      *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,0>::end_update(a1);
}
