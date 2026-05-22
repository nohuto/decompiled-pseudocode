/*
 * XREFs of ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x18019721C
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$9 @ 0x1801DC8FF (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180196180 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@A.c)
 */

void __fastcall std::vector<InputSpacePayload>::~vector<InputSpacePayload>(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(v2, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
