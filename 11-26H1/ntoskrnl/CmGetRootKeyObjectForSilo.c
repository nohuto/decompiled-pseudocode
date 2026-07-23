/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x140A4C8D0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpGetContextForSiloNoRef @ 0x140A4BBC0 (CmpGetContextForSiloNoRef.c)
 */

__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r9
  unsigned __int64 ContextForSiloNoRef; // rax
  void *v2; // rcx
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(v0);
  if ( ContextForSiloNoRef && (v2 = *(void **)(ContextForSiloNoRef + 32)) != 0LL )
    PsReferenceSiloContext(v2);
  else
    PsReferenceSiloContext(PspSiloMonitorLock.Header.WaitListHead.Flink);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
