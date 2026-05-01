/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x1801CAA34
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272450 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??_G?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z @ 0x1801CAAB0 (--_G-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@PEAV10@00@Z @ 0x1802B7690 (--$_Move_unchecked@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAV12@@std@@YAP.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 i; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = std::_Move_unchecked<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *>(
           a4,
           *(_QWORD *)(a1 + 8));
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v7;
    for ( i = v7; i != v8; i += 16LL )
      std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'(i);
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
