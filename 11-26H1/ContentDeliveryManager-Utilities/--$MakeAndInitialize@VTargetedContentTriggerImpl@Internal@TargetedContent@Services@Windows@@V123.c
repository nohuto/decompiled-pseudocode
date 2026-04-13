/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAW4TargetedContentKnownTrigger@2345@AEAPEAUHSTRING__@@AEAPEAU7@AEAPEAU7@AEAPEAU7@AEAPEAU7@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@AEAW4TargetedContentKnownTrigger@4567@AEAPEAUHSTRING__@@2222@Z @ 0x180078108
 * Callers:
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800785F0 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029964 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180042978 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x180043564 (-Attach@-$ComPtr@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@WRL@Mic.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180078428 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,enum Windows::Services::TargetedContent::Internal::TargetedContentKnownTrigger &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &>(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  void *v11; // rax
  int v12; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  void *v17; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v11;
  if ( v11 )
  {
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl((Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)v11);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl>::Attach(
      &v18,
      (__int64)v13);
    v17 = 0LL;
    v14 = *a4;
    v15 = v18;
    v12 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
            v18,
            *a2,
            *a3,
            v14,
            *a5,
            *a6,
            *a7);
    if ( v12 >= 0 )
    {
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      *a1 = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v12 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v17);
  return (unsigned int)v12;
}
