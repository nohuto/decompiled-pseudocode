/*
 * XREFs of ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802B2CA8
 * Callers:
 *     ??_ECShadowMaskProducer@@EEAAPEAXI@Z @ 0x1802B2D10 (--_ECShadowMaskProducer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CShadowMaskProducer::~CShadowMaskProducer(CShadowMaskProducer *this)
{
  CShapePtr::~CShapePtr((CShadowMaskProducer *)((char *)this + 104));
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>((__int64)this + 32);
}
