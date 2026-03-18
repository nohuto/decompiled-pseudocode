/*
 * XREFs of CreateVisRgnTracker @ 0x14005B558
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     UserSetWindowedSwapChain @ 0x140172368 (UserSetWindowedSwapChain.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401B8BB8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x14005BBA4 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x14005BD34 (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14005BE20 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  CWindowProp *v6; // rbx
  __int64 result; // rax
  CWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0LL;
  CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v8);
  v6 = v8;
  if ( !v8 )
  {
    result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v8);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v6 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v6)(v6);
      return 3221225506LL;
    }
  }
  *((_DWORD *)v6 + 10) |= a2;
  DirtyVisRgnTrackers(a1, v5);
  return v3;
}
