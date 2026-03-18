/*
 * XREFs of CmInitSiloNamespace @ 0x140A309F8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A30A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
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
