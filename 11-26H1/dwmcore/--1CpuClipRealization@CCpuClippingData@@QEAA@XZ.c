/*
 * XREFs of ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800ADC88
 * Callers:
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800ADB70 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800ADBD0 (--1CCpuClippingData@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAA@XZ @ 0x1800ADC20 (--1-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@CCpu.c)
 *     ?reset@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAXPEAUCpuClipRealization@CCpuClippingData@@@Z @ 0x1800ADC50 (-reset@-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CCpuClippingData::CpuClipRealization *this)
{
  CShapePtr::~CShapePtr((CCpuClippingData::CpuClipRealization *)((char *)this + 24));
  CShapePtr::~CShapePtr((CCpuClippingData::CpuClipRealization *)((char *)this + 8));
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this);
}
