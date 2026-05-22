/*
 * XREFs of ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BED14
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C02D0 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessor@@UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001F6E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessor@@UIInp.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B3A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProvider.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004E440 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1801BEE9C (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C1718 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCSixDofProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCSixDofProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  void *v4; // rax
  int v5; // edi
  MPCSixDofProcessor *v6; // rbx
  volatile int *v7; // rdx
  __int64 v8; // rcx
  int CanCastTo; // eax
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  MPCSixDofProcessor *v12; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x2A60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = MPCSixDofProcessor::MPCSixDofProcessor((MPCSixDofProcessor *)v4);
    v12 = v6;
    v11 = 0LL;
    v5 = MPCSixDofProcessor::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(MPCSixDofProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
        v5 = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessor,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                      (__int64)v6,
                      v8,
                      a1);
        v5 = -2147467262;
        if ( CanCastTo != -2147467262 )
        {
          v5 = CanCastTo;
          if ( CanCastTo >= 0 )
            (*(void (__fastcall **)(MPCSixDofProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
        }
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v11);
  return (unsigned int)v5;
}
