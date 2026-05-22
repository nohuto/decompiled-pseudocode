/*
 * XREFs of ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800A5304
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x1800519E0 (NotifyInputSinkTransformChanged.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180060A88 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 */

_DWORD *__fastcall std::vector<NotificationData>::emplace_back<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
             a1,
             v4,
             a2,
             a3);
  v5 = *a2;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 8) = v5;
  *(_DWORD *)v4 = 2;
  *(_OWORD *)(v4 + 32) = *a3;
  *(_OWORD *)(v4 + 48) = a3[1];
  *(_OWORD *)(v4 + 64) = a3[2];
  *(_OWORD *)(v4 + 80) = a3[3];
  v6 = a1[1];
  a1[1] = v6 + 96;
  return (_DWORD *)v6;
}
