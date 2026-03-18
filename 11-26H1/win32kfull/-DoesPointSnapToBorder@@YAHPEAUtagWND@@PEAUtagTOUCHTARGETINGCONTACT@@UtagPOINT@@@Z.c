/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x140086370
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x140086338 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x140088148 (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  __int64 v3; // r11
  unsigned int v4; // ebx
  __int64 v6; // rcx
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // r10^4
  __int64 v11; // r11
  int v12; // r10d
  __int64 v13; // rcx

  v3 = *((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a2 + 46);
  v6 = (unsigned int)(*(_DWORD *)(v3 + 104) - a3.x);
  if ( *(_DWORD *)(v3 + 104) - a3.x < 0 )
    v6 = (unsigned int)(a3.x - *(_DWORD *)(v3 + 104));
  if ( (int)TTPixelsToHm(v6, v4) < 120 )
    return 1LL;
  v9 = (unsigned int)(*(_DWORD *)(v8 + 112) - v7);
  if ( *(_DWORD *)(v8 + 112) - v7 < 0 )
    v9 = (unsigned int)(v7 - *(_DWORD *)(v8 + 112));
  if ( (int)TTPixelsToHm(v9, v4) < 120 )
    return 1LL;
  v12 = v10 - *(_DWORD *)(v11 + 116);
  v13 = (unsigned int)(*(_DWORD *)(v11 + 116) - v10);
  if ( v12 > 0 )
    v13 = (unsigned int)v12;
  return (int)TTPixelsToHm(v13, *((unsigned int *)a2 + 47)) < 120;
}
