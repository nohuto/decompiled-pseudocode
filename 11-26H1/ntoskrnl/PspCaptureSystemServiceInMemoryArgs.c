/*
 * XREFs of PspCaptureSystemServiceInMemoryArgs @ 0x1407F31E0
 * Callers:
 *     PspSyscallProviderServiceDispatch @ 0x1407356E0 (PspSyscallProviderServiceDispatch.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x1407F371C (PspSyscallProviderServiceDispatchGeneric.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall PspCaptureSystemServiceInMemoryArgs(void *Src, void *a2, unsigned __int8 a3)
{
  SIZE_T v5; // rbx

  v5 = 8LL * a3;
  ProbeForRead(Src, v5, 8u);
  memmove(a2, Src, v5);
  return 0LL;
}
