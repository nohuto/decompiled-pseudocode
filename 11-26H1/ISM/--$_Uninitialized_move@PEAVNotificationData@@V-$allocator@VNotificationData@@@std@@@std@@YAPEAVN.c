/*
 * XREFs of ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18005D630
 * Callers:
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180060A88 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18006DC10 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180071DD0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Uninitialized_move<NotificationData *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int128 v6; // xmm0

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v4 - 16);
      a3 += 24;
      *(_QWORD *)&v5[v4 - 8] = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      v6 = *(_OWORD *)(v4 + 16);
      v4 += 96LL;
      *(_OWORD *)&v5[v4 - 80] = v6;
      *(_OWORD *)&v5[v4 - 64] = *(_OWORD *)(v4 - 64);
      *(_OWORD *)&v5[v4 - 48] = *(_OWORD *)(v4 - 48);
      *(_OWORD *)&v5[v4 - 32] = *(_OWORD *)(v4 - 32);
    }
    while ( v4 - 16 != a2 );
  }
  return a3;
}
