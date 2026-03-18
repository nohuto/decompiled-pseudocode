/*
 * XREFs of VrpAllocateKeyContext @ 0x140A30984
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpAllocateKeyContext(PVOID Object)
{
  __int64 Pool2; // rbx

  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *(_QWORD *)(Pool2 + 40) = Object;
  }
  return Pool2;
}
