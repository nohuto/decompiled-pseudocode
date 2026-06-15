/*
 * XREFs of ??1CCaptureNotifier@@QEAA@XZ @ 0x18010EE10
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18010EE58 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180076EC8 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 */

void __fastcall CCaptureNotifier::~CCaptureNotifier(void **this)
{
  CCaptureNotifier::PublishCaptureAudioStatus((CCaptureNotifier *)this);
  std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>(this + 10);
}
