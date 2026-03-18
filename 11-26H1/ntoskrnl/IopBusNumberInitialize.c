/*
 * XREFs of IopBusNumberInitialize @ 0x1407A70E8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407889FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  qword_140F83818 = (__int64)IopBusNumberUnpackRequirement;
  qword_140F83820 = (__int64)IopBusNumberPackResource;
  qword_140F83828 = (__int64)IopBusNumberUnpackResource;
  qword_140F83830 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber");
}
