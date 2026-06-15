/*
 * XREFs of ??1SaDeviceParams@@QEAA@XZ @ 0x180013C30
 * Callers:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@USaDeviceParams@@@std@@QEBAXPEAUSaDeviceParams@@@Z @ 0x180076888 (--R-$default_delete@USaDeviceParams@@@std@@QEBAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800CAB20 (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SaDeviceParams::~SaDeviceParams(SaDeviceParams *this)
{
  unsigned __int64 v2; // rcx

  ATL::CAutoPtr<CResourcePriorityTracker>::Free((char *)this + 104);
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    ReleaseAudioResourceHandle(v2);
  CoTaskMemFree(*((LPVOID *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  CoTaskMemFree(*(LPVOID *)this);
  *(_QWORD *)this = 0LL;
}
