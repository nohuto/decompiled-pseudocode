/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180056CBC
 * Callers:
 *     ?UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ @ 0x18001D3B0 (-UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180056868 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z @ 0x180065154 (-UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AA43C (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = 40LL;
  if ( *((double *)this + 3) < 0.0 )
    v3 = 32LL;
  *((_QWORD *)this + 6) = *(_QWORD *)((char *)this + v3);
  *((_BYTE *)this + 72) = 1;
}
