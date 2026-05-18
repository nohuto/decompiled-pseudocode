/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ_0 @ 0x180011E74
 * Callers:
 *     sub_1800D7EED @ 0x1800D7EED (sub_1800D7EED.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA @ 0x1800D8855 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA.c)
 *     sub_1800D8F51 @ 0x1800D8F51 (sub_1800D8F51.c)
 *     sub_1800D918C @ 0x1800D918C (sub_1800D918C.c)
 *     sub_1800D93F4 @ 0x1800D93F4 (sub_1800D93F4.c)
 *     sub_1800D9863 @ 0x1800D9863 (sub_1800D9863.c)
 *     sub_1800D9E17 @ 0x1800D9E17 (sub_1800D9E17.c)
 *     sub_1800D9E4D @ 0x1800D9E4D (sub_1800D9E4D.c)
 *     sub_1800D9F91 @ 0x1800D9F91 (sub_1800D9F91.c)
 *     sub_1800DA201 @ 0x1800DA201 (sub_1800DA201.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_1 @ 0x1800DA3F0 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_1800DA3F0.c)
 *     sub_1800DA5B2 @ 0x1800DA5B2 (sub_1800DA5B2.c)
 *     sub_1800DA5F0 @ 0x1800DA5F0 (sub_1800DA5F0.c)
 *     sub_1800DA606 @ 0x1800DA606 (sub_1800DA606.c)
 *     sub_1800DA61C @ 0x1800DA61C (sub_1800DA61C.c)
 *     sub_1800DA632 @ 0x1800DA632 (sub_1800DA632.c)
 *     sub_1800DA648 @ 0x1800DA648 (sub_1800DA648.c)
 *     sub_1800DA9A0 @ 0x1800DA9A0 (sub_1800DA9A0.c)
 *     sub_1800DABD3 @ 0x1800DABD3 (sub_1800DABD3.c)
 *     sub_1800DAC99 @ 0x1800DAC99 (sub_1800DAC99.c)
 *     sub_1800DAD0D @ 0x1800DAD0D (sub_1800DAD0D.c)
 *     sub_1800DB638 @ 0x1800DB638 (sub_1800DB638.c)
 *     sub_1800DB651 @ 0x1800DB651 (sub_1800DB651.c)
 *     sub_1800DB6D0 @ 0x1800DB6D0 (sub_1800DB6D0.c)
 *     sub_1800DB772 @ 0x1800DB772 (sub_1800DB772.c)
 *     sub_1800DBD09 @ 0x1800DBD09 (sub_1800DBD09.c)
 *     sub_1800DBFA0 @ 0x1800DBFA0 (sub_1800DBFA0.c)
 *     sub_1800DC01E @ 0x1800DC01E (sub_1800DC01E.c)
 *     sub_1800DC174 @ 0x1800DC174 (sub_1800DC174.c)
 *     sub_1800DC18A @ 0x1800DC18A (sub_1800DC18A.c)
 *     sub_1800DC2CB @ 0x1800DC2CB (sub_1800DC2CB.c)
 *     sub_1800DC8F7 @ 0x1800DC8F7 (sub_1800DC8F7.c)
 *     sub_1800DCC8C @ 0x1800DCC8C (sub_1800DCC8C.c)
 *     sub_1800DD937 @ 0x1800DD937 (sub_1800DD937.c)
 *     sub_1800DE767 @ 0x1800DE767 (sub_1800DE767.c)
 *     sub_1800E48BB @ 0x1800E48BB (sub_1800E48BB.c)
 *     sub_1800E5143 @ 0x1800E5143 (sub_1800E5143.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  volatile signed __int32 *v1; // rcx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v1 )
    sub_180010F00(v1);
}
