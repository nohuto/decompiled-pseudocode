/*
 * XREFs of ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180028940
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x18002B8D4 (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CAnimationComponent::GetWindowZOrder(CAnimationComponent *this)
{
  HWND v1; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // r9d
  _QWORD *v8; // r8

  v1 = (HWND)*((_QWORD *)this + 2);
  if ( v1 == HWND_MESSAGE|0x2LL )
    return 0x7FFFFFFFLL;
  if ( *((_DWORD *)this + 15) == 0x80000000 )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                         v1);
    v4 = 0;
    if ( WindowDataByHwnd )
    {
      v5 = *((_QWORD *)WindowDataByHwnd + 55);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 24);
        if ( v6 )
        {
          if ( *((_BYTE *)this + 136) )
          {
            *((_DWORD *)this + 15) = -5;
          }
          else
          {
            v7 = *(_DWORD *)(v6 + 168);
            v8 = *(_QWORD **)(v6 + 144);
            if ( v7 )
            {
              do
              {
                if ( v5 == *v8 )
                  break;
                ++v4;
                ++v8;
              }
              while ( v4 < v7 );
            }
            if ( v4 != v7 )
              *((_DWORD *)this + 15) = v4;
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 15) = -10;
    }
  }
  return *((unsigned int *)this + 15);
}
