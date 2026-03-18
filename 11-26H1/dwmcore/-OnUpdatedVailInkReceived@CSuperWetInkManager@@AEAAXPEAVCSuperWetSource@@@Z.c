/*
 * XREFs of ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020AE10
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180125C54 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18020AED8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x18020AEFC (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedVailInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 v4; // rcx
  struct CSuperWetInkManager::VailSuperWetStroke *v5; // rbx
  CComposition *v6; // rax
  bool v7; // bp
  struct CSuperWetSource *v8; // r9
  __int64 v9; // rcx

  v5 = CSuperWetInkManager::TryLookupVailDataForSource(this, a2);
  if ( v5 )
  {
    v6 = g_pComposition;
    v7 = *((_QWORD *)g_pComposition + 110) - *((_QWORD *)v5 + 13) >= 0xAuLL;
  }
  else
  {
    v7 = 1;
    v5 = (struct CSuperWetInkManager::VailSuperWetStroke *)std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(v4 + 56);
    *(_QWORD *)v5 = a2;
    v6 = g_pComposition;
  }
  *((_QWORD *)v5 + 13) = *((_QWORD *)v6 + 110);
  v8 = *(struct CSuperWetSource **)this;
  if ( (!*(_QWORD *)this || a2 == v8 || v7) && *(struct CSuperWetSource **)v5 != v8 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v4, &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE, *(_QWORD *)v5);
    v9 = *(_QWORD *)v5;
    *(_QWORD *)this = *(_QWORD *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 344LL))(v9);
  }
}
