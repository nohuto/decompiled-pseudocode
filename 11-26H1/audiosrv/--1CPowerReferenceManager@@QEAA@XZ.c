/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x18010EE58
 * Callers:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800D777C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18007D104 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800D7640 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800DA738 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x18010EE10 (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x18010EE34 (--1CPlaybackNotifier@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x18010EF34 (--1CSebNotifier@@QEAA@XZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x18010EF80 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  CSerialWorkQueue *v2; // rdi
  __int64 v3; // rcx

  v2 = (CPowerReferenceManager *)((char *)this + 448);
  CSerialWorkQueue::Shutdown((CPowerReferenceManager *)((char *)this + 448));
  v3 = *((_QWORD *)this + 94);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v3, *((_QWORD *)this + 95));
    std::_Deallocate<16>(
      *((void **)this + 94),
      (struct std::nothrow_t *)((*((_QWORD *)this + 96) - *((_QWORD *)this + 94)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 94) = 0LL;
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 83);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 624));
  CSerialWorkQueue::~CSerialWorkQueue(v2);
  CSleepStudyPowerReferenceManager::~CSleepStudyPowerReferenceManager((CPowerReferenceManager *)((char *)this + 416));
  CCaptureNotifier::~CCaptureNotifier((void **)this + 40);
  CPlaybackNotifier::~CPlaybackNotifier((void **)this + 28);
  CSebNotifier::~CSebNotifier((CPowerReferenceManager *)((char *)this + 112));
  CPdcActivationClient::~CPdcActivationClient(this);
}
