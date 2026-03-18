/*
 * XREFs of ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x1400461A8
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

char __fastcall IsWindowShellCloakedComponentUIAware(const struct tagWND *a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  struct tagWND *TopLevelHostForComponent; // rbx

  v2 = a2;
  v3 = 0;
  while ( 1 )
  {
    TopLevelHostForComponent = a1;
    if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelHostForComponent);
    if ( !TopLevelHostForComponent )
      break;
    if ( (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0 )
      return 1;
    if ( v2 )
      return v3;
    a1 = (const struct tagWND *)*((_QWORD *)TopLevelHostForComponent + 13);
  }
  return v3;
}
