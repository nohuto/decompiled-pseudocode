/*
 * XREFs of ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x1800CEB8C
 * Callers:
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$0 @ 0x1801D9594 (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 6 << 6));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
