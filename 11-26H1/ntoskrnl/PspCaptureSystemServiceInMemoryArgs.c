/*
 * XREFs of PspCaptureSystemServiceInMemoryArgs @ 0x1407ED680
 * Callers:
 *     PspSyscallProviderServiceDispatch @ 0x140730B10 (PspSyscallProviderServiceDispatch.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x1407EDBBC (PspSyscallProviderServiceDispatchGeneric.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall PspCaptureSystemServiceInMemoryArgs(void *Src, void *a2, unsigned __int8 a3)
{
  SIZE_T v5; // rbx

  v5 = 8LL * a3;
  ProbeForRead(Src, v5, 8u);
  memmove(a2, Src, v5);
  return 0LL;
}
