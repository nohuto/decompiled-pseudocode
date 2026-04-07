/*
 * XREFs of ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800CCBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18006D320 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x180070184 (-RemoveAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?pop_back@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAXXZ @ 0x18008790C (-pop_back@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@.c)
 *     ??$emplace_back@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@$$QEAU23@@Z @ 0x1800CC56C (--$emplace_back@UTrailPoint@CTouchDragVisual@@@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocato.c)
 *     ?DisconnectSprite@CTouchDragVisual@@AEAAJAEBUTrailPoint@1@@Z @ 0x1800CC870 (-DisconnectSprite@CTouchDragVisual@@AEAAJAEBUTrailPoint@1@@Z.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800CCA88 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::ValidateVisual(CTouchDragVisual *this)
{
  DWORD TickCount; // ebp
  __int64 v3; // r8
  signed int v4; // edi
  __int64 v5; // rsi
  signed int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF

  if ( (*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v16) & *((_DWORD *)this + 8)) != 0 )
  {
    if ( *((_DWORD *)this + 68) > 1u )
    {
      TickCount = GetTickCount();
      v4 = *((_DWORD *)this + 68) - 1;
      if ( v4 > 0 )
      {
        v5 = 20LL * v4;
        do
        {
          if ( TickCount - *(_DWORD *)(v5 + *((_QWORD *)this + 31)) < 0xC8 )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 31, v4--);
          v5 -= 20LL;
        }
        while ( v4 > 0 );
      }
      v6 = *((_DWORD *)this + 76) - 1;
      if ( v6 >= 0 )
      {
        v7 = 20LL * v6;
        do
        {
          if ( TickCount - *(_DWORD *)(v7 + *((_QWORD *)this + 35)) < 0xC8 )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 35, v6);
          v7 -= 20LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      while ( 1 )
      {
        v8 = *((_QWORD *)this + 43);
        if ( !v8 )
          break;
        v9 = (*((_QWORD *)this + 41) - 1LL) & (*((_QWORD *)this + 42) - 1LL + v8);
        v10 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * v9);
        if ( TickCount - *(_DWORD *)(v10 + 28) < 0xC8 )
          break;
        v11 = CTouchDragVisual::DisconnectSprite((CTouchDragVisual *)v9, (CVisual **)v10, v3);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x119,
            (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
            (const char *)(unsigned int)v11);
        std::deque<CTouchDragVisual::TrailPoint>::emplace_back<CTouchDragVisual::TrailPoint>(
          (_QWORD *)this + 44,
          *(__int64 **)(*((_QWORD *)this + 40)
                      + 8 * ((*((_QWORD *)this + 41) - 1LL) & (*((_QWORD *)this + 43) - 1LL + *((_QWORD *)this + 42)))));
        std::deque<CTouchDragVisual::TrailPoint>::pop_back((_QWORD *)this + 39);
      }
      CTouchDragVisual::UpdateVisual(this);
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v16);
  }
  v12 = CTouchVisual::ValidateVisual(this);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124,
    (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
