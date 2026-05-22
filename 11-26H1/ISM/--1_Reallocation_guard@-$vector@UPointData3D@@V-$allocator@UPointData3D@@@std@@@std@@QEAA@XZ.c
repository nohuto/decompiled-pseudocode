/*
 * XREFs of ??1_Reallocation_guard@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x1800B9AB4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x1800B9684 (--$_Emplace_reallocate@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<PointData3D>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(184LL * *(_QWORD *)(a1 + 16)));
}
