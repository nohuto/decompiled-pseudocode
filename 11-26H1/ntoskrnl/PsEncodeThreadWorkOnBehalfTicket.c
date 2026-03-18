/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x140476D00
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A59C70 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  struct _LIST_ENTRY *result; // rax

  *a2 = *(_DWORD *)(a1 + 1296);
  a2[1] = *(_DWORD *)(a1 + 1216);
  result = PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink;
  *(_QWORD *)a2 ^= (unsigned __int64)PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink;
  return result;
}
