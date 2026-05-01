/*
 * XREFs of ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1802CC644
 * Callers:
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801D4968 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x1802D1780 (--1-$vector@GV-$allocator@G@std@@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetRegistrySettingString @ 0x1805AEA38 (_anonymous_namespace_--GetRegistrySettingString.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
