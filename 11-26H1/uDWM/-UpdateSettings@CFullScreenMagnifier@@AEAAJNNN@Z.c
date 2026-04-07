/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800774F0
 * Callers:
 *     ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x1800774C8 (-Initialize@CFullScreenMagnifier@@AEAAJXZ.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18008C4F4 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007761C (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180077688 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  __int64 v4; // r8
  bool v6; // al
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  struct tagPOINT *v11; // rcx
  __int64 v12; // r8
  float v13; // xmm2_4
  struct tagPOINT *v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v18; // [rsp+30h] [rbp+8h] BYREF

  v6 = *((double *)this + 3) != a2;
  *((double *)this + 3) = a2;
  *((double *)this + 4) = a3;
  *((double *)this + 5) = a4;
  if ( a2 <= 1.01 )
  {
    CVisual::SetInterpolationMode(*((_QWORD *)this + 2), 0LL, v4);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 2));
    v14 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v18 = 0LL;
    CVisual::SetOffset(v14, &v18, v15);
    CVisual::SetScale(*((CVisual **)this + 2), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 2), 0LL);
  }
  else
  {
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 2);
      if ( v7 )
      {
        v8 = CVisual::SetSamplingMode(v7, *((unsigned int *)this + 12));
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9E,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\fullscreenmagnifier.cpp",
            (const char *)(unsigned int)v8,
            v16);
          return v9;
        }
      }
    }
    CVisual::SetInterpolationMode(*((_QWORD *)this + 2), 1LL, v4);
    v11 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v18.x = (int)*((double *)this + 4);
    v18.y = (int)*((double *)this + 5);
    CVisual::SetOffset(v11, &v18, v12);
    v13 = *((double *)this + 3);
    CVisual::SetScale(*((CVisual **)this + 2), v13, v13);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
  return 0LL;
}
