/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z @ 0x1800B42E0
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800B495C (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

CreativeFramework::TargetedContentLayoutHelpers::Tile *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
        CreativeFramework::TargetedContentLayoutHelpers::Tile *this,
        const struct CreativeFramework::TargetedContentLayoutHelpers::Tile *a2)
{
  std::wstring::wstring((__int64)this, (__int64)a2);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 48);
  return this;
}
