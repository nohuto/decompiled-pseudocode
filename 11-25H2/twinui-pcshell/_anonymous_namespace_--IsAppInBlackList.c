/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x18002A268
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x180028F3C (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002B0D8 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(char *a1)
{
  void **i; // r8
  char *v3; // rdx
  __int64 v4; // rax
  char *v5; // r9
  __int64 v6; // rcx
  signed __int64 v7; // r9

  for ( i = (void **)off_1806E2650; ; ++i )
  {
    if ( i == &std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`vftable' )
      return 0;
    v3 = (char *)*i;
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&v3[2 * v4] );
    v5 = a1;
    v6 = *((_QWORD *)a1 + 2);
    if ( *((_QWORD *)a1 + 3) > 7uLL )
      v5 = *(char **)a1;
    if ( v6 == v4 )
      break;
LABEL_13:
    ;
  }
  v7 = v5 - v3;
  while ( v6 )
  {
    if ( *(_WORD *)&v3[v7] != *(_WORD *)v3 )
      goto LABEL_13;
    --v6;
    v3 += 2;
  }
  return 1;
}
