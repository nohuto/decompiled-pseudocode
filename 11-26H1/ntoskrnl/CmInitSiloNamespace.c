/*
 * XREFs of CmInitSiloNamespace @ 0x140A4B958
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A4B9C4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r9
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v7 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v7);
  if ( v1 >= 0 )
    CmpStartSiloRegistryNamespace(v7, v2, (unsigned int)v1);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
