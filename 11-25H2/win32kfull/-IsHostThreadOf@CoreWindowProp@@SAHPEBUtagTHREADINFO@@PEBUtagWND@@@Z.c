/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x140214894
 * Callers:
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14021480C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015CE44 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(const struct tagTHREADINFO *a1, const struct tagWND *a2)
{
  unsigned int v4; // ebx
  struct tagWND *Host; // rax

  v4 = 0;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a2, (__int64)a2) )
    return 0LL;
  Host = CoreWindowProp::GetHost(a2);
  if ( Host )
    return a1 == *((const struct tagTHREADINFO **)Host + 2);
  return v4;
}
