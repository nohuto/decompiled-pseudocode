/*
 * XREFs of ??1?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@QEAA@XZ @ 0x180328ED8
 * Callers:
 *     ?Release@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ @ 0x18032D718 (-Release@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180283260 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::~merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
