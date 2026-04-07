/*
 * XREFs of ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006F064
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::InsertAt(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a2;
  v5 = DynArrayImpl<0>::Grow(a1, 0x14u, 1, a4, &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1D3u, 0LL);
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 24);
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = v7 + 1;
    if ( (_DWORD)v7 )
    {
      v9 = v8 + 20 * v7;
      do
      {
        LODWORD(v7) = v7 - 1;
        v10 = *(_DWORD *)(v8 + 20LL * (unsigned int)v7 + 16);
        *(_OWORD *)v9 = *(_OWORD *)(v8 + 20LL * (unsigned int)v7);
        *(_DWORD *)(v9 + 16) = v10;
        v9 -= 20LL;
      }
      while ( (_DWORD)v7 );
    }
    v11 = v13;
    if ( v13 >= v8 && v13 < v8 + 4 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v11 = v13 + 20;
    *(_OWORD *)v8 = *(_OWORD *)v11;
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(v11 + 16);
  }
  return v6;
}
