/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401D215C
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401D206C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     RemoveVisRgnTracker @ 0x1401D2208 (RemoveVisRgnTracker.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebp
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  CWindowProp *v7; // rdi
  __int64 v8; // rdx

  v2 = a2;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42270), 1u);
  v7 = (CWindowProp *)Prop;
  if ( Prop )
  {
    v4 = CHwndTargetProp::ClearSystemVisual(Prop, v2);
    if ( !*((_QWORD *)v7 + 3) && !*((_QWORD *)v7 + 5) && !*((_QWORD *)v7 + 7) )
      CWindowProp::RemoveAndDeleteProp(v7);
    if ( v2 )
    {
      if ( v2 != 1 )
        return v4;
      v8 = 8LL;
    }
    else
    {
      v8 = 4LL;
    }
    RemoveVisRgnTracker(a1, v8);
  }
  return v4;
}
