/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C1718
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BED14 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001FAFC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801BFF6C (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 *     ?InitializeConstants@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C0A10 (-InitializeConstants@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        MPCSixDofProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    MPCSixDofProcessor::InitializeConstants(this);
    fPending = 0;
    if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_registryWatcherCreated, 0, &fPending, 0LL) )
      abort();
    if ( fPending )
    {
      v6[0] = &MPCSixDofProcessor::s_registryWatcherCreated;
      lambda_2ab80ba63dcc212dafbb4e4695138308_::operator()();
      v6[1] = 0LL;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
