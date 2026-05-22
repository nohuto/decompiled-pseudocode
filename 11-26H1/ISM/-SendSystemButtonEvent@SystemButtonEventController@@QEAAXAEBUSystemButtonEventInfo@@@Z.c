/*
 * XREFs of ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18007CF10
 * Callers:
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015F798 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18015FCE0 (-OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x18015FD74 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 */

void __fastcall SystemButtonEventController::SendSystemButtonEvent(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  _OWORD *v4; // rdx
  char *v5; // rcx

  v4 = (_OWORD *)*((_QWORD *)this + 9);
  v5 = (char *)this + 64;
  if ( v4 == *((_OWORD **)v5 + 2) )
  {
    std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(v5, v4, a2);
  }
  else
  {
    *v4 = *(_OWORD *)a2;
    *((_QWORD *)v5 + 1) += 16LL;
  }
  (*(void (__fastcall **)(char *, const struct SystemButtonEventInfo *))(*((_QWORD *)this + 1) + 24LL))(
    (char *)this + 8,
    a2);
}
