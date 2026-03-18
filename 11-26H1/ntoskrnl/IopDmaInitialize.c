/*
 * XREFs of IopDmaInitialize @ 0x1407A6EE8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407889FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, __int64 a2)
{
  qword_140F83AD8 = (__int64)IopIrqUnpackRequirement;
  qword_140F83AE0 = (__int64)IopDmaPackResource;
  qword_140F83AE8 = (__int64)IopDmaUnpackResource;
  qword_140F83AF0 = (__int64)IopDmaScoreRequirement;
  qword_140F83B70 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((__int64)&IopRootDmaArbiter, a2, 4, (__int64)L"RootDMA");
}
