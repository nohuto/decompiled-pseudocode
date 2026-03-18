/*
 * XREFs of ?ClearShape@CCursorState@@UEAAXXZ @ 0x180291270
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::ClearShape(CCursorState *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&g_CursorManager);
  if ( *((_QWORD *)this + 22) )
  {
    *(_OWORD *)v2 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, (__int64 *)v2);
    if ( v2[1] )
      std::_Ref_count_base::_Decref(v2[1]);
    *((_BYTE *)this + 23) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
