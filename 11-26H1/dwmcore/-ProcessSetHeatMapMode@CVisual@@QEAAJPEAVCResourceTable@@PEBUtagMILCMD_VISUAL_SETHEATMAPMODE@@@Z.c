/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18020C8AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18020C960 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  __int64 v5; // rax
  char v6; // al
  __m128i v7; // xmm0
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)a3 + 6) == 2 )
  {
    if ( (*((_BYTE *)this + 101) & 4) == 0 )
    {
      v5 = *((_QWORD *)this + 3);
      v10 = 0;
      ++*(_DWORD *)(v5 + 6376);
      *((_BYTE *)this + 101) |= 4u;
      v9 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
      CVisual::SetHeatMapProperties(this, &v9);
    }
  }
  else if ( (*((_BYTE *)this + 101) & 4) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 3) + 6376LL);
    *((_BYTE *)this + 101) &= ~4u;
  }
  v6 = *((_BYTE *)this + 101);
  if ( *((_DWORD *)a3 + 6) == 1 )
  {
    *((_BYTE *)this + 101) = v6 | 2;
    v7 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v10 = *((_DWORD *)a3 + 7);
    v9 = v7;
    CVisual::SetHeatMapProperties(this, &v9);
  }
  else
  {
    *((_BYTE *)this + 101) = v6 & 0xFD;
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
