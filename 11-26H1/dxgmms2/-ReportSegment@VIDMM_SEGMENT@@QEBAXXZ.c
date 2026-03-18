/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEBAXXZ @ 0x1401252CC
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1400B5AD8 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ReportState @ 0x14012524C (ReportState.c)
 * Callees:
 *     McTemplateK0qpxxxqqxpu_EtwWriteTransfer @ 0x140048270 (McTemplateK0qpxxxqqxpu_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0qpxxxqqxpu_EtwWriteTransfer(
      (__int64)this,
      *((_QWORD *)this + 1),
      a3,
      (unsigned __int16)(*((_WORD *)this + 35) + 1),
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 5),
      v3,
      *((_DWORD *)this + 16),
      *((_QWORD *)this + 10),
      *((_QWORD *)this + 31),
      *((_BYTE *)this + 104));
}
