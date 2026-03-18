/*
 * XREFs of ??0VIDMM_SEGMENT_BASE@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x1400B5A1C
 * Callers:
 *     ??0VIDMM_SEGMENT_PBMM@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_PBMM@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x140050A58 (--0VIDMM_SEGMENT_PBMM@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_PBMM@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x1400B5850 (--0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_SEGMENT_BASE *__fastcall VIDMM_SEGMENT_BASE::VIDMM_SEGMENT_BASE(
        VIDMM_SEGMENT_BASE *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        __int16 a3,
        const struct _DXGK_SEGMENTDESCRIPTOR5 *a4)
{
  __int16 v5; // cx
  bool v6; // zf

  *(_QWORD *)this = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = *((_QWORD *)a4 + 1);
  *((_DWORD *)this + 14) = *(_DWORD *)a4;
  *((_WORD *)this + 30) = *((_WORD *)a2 + 36);
  *((_WORD *)this + 31) = a3;
  *((_QWORD *)this + 9) = *((_QWORD *)a4 + 3);
  *((_DWORD *)this + 24) = 2;
  *((_DWORD *)this + 25) = *((_DWORD *)a4 + 24);
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_DWORD *)this + 31) = (*(_DWORD *)a4 & 0x800) != 0 ? 0x10000 : 4096;
  v5 = 0;
  if ( (*(_DWORD *)a4 & 0x80000) != 0 )
  {
    *((_DWORD *)this + 24) = 0;
  }
  else if ( (*(_DWORD *)a4 & 0x100000) != 0 )
  {
    *((_DWORD *)this + 24) = 1;
  }
  v6 = (*((_DWORD *)this + 14) & 0x2000) == 0;
  *((_QWORD *)this + 3) = *((_QWORD *)a4 + 5);
  if ( !v6 )
    *((_DWORD *)this + 30) = *((_DWORD *)a4 + 12);
  if ( *((_DWORD *)this + 25) )
    v5 = *((_WORD *)this + 31) + 1;
  *((_WORD *)this + 32) = v5;
  return this;
}
