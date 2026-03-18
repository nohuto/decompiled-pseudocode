/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401B8BB8
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1401B8A54 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     CreateVisRgnTracker @ 0x14005B558 (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14005BE20 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14005C114 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1401B8CE0 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, __int64 a2, struct CompositionObject *a3)
{
  __int64 v4; // rsi
  __int64 UserSessionState; // rax
  char v7; // r14
  CWindowProp *Prop; // rax
  CWindowProp *v9; // rdi
  signed int VisRgnTracker; // ebx
  int v12; // edx
  CWindowProp *v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = (int)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 1;
  Prop = (CWindowProp *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42242), 1u);
  v13 = Prop;
  v9 = Prop;
  if ( Prop )
  {
    v7 = 0;
    VisRgnTracker = *((_QWORD *)Prop + 2 * v4 + 3) != 0LL ? 0xC0000022 : 0;
    if ( *((_QWORD *)Prop + 2 * v4 + 3) )
      return (unsigned int)VisRgnTracker;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v13);
    if ( VisRgnTracker < 0 )
      return (unsigned int)VisRgnTracker;
    v9 = v13;
    if ( !(unsigned int)CWindowProp::SetProp(v13, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v9)(v9);
      return (unsigned int)-1073741790;
    }
  }
  VisRgnTracker = CHwndTargetProp::SetSystemVisual(v9, (unsigned int)v4, a3);
  if ( VisRgnTracker < 0 )
    goto LABEL_9;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return (unsigned int)VisRgnTracker;
    v12 = 8;
  }
  else
  {
    v12 = 4;
  }
  VisRgnTracker = CreateVisRgnTracker(a1, v12);
  if ( VisRgnTracker < 0 )
  {
LABEL_9:
    if ( v7 )
    {
      CHwndTargetProp::ClearSystemVisual(v9, (unsigned int)v4);
      CWindowProp::RemoveAndDeleteProp(v9);
    }
  }
  return (unsigned int)VisRgnTracker;
}
