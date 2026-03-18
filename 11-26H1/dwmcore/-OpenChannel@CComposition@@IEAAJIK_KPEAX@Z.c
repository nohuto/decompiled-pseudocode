/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x180163C50
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180163570 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x180163D70 (-Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x180164614 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(
        struct CConnection **this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        void *a5)
{
  struct CChannelContext *v5; // rsi
  char *v7; // rdi
  __int64 v8; // r14
  int v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // eax
  struct CChannelContext *v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  if ( a2 >= 0x10000
    || (v7 = (char *)(this + 104), v8 = a2, a2 < *((_DWORD *)this + 214)) && *(_QWORD *)(*(_QWORD *)v7 + 8LL * a2) )
  {
    v9 = -2147024809;
    v11 = 1565;
  }
  else
  {
    v9 = CChannelContext::Create(a2, a3, a4, a5, this[709], &v13);
    if ( v9 < 0 )
    {
      v11 = 1576;
    }
    else
    {
      if ( a2 < *((_DWORD *)v7 + 6)
        || (v10 = a2 - *((_DWORD *)v7 + 6),
            v14 = 0LL,
            v9 = DynArray<CChannelContext *,1>::AddAndSet(v7, v10 + 1, &v14),
            v9 >= 0) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v8) = v13;
        return (unsigned int)v9;
      }
      v11 = 1586;
    }
    v5 = v13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v11, 0LL);
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v5);
  return (unsigned int)v9;
}
