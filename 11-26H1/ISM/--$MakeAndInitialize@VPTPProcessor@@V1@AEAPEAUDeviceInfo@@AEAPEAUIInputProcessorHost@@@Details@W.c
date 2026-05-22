/*
 * XREFs of ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801CA0E0
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801CA390 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceQueryRemove@@@WRL@Microsoft@@QEAA@XZ @ 0x180095BD4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDevi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801CA620 (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PTPProcessor,PTPProcessor,DeviceInfo * &,IInputProcessorHost * &>(
        PTPProcessor **a1,
        struct DeviceInfo **a2,
        struct IInputProcessorHost **a3)
{
  PTPProcessor *v6; // rax
  PTPProcessor *v7; // rbx
  int v8; // edi
  PTPProcessor *v10; // [rsp+40h] [rbp+8h] BYREF
  PTPProcessor *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (PTPProcessor *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>((__int64)v6);
    *(_QWORD *)v7 = &PTPProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v7 + 1) = &PTPProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceQueryRemove>'};
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    v10 = v7;
    v11 = 0LL;
    v8 = PTPProcessor::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(PTPProcessor *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      v8 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>((void **)&v11);
  return (unsigned int)v8;
}
