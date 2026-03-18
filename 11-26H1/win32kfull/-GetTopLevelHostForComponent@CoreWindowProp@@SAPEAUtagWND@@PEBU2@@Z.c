/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254
 * Callers:
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x1400461A8 (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046210 (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B000 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1402E1664 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHostForComponent(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v3; // rbx
  const struct tagWND *Host; // rax
  __int64 v6; // rdx

  v3 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v3 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v3);
      v3 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host, v6) );
  }
  return v3;
}
