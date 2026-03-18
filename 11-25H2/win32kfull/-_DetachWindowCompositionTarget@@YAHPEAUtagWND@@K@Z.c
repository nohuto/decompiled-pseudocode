/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401D6430
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401D633C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     RemoveVisRgnTracker @ 0x14005B418 (RemoveVisRgnTracker.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14005C114 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebp
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  CWindowProp *v7; // rdi
  unsigned int v8; // edx

  v2 = a2;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42242), 1u);
  v7 = (CWindowProp *)Prop;
  if ( Prop )
  {
    v4 = CHwndTargetProp::ClearSystemVisual(Prop, v2);
    if ( !*((_QWORD *)v7 + 3) && !*((_QWORD *)v7 + 5) && !*((_QWORD *)v7 + 7) )
      CWindowProp::RemoveAndDeleteProp(v7);
    if ( !v2 )
    {
      v8 = 4;
      goto LABEL_10;
    }
    if ( v2 == 1 )
    {
      v8 = 8;
LABEL_10:
      RemoveVisRgnTracker((__int64)a1, v8);
    }
  }
  return v4;
}
