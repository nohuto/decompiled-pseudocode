/*
 * XREFs of ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180125CD8
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180125C54 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0pxt_EventWriteTransfer @ 0x18020E350 (McTemplateU0pxt_EventWriteTransfer.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180230140 (--$emplace_back@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedLocalInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v6; // rdi
  __int64 v7; // r14
  int v8; // edx
  int v9; // ecx
  char v10; // bp

  v6 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  v7 = *((_QWORD *)g_pComposition + 110);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 360LL))(v4);
  }
  else
  {
    v10 = 1;
    v6 = (struct CSuperWetInkManager::SuperWetStroke *)std::vector<CSuperWetInkManager::SuperWetStroke>::emplace_back<>(v5 + 32);
    *(_QWORD *)v6 = a2;
  }
  *((_QWORD *)v6 + 11) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0pxt_EventWriteTransfer(v9, v8, (_DWORD)a2, v7, v10);
  if ( !*(_QWORD *)this || a2 == *(struct CSuperWetSource **)this || v10 )
    CSuperWetInkManager::SetActiveSource(this, v6);
}
