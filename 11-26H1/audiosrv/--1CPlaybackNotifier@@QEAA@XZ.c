/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x18010EE34
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18010EE58 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x1801687A3 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x180013528 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 */

void __fastcall CPlaybackNotifier::~CPlaybackNotifier(void **this)
{
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>(this + 10);
}
