/*
 * XREFs of ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800D374C
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D53CC (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D44D8 (--0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800E0298 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
        _QWORD *a1,
        struct HIDDevice **a2,
        void **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::Internal::SpatialInteractions::SpatialRimDevice *v8; // rbx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = (Windows::Internal::SpatialInteractions::SpatialRimDevice *)Windows::Internal::SpatialInteractions::SpatialRimDevice::SpatialRimDevice((Windows::Internal::SpatialInteractions::SpatialRimDevice *)v6);
    v10 = 0LL;
    v7 = Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialRimDevice *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f,
             a1);
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialRimDevice *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialRimDevice *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
  return (unsigned int)v7;
}
