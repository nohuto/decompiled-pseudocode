/*
 * XREFs of ??0MPCHandProcessor@@QEAA@XZ @ 0x1800BF474
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019C7EC (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180087C70 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BF408 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C7290 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

MPCHandProcessor *__fastcall MPCHandProcessor::MPCHandProcessor(MPCHandProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *((_BYTE *)this + 3664) = 1;
  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 459) = 0LL;
  *((_QWORD *)this + 460) = 0LL;
  *((_QWORD *)this + 461) = 0LL;
  memset_0((char *)this + 3696, 0, 0xBC0uLL);
  *((_DWORD *)this + 930) = 3008;
  memset_0((char *)this + 6704, 0, 0xBC0uLL);
  *((_DWORD *)this + 1682) = 3008;
  *((_BYTE *)this + 9712) = 0;
  *((_DWORD *)this + 2429) = 0;
  *((_WORD *)this + 4860) = 0;
  *(_QWORD *)((char *)this + 9724) = 0LL;
  memset_0((char *)this + 9736, 0, 0xB8uLL);
  *((_BYTE *)this + 9920) = 0;
  *(_QWORD *)((char *)this + 9924) = 0LL;
  *(_QWORD *)((char *)this + 9932) = 0LL;
  *(_QWORD *)((char *)this + 9940) = 0LL;
  *((_QWORD *)this + 1244) = 0LL;
  *((_WORD *)this + 4980) = 256;
  if ( *((_DWORD *)this + 129) )
  {
    *((_DWORD *)this + 129) = 0;
    RayStabilizer::CalculateMaximumSize((MPCHandProcessor *)((char *)this + 472));
    RayStabilizer::Reset(v2);
  }
  return this;
}
