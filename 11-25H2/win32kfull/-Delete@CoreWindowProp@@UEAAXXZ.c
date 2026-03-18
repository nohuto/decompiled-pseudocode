/*
 * XREFs of ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1402C9DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1402C9F70 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1402C9FFC (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 */

void __fastcall CoreWindowProp::Delete(CoreWindowProp *this)
{
  struct tagWND *v2; // rcx

  v2 = (struct tagWND *)*((_QWORD *)this + 4);
  if ( v2 )
    CoreWindowProp::RemoveComponentInternal(v2, *((struct tagWND **)this + 2));
  *((_QWORD *)this + 4) = 0LL;
  while ( *((_QWORD *)this + 5) )
    CoreWindowProp::UnlinkAndDestroyComponent(this, *((struct CoreWindowProp::Component **)this + 5), 0LL);
  Win32FreePool(this);
}
