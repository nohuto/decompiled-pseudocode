/*
 * XREFs of ??0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x1400B5850
 * Callers:
 *     InitializePhysicalAdapterSegments_0 @ 0x1400B1ED8 (InitializePhysicalAdapterSegments_0.c)
 * Callees:
 *     ??0VIDMM_SEGMENT_BASE@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x1400B5A1C (--0VIDMM_SEGMENT_BASE@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::VIDMM_SEGMENT(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a2,
        unsigned __int16 a3,
        const struct _DXGK_SEGMENTDESCRIPTOR5 *a4)
{
  unsigned __int16 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  VIDMM_SEGMENT *result; // rax

  VIDMM_SEGMENT_BASE::VIDMM_SEGMENT_BASE((VIDMM_SEGMENT *)((char *)this + 8), a2, a3, a4);
  *(_QWORD *)v6 = &VIDMM_SEGMENT::`vftable';
  *(_QWORD *)(v6 + 152) = 0LL;
  *(_QWORD *)(v6 + 160) = 0LL;
  *(_QWORD *)(v6 + 168) = 0LL;
  *(_DWORD *)(v6 + 176) = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v6 + 180) = *(_DWORD *)(v5 + 92);
  *(_QWORD *)(v6 + 200) = 0LL;
  *(_DWORD *)(v6 + 212) = -1;
  *(_DWORD *)(v6 + 216) = -1;
  *(_DWORD *)(v6 + 220) = -1;
  *(_QWORD *)(v6 + 224) = 0LL;
  *(_QWORD *)(v6 + 232) = 0LL;
  *(_QWORD *)(v6 + 248) = *(_QWORD *)(v5 + 32);
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_QWORD *)(v6 + 296) = 0LL;
  *(_QWORD *)(v6 + 304) = 0LL;
  *(_QWORD *)(v6 + 320) = v6 + 312;
  *(_QWORD *)(v6 + 312) = v6 + 312;
  *(_QWORD *)(v6 + 336) = v6 + 328;
  *(_QWORD *)(v6 + 328) = v6 + 328;
  *(_DWORD *)(v6 + 400) = -1;
  *(_BYTE *)(v6 + 404) = 1;
  *(_QWORD *)(v6 + 408) = 0LL;
  *(_QWORD *)(v6 + 416) = 0LL;
  *(_WORD *)(v6 + 456) = 1;
  *(_QWORD *)(v6 + 464) = 0LL;
  *(_QWORD *)(v6 + 472) = 0LL;
  *(_WORD *)(v6 + 480) = 0;
  *(_BYTE *)(v6 + 482) = 1;
  *(_QWORD *)(v6 + 504) = 0LL;
  *(_QWORD *)(v6 + 144) = v6 + 136;
  *(_QWORD *)(v6 + 136) = v6 + 136;
  *(_QWORD *)(v6 + 272) = v6 + 264;
  *(_QWORD *)(v6 + 264) = v6 + 264;
  *(_QWORD *)(v6 + 288) = v6 + 280;
  *(_QWORD *)(v6 + 280) = v6 + 280;
  *(_QWORD *)(v6 + 240) = 0LL;
  *(_OWORD *)(v6 + 344) = 0LL;
  *(_OWORD *)(v6 + 360) = 0LL;
  *(_OWORD *)(v6 + 376) = 0LL;
  *(_QWORD *)(v6 + 392) = 0LL;
  *(_OWORD *)(v6 + 424) = 0LL;
  *(_OWORD *)(v6 + 440) = 0LL;
  v7 = *(_QWORD *)(v5 + 16);
  v8 = dword_14008A348[v4];
  if ( (_DWORD)v8 && v7 >= v8 )
    v7 = dword_14008A348[v4];
  *(_QWORD *)(v6 + 160) = v7;
  *(_QWORD *)(v6 + 152) = v7;
  if ( (*(_DWORD *)v5 & 0x10000) == 0 )
  {
    v9 = 0x10000000LL;
    if ( v7 < 0x10000000 )
      v9 = v7;
    *(_QWORD *)(v6 + 152) = v9;
  }
  *(_DWORD *)(v6 + 212) = -1;
  result = (VIDMM_SEGMENT *)v6;
  *(_DWORD *)(v6 + 216) = -1;
  return result;
}
