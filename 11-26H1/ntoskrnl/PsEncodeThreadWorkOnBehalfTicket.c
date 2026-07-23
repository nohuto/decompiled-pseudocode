/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x140470480
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A66BE0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  struct _LIST_ENTRY *result; // rax

  *a2 = *(_DWORD *)(a1 + 1296);
  a2[1] = *(_DWORD *)(a1 + 1216);
  result = PspSiloMonitorLock.SavedApcState.ApcListHead[1].Blink;
  *(_QWORD *)a2 ^= (unsigned __int64)PspSiloMonitorLock.SavedApcState.ApcListHead[1].Blink;
  return result;
}
