/*
 * XREFs of ??1CCpuClippingData@@QEAA@XZ @ 0x1800ADBD0
 * Callers:
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x1800AD644 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800ADD08 (--1CTreeData@@UEAA@XZ.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800ADC88 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCpuClippingData::~CCpuClippingData(CCpuClippingData *this)
{
  void *v1; // rbx
  void *v3; // rcx

  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 7));
    operator delete(v1, 0x78uLL);
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    operator delete(v3, 0x44uLL);
}
