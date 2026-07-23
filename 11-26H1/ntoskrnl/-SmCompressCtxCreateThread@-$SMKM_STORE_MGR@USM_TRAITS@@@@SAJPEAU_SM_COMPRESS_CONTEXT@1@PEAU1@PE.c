/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403EE8AC
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640190 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403EEA28 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1403EEC68 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(void *a1))
{
  __int64 v4; // r10
  __int64 (__fastcall *v5)(void *); // rdi
  unsigned int v6; // r14d
  volatile signed __int32 *v8; // rbx
  __int64 ThreadParams; // rax
  void *v11; // rsi
  int v12; // edi
  __int128 Object; // [rsp+50h] [rbp-20h] BYREF
  char *v15; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a4;
  v15 = 0LL;
  v6 = 0;
  Handle = 0LL;
  v8 = (volatile signed __int32 *)(v4 + 44);
  Object = 0LL;
  if ( !a4 )
  {
    v5 = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread;
    if ( *v8 - *(_DWORD *)(v4 + 40) < 0 )
    {
      v6 = 1;
      if ( (unsigned int)_InterlockedIncrement(v8) <= *(_DWORD *)(v4 + 40) )
        goto LABEL_2;
      _InterlockedDecrement(v8);
    }
    v12 = -1073741527;
    goto LABEL_8;
  }
LABEL_2:
  ThreadParams = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, v6);
  v11 = (void *)ThreadParams;
  if ( ThreadParams )
  {
    *(_QWORD *)(ThreadParams + 8) = a2;
    v15 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    *(_QWORD *)(ThreadParams + 16) = &Object;
    v12 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, *(_QWORD *)(a2 + 2144), 0LL, v5, ThreadParams, 0LL, a3);
    if ( v12 >= 0 )
    {
      v12 = 0;
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      goto LABEL_8;
    }
  }
  else
  {
    v12 = -1073741670;
  }
  if ( v6 )
    _InterlockedDecrement(v8);
  if ( v11 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(v11);
LABEL_8:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v12;
}
