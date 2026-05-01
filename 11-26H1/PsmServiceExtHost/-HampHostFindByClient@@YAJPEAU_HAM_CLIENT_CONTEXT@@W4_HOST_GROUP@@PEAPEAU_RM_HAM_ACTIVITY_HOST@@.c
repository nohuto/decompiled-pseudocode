/*
 * XREFs of ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041CD8
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180041B38 (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x1800429DC (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18007AA70 (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B824 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002EFB8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800411C4 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004123C (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampHostFindByClient(__int64 a1, char a2, struct _RM_HAM_ACTIVITY_HOST **a3, unsigned __int64 *a4)
{
  void *v8; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  int v11; // ebx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  void *TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  HampClientAcquireLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  v8 = *(void **)(a1 + 192);
  if ( v8 )
  {
    CurrentProcess = GetCurrentProcess();
    v10 = GetCurrentProcess();
    v11 = NtDuplicateObject(v10, v8, CurrentProcess, &TargetHandle, 0x1000u, 0, 0);
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
    if ( v11 >= 0 )
    {
      v12 = 48LL * *(unsigned __int8 *)(a1 + 164);
      v13 = (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - v12;
      LOBYTE(v12) = a2;
      v11 = HampHostFindByProcessHandle(v13 - 16, TargetHandle, v12, a3, a4);
      if ( v11 >= 0 )
        v11 = 0;
    }
  }
  else
  {
    v11 = -1073741816;
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  }
  if ( TargetHandle )
    NtClose(TargetHandle);
  return (unsigned int)v11;
}
