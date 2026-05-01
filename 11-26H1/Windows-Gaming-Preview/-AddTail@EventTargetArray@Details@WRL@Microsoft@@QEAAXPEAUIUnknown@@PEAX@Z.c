/*
 * XREFs of ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18001BF34
 * Callers:
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001BB34 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?RemoveDelegate@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180020FB0 (-RemoveDelegate@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Wind.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::Details::EventTargetArray::AddTail(
        Microsoft::WRL::Details::EventTargetArray *this,
        struct IUnknown *a2,
        void *a3)
{
  struct IUnknown **v6; // rsi
  struct IUnknown *v7; // rcx

  v6 = (struct IUnknown **)*((_QWORD *)this + 3);
  if ( *v6 != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v7 = *v6;
    *v6 = a2;
    if ( v7 )
      ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3)) = a3;
  *((_QWORD *)this + 3) += 8LL;
}
