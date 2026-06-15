/*
 * XREFs of ??1CHybridPropertyStore@@UEAA@XZ @ 0x18014E7B4
 * Callers:
 *     ??_GCHybridPropertyStore@@UEAAPEAXI@Z @ 0x18014E840 (--_GCHybridPropertyStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CHybridPropertyStore::~CHybridPropertyStore(CHybridPropertyStore *this)
{
  void *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(4 * ((__int64)(*((_QWORD *)this + 6) - (_QWORD)v2) >> 2)));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
