/*
 * XREFs of IopDmaInitialize @ 0x1407A9A98
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14078B52C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  qword_140F83E38 = (__int64)IopIrqUnpackRequirement;
  qword_140F83E40 = (__int64)IopDmaPackResource;
  qword_140F83E48 = (__int64)IopDmaUnpackResource;
  qword_140F83E50 = (__int64)IopDmaScoreRequirement;
  qword_140F83ED0 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA");
}
