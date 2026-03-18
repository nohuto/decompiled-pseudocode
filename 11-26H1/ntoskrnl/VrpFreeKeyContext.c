/*
 * XREFs of VrpFreeKeyContext @ 0x140A7F588
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpRegistryCallback @ 0x140973A30 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x140A7F5C0 (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
