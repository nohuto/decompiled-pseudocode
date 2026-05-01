/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BA70
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017318 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x180079E28 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 */

__int64 __fastcall HampManagerAllocateState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  char *v1; // rbx
  const unsigned __int16 *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edx
  __int128 v8; // [rsp+60h] [rbp-48h] BYREF
  __int64 v9; // [rsp+70h] [rbp-38h]
  _OWORD v10[3]; // [rsp+78h] [rbp-30h] BYREF

  v1 = (char *)a1 + 576;
  *(_QWORD *)&v8 = 1LL;
  v9 = 0LL;
  *((_QWORD *)&v8 + 1) = &HampActPdcActivationCallback;
  LODWORD(v3) = Pdcv2ActivationClientRegister(100LL, &v8, (char *)a1 + 592);
  if ( (int)v3 >= 0 )
  {
    LODWORD(v3) = TpAllocWork(v1 + 64, HampPdcPlmWorker, v1, 0LL);
    if ( (int)v3 >= 0 )
    {
      *((_QWORD *)&v8 + 1) = 0LL;
      *(_QWORD *)&v8 = HampWakeManagerActivityCallback;
      v4 = *((_QWORD *)a1 + 85);
      memset(v10, 0, 32);
      v5 = HampClientCreate(
             v4,
             0,
             0LL,
             0LL,
             0,
             0,
             0,
             &v8,
             (__int64)a1 + 680,
             (const unsigned __int16 **)v10,
             (struct _HAM_CLIENT_CONTEXT **)a1 + 86);
      v3 = 0LL;
      if ( v5 < 0 )
        v3 = (const unsigned __int16 *)(unsigned int)v5;
      if ( (int)v3 >= 0 )
      {
        HampUtilDeleteTempFile(v3, v6);
        LODWORD(v3) = 0;
      }
    }
  }
  return (unsigned int)v3;
}
