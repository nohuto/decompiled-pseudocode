/*
 * XREFs of ?_Calculate_growth@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEBA_K_K@Z @ 0x180061D8C
 * Callers:
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180060A88 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18006DC10 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180071DD0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<NotificationData>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x2AAAAAAAAAAAAAALL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 5)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 5) <= 0x2AAAAAAAAAAAAAALL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 5);
    if ( result < a2 )
      return a2;
  }
  return result;
}
