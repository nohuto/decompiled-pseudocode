/*
 * XREFs of IopIrqInitialize @ 0x1407A9BB8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14078B52C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  qword_140F83CD8 = (__int64)IopIrqUnpackRequirement;
  qword_140F83CE0 = (__int64)IopIrqPackResource;
  qword_140F83CE8 = (__int64)IopIrqUnpackResource;
  qword_140F83CF0 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ");
}
