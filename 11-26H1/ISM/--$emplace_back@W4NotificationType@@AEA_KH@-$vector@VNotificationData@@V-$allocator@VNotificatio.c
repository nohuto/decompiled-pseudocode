/*
 * XREFs of ??$emplace_back@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x1800A53D8
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x180048110 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180071DD0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 */

_DWORD *__fastcall std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,int>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3,
        int *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  v6 = a1[1];
  if ( v6 == a1[2] )
    return std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
             a1,
             v6,
             a2,
             a3,
             a4);
  v7 = *a4;
  v8 = *a3;
  *(_DWORD *)v6 = *a2;
  *(_QWORD *)(v6 + 8) = v8;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 16) = 0LL;
  v9 = a1[1];
  a1[1] = v9 + 96;
  return (_DWORD *)v9;
}
