/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x140202384
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x140202438 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1402050B8 (DwmAsyncCreateDCompositionHwndTarget.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  CompositionObject *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v7) )
  {
    v1 = v7;
    v2 = 0;
    v8 = 0LL;
    do
    {
      v3 = *(CompositionObject **)(v1 + 16LL * (int)v2 + 24);
      if ( v3 )
      {
        if ( (int)CompositionObject::OpenDwmHandle(v3, &v8) >= 0 )
        {
          v6 = (void *)ReferenceDwmApiPort(v5, v4);
          DwmAsyncCreateDCompositionHwndTarget(v6);
        }
      }
      ++v2;
    }
    while ( v2 < 3 );
  }
}
