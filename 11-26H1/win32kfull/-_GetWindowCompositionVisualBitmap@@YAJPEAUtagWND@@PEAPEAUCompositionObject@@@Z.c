/*
 * XREFs of ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140201C1C
 * Callers:
 *     ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x14025BA0C (-GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x140202334 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ?Initialize@CHwndBitmapProp@@QEAAJXZ @ 0x14023E8FC (-Initialize@CHwndBitmapProp@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall _GetWindowCompositionVisualBitmap(struct tagWND *a1, struct CompositionObject **a2)
{
  CompositionObject **v4; // rax
  CompositionObject **v5; // rbx
  int v6; // edi
  CompositionObject **v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(a1, &v8) )
  {
    v5 = v8;
  }
  else
  {
    v4 = (CompositionObject **)Win32AllocPoolZInit(32LL, 1651012437LL);
    v5 = v4;
    if ( !v4 )
      return (unsigned int)-1073741801;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *v4 = (CompositionObject *)&CHwndBitmapProp::`vftable';
    if ( !(unsigned int)CWindowProp::SetProp((CWindowProp *)v4, (unsigned __int64)a1) )
    {
      (*(void (__fastcall **)(CompositionObject **))*v5)(v5);
      return (unsigned int)-1073741801;
    }
    v6 = CHwndBitmapProp::Initialize((CHwndBitmapProp *)v5);
    if ( v6 < 0 )
    {
      CWindowProp::RemoveAndDeleteProp((CWindowProp *)v5);
      return (unsigned int)v6;
    }
  }
  v6 = CompositionObject::AddRef(v5[3]);
  if ( v6 >= 0 )
    *a2 = v5[3];
  return (unsigned int)v6;
}
