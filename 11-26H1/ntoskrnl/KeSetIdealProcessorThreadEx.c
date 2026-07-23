/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x140204930
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140202C34 (KeSetIdealProcessorThreadByNumber.c)
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThread @ 0x140204860 (KeSetIdealProcessorThread.c)
 *     MiRevertThreadAffinity @ 0x1403CD44C (MiRevertThreadAffinity.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 * Callees:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(struct _KTHREAD *a1, volatile unsigned int a2, unsigned int *a3)
{
  volatile unsigned int IdealProcessor; // r12d
  volatile unsigned int UserIdealProcessor; // r15d
  char v8; // di
  char v9; // r14
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v12; // r8
  __int64 v13; // r9
  volatile unsigned int v14; // edi
  char v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  v16 = 0;
  KiAcquireThreadLockRaiseToDpc(a1, &v16);
  IdealProcessor = a1->IdealProcessor;
  UserIdealProcessor = a1->UserIdealProcessor;
  v8 = (a1->MiscFlags & 8) != 0 && a1 == KeGetCurrentThread();
  v9 = v16;
  v11 = KiSetIdealProcessorThread(a1, a2, v8, &v17, v16);
  if ( v11 >= 0 && !v8 )
    _interlockedbittestandset((volatile signed __int32 *)&a1->116 + 1, 0);
  v13 = a1->IdealProcessor;
  v14 = a1->UserIdealProcessor;
  a1->ThreadLock = 0LL;
  if ( (xmmword_140FC0C10 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, IdealProcessor, v13);
    if ( (xmmword_140FC0C10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, UserIdealProcessor, v14);
  }
  LOBYTE(v10) = v9;
  KiCheckForThreadDispatch(KeGetCurrentPrcb(), v10, v12, v13);
  if ( a3 )
    *a3 = v17;
  return (unsigned int)v11;
}
