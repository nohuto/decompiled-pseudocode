/*
 * XREFs of IopBusNumberInitialize @ 0x1407A9C98
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14078B52C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  qword_140F83B78 = (__int64)IopBusNumberUnpackRequirement;
  qword_140F83B80 = (__int64)IopBusNumberPackResource;
  qword_140F83B88 = (__int64)IopBusNumberUnpackResource;
  qword_140F83B90 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber");
}
