/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18008C5D8
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800760A0 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18006E3C4 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800789A0 (-ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CTopLevelWindow3D::OnWindowSizeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 71);
  if ( !v1 || *((_DWORD *)this + 70) == v1 )
  {
    v4 = *((_QWORD *)this + 33);
    if ( v4 )
    {
      if ( !*(_BYTE *)(v4 + 72) && !CTopLevelWindow3D::ShouldFreezeAnimationCVI(this) )
      {
        v6 = *(_QWORD *)(v5 + 256);
        if ( v6 )
        {
          v7 = CSpriteVisual::SetBrush<std::nullptr_t>(v6);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x21B,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v7);
        }
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldHandleTransition(this)
         && !EqualRect((const RECT *)(*(_QWORD *)(v3 + 232) + 48LL), (const RECT *)(v3 + 216)) )
  {
    if ( *((_QWORD *)this + 33) )
      CTopLevelWindow3D::StopAnimation(this);
    CTopLevelWindow3D::StartAnimation((__int64)this, *((_DWORD *)this + 71));
  }
}
