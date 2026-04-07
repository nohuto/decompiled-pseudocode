/*
 * XREFs of ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D42B8
 * Callers:
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D41AC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800DE334 (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800DE430 (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  CVisual *v2; // rcx
  int v3; // ebx
  int v4; // edi
  __int64 v5; // r8
  int v6; // ecx
  struct tagPOINT *v7; // rcx
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CVisual *)*((_QWORD *)this + 7);
  v3 = (int)*((_QWORD *)v2 + 8) / 2;
  v4 = (int)HIDWORD(*((_QWORD *)v2 + 8)) / 2;
  CVisual::SetCenter(v2, (float)v3, (float)v4);
  CVisual::SetRotation(*((CVisual **)this + 7), (double)*((int *)this + 11));
  v6 = -*((_DWORD *)this + 11);
  if ( *((int *)this + 11) > 0 )
    v6 = *((_DWORD *)this + 11);
  if ( v6 == 90 )
  {
    v7 = (struct tagPOINT *)*((_QWORD *)this + 7);
    v8.y = v3 - v4;
    v8.x = v4 - v3;
    CVisual::SetOffset(v7, &v8, v5);
  }
}
