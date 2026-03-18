/*
 * XREFs of VrpAllocateKeyContext @ 0x140949E00
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
