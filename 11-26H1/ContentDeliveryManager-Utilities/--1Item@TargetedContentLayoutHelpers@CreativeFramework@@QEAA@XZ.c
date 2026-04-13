/*
 * XREFs of ??1Item@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800AE150
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@EEAAXXZ @ 0x1800B19C0 (-_Destroy@-$_Ref_count_obj@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Item::~Item(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
  WindowsDeleteString(*this);
  *this = 0LL;
}
