/*
 * XREFs of ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x1800A5378
 * Callers:
 *     NotifyInputSinkParented @ 0x180047CE0 (NotifyInputSinkParented.c)
 * Callees:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18006DC10 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 */

_DWORD *__fastcall std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  v6 = a1[1];
  if ( v6 == a1[2] )
    return std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
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
