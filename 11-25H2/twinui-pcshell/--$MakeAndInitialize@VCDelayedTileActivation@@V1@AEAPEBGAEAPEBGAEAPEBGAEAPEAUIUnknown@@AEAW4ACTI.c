/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18010AF38
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B40D0 (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800696C0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AD80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x18010B020 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18010B0A4 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,unsigned short const * &,unsigned short const * &,unsigned short const * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        CDelayedTileActivation **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  CDelayedTileActivation *v10; // rax
  CDelayedTileActivation *v12; // rbx
  volatile int *v13; // rdx
  int v14; // esi
  void *v15; // [rsp+30h] [rbp-28h] BYREF
  CDelayedTileActivation *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CDelayedTileActivation *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v10;
  if ( !v10 )
    return 2147942414LL;
  v12 = CDelayedTileActivation::CDelayedTileActivation(v10);
  v16 = v12;
  v14 = CDelayedTileActivation::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, 0LL);
  if ( v14 >= 0 )
  {
    if ( v12 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CDelayedTileActivation *)((char *)v12 + 44), v13);
    *a1 = v12;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
    return 0LL;
  }
  else
  {
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v12,
        v13);
    return (unsigned int)v14;
  }
}
