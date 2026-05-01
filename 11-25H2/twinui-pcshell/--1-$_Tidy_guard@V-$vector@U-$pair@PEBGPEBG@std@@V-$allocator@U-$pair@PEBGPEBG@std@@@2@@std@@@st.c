/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@@std@@QEAA@XZ @ 0x18031D230
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180297FB8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1803E6C14 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 * Callees:
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18016AC54 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>::~_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(v1);
}
