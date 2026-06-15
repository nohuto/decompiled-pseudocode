/*
 * XREFs of ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F6DDC
 * Callers:
 *     ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F8090 (-TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpoint.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800E45B8 (-Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z.c)
 *     ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800F7258 (--0CBtLeAudioResourceManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
        _QWORD *a1,
        struct _GUID *a2,
        struct IBluetoothResourceArbitrator **a3)
{
  void *v6; // rax
  int v7; // ebx
  CBtLeAudioResourceManager *v8; // rdi
  struct IBluetoothResourceArbitrator *v9; // r8
  struct _GUID v10; // xmm0
  __int64 v11; // rax
  struct _GUID v13; // [rsp+20h] [rbp-18h] BYREF
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new[](0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  if ( v6 )
  {
    v8 = CBtLeAudioResourceManager::CBtLeAudioResourceManager((CBtLeAudioResourceManager *)v6);
    v14 = 0LL;
    v9 = *a3;
    v10 = *a2;
    *((_DWORD *)v8 + 129) = 1;
    v13 = v10;
    v7 = CBtAudioResourceManagerBase::Initialize(v8, &v13, v9);
    v11 = *(_QWORD *)v8;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(CBtLeAudioResourceManager *, GUID *, _QWORD *))v11)(
             v8,
             &GUID_934ccd31_f938_4cbf_9a7a_f13a1e850098,
             a1);
      (*(void (__fastcall **)(CBtLeAudioResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      (*(void (__fastcall **)(CBtLeAudioResourceManager *))(v11 + 16))(v8);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v14);
  return (unsigned int)v7;
}
