/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1801F680C
 * Callers:
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x1805B1FC4 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        char *a1,
        char *a2,
        char *a3)
{
  signed __int64 v3; // rax

  if ( a1 != a2 )
  {
    v3 = a1 - a3;
    do
    {
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)&a3[v3];
      *((_QWORD *)a3 + 1) = *(_QWORD *)&a3[v3 + 8];
      *(_QWORD *)&a3[v3] = 0LL;
      *(_QWORD *)&a3[v3 + 8] = 0LL;
      a3 += 16;
    }
    while ( &a3[v3] != a2 );
  }
  return a3;
}
