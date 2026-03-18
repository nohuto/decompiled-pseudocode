/*
 * XREFs of ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x1801DFA7C
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180228F90 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKernelTransport@@AEAAJH@Z @ 0x1801DDAE4 (-Initialize@CKernelTransport@@AEAAJH@Z.c)
 *     ??0CKernelTransport@@AEAA@XZ @ 0x180233E44 (--0CKernelTransport@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::Create(unsigned int a1, struct CTransport **a2)
{
  CKernelTransport *v4; // rax
  CKernelTransport *v5; // rax
  struct CTransport *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CKernelTransport *)MIDL_user_allocate(0x20uLL);
  if ( v4
    && (*(_OWORD *)v4 = 0LL, *((_OWORD *)v4 + 1) = 0LL, v5 = CKernelTransport::CKernelTransport(v4), (v6 = v5) != 0LL) )
  {
    v7 = CKernelTransport::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x5Au, 0LL);
      (**(void (__fastcall ***)(struct CTransport *, __int64))v6)(v6, 1LL);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x59u, 0LL);
  }
  return v8;
}
