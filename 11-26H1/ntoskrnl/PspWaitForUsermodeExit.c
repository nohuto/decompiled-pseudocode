/*
 * XREFs of PspWaitForUsermodeExit @ 0x1407FBA94
 * Callers:
 *     PspWaitOnAllProcessesJobCallback @ 0x1407FA1D0 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 */

_DWORD *__fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _DWORD *i; // rdx
  _DWORD *result; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = result )
  {
    result = (_DWORD *)PsGetNextProcessThread(a1, i);
    v4 = result;
    if ( !result )
      break;
    if ( (result[29] & 0x400) == 0 && !(unsigned __int8)result[1] )
    {
      ObfReferenceObjectWithTag(result, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return result;
}
