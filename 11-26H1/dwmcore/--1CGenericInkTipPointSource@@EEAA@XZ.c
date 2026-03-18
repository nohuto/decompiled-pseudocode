/*
 * XREFs of ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x180288C88
 * Callers:
 *     ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x180288CB0 (--_GCGenericInkTipPointSource@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1801D66A8 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 */

void __fastcall CGenericInkTipPointSource::~CGenericInkTipPointSource(CGenericInkTipPointSource *this)
{
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>((void **)this + 3);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 2);
}
