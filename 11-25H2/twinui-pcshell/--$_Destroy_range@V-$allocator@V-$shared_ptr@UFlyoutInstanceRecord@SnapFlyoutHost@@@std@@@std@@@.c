/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1801CA9FC
 * Callers:
 *     ??1?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA@XZ @ 0x1801CA9B4 (--1-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18057A4F4 (--1SnapFlyoutHost@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x18058DCE0 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 *     _std::vector_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord__std::allocator_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_____::_Emplace_reallocate_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord____::_1_::catch$0 @ 0x1806D05DF (_std--vector_std--shared_ptr_SnapFlyoutHost--FlyoutInstanceRecord__std--allocator_std--shared_pt.c)
 * Callees:
 *     ??_G?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z @ 0x1801CAAB0 (--_G-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
