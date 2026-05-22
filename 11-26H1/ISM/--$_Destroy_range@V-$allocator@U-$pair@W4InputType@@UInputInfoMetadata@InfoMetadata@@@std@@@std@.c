/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x180097A2C
 * Callers:
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18007CFD8 (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x180080ED4 (-_Change_array@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator.c)
 *     ??1?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A818C (--1-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator@U-$pair@W4I.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A81FC (--1_Reallocation_guard@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$a.c)
 * Callees:
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x180054DC8 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      InfoMetadata::InputInfoMetadata::~InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v3 + 8), a2);
      v3 += 392LL;
    }
    while ( v3 != a2 );
  }
}
