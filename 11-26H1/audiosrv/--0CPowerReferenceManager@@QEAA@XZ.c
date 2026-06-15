/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800D70A0
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x180013528 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180076EC8 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D3144 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800D723C (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x1801099C0 (--0CPdcActivationClient@@QEAA@XZ.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010EC00 (--0CSebNotifier@@QEAA@XZ.c)
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x18010F498 (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  _QWORD *v2; // rax
  unsigned __int64 size_of; // rax
  _QWORD *v4; // rax

  CPdcActivationClient::CPdcActivationClient(this);
  CSebNotifier::CSebNotifier((CPowerReferenceManager *)((char *)this + 112));
  *((_QWORD *)this + 28) = 2LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *(_OWORD *)((char *)this + 264) = 0LL;
  *(_OWORD *)((char *)this + 280) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 74) = -1;
  *((_DWORD *)this + 75) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  v2 = operator new(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 38) = v2;
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 224));
  *((_QWORD *)this + 40) = 2LL;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *(_OWORD *)((char *)this + 376) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 98) = -1;
  *((_DWORD *)this + 99) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 50) = v4;
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 320));
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  CSleepStudyPowerReferenceManager::Initialize((CPowerReferenceManager *)((char *)this + 416));
  CSerialWorkQueue::CSerialWorkQueue((CPowerReferenceManager *)((char *)this + 448));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 624), 0, 0);
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 2LL;
  *(_OWORD *)((char *)this + 696) = 0LL;
  *(_OWORD *)((char *)this + 712) = 0LL;
  *(_OWORD *)((char *)this + 728) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 186) = -1;
  *((_DWORD *)this + 187) = 0;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  return this;
}
