/*
 * XREFs of ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x1804858AC
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x180482C9C (--1-$_Tidy_guard@V-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@.c)
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180482FDC (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagPOINTER_DEVICE_INFO>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
