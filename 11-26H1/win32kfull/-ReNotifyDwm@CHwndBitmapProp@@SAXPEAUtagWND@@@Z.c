/*
 * XREFs of ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x1402022A4
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x140202334 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x14023E9B0 (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 */

void __fastcall CHwndBitmapProp::ReNotifyDwm(struct tagWND *a1)
{
  CompositionObject *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(a1, &v5) )
  {
    v1 = *(CompositionObject **)(v5 + 24);
    if ( v1 )
    {
      if ( (int)CompositionObject::OpenDwmHandle(v1, &v6) >= 0 )
      {
        v4 = (void *)ReferenceDwmApiPort(v3, v2);
        DwmAsyncCreateDCompositionVisualBitmapForHwnd(v4);
      }
    }
  }
}
