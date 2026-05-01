/*
 * XREFs of ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804D988C
 * Callers:
 *     ?GetScrollPercent@CScrollViewer@@UEAANXZ @ 0x1804D8BF0 (-GetScrollPercent@CScrollViewer@@UEAANXZ.c)
 *     ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x1804D93D0 (-SetScrollPercent@CScrollViewer@@UEAAXN@Z.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D95A4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 * Callees:
 *     ?_GetTotalRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D9910 (-_GetTotalRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D9988 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollViewer::_GetMinScrollOffset(CScrollViewer *this)
{
  _DWORD *VisibleRect; // rax
  int v3; // ebx
  _DWORD *TotalRect; // rax
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 96LL))((char *)this + 208) )
  {
    VisibleRect = (_DWORD *)CScrollViewer::_GetVisibleRect(this);
    v3 = VisibleRect[2] - *VisibleRect;
    TotalRect = (_DWORD *)CScrollViewer::_GetTotalRect(this, v10);
    return (unsigned int)(*TotalRect + v3 - TotalRect[2]);
  }
  else
  {
    v6 = CScrollViewer::_GetVisibleRect(this);
    v7 = *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 4);
    v8 = CScrollViewer::_GetTotalRect(this, v9);
    return (unsigned int)(v7 + *(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 12));
  }
}
