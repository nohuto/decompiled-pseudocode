/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1401C2024
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1401C20B0 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1401C1F6C (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  __int64 v3; // r11
  int v4; // ebx
  int v6; // ecx
  int v7; // r10d
  __int64 v8; // r11
  int v9; // ecx
  int v10; // r10^4
  __int64 v11; // r11
  int v12; // ecx

  v3 = *((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a2 + 46);
  v6 = *(_DWORD *)(v3 + 104) - a3.x;
  if ( v6 < 0 )
    v6 = a3.x - *(_DWORD *)(v3 + 104);
  if ( (int)TTPixelsToHm(v6, v4) < 120 )
    return 1LL;
  v9 = *(_DWORD *)(v8 + 112) - v7;
  if ( v9 < 0 )
    v9 = v7 - *(_DWORD *)(v8 + 112);
  if ( (int)TTPixelsToHm(v9, v4) < 120 )
    return 1LL;
  v12 = *(_DWORD *)(v11 + 116) - v10;
  if ( v10 - *(_DWORD *)(v11 + 116) > 0 )
    v12 = v10 - *(_DWORD *)(v11 + 116);
  return (int)TTPixelsToHm(v12, *((_DWORD *)a2 + 47)) < 120;
}
