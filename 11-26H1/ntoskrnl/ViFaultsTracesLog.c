/*
 * XREFs of ViFaultsTracesLog @ 0x140C3B000
 * Callers:
 *     ViFaultsInjectionNotification @ 0x140C3AEA4 (ViFaultsInjectionNotification.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViFaultsTracesLog(ULONG FramesToSkip)
{
  PVOID *v1; // rbx
  USHORT v2; // ax

  if ( ViFaultTraces )
  {
    v1 = (PVOID *)((char *)ViFaultTraces
                 + 72 * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1)));
    *v1 = KeGetCurrentThread();
    v2 = RtlCaptureStackBackTrace(FramesToSkip, 8u, v1 + 1, 0LL);
    if ( v2 < 8u )
      v1[v2 + 1] = 0LL;
  }
}
