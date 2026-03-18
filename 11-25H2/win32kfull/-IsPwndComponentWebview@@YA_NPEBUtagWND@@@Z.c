/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402AC96C
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x14026FF28 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserNavigateFocus @ 0x14029B410 (NtUserNavigateFocus.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015CE44 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetParent @ 0x14017BCE8 (_GetParent.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax

  Host = CoreWindowProp::GetHost(a1);
  return Host && (Parent = GetParent(Host)) != 0 && (*(_BYTE *)(*(_QWORD *)(Parent + 40) + 233LL) & 8) != 0;
}
