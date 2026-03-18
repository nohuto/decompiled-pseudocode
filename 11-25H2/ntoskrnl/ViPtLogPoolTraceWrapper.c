/*
 * XREFs of ViPtLogPoolTraceWrapper @ 0x140B72100
 * Callers:
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     VerifierExAllocatePool @ 0x140B81090 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B811B0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B815E0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B81700 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 *     VfPtFreePoolNotification @ 0x140B99718 (VfPtFreePoolNotification.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ViPtProcessApt @ 0x140B7CAE8 (ViPtProcessApt.c)
 *     ViPtCaptureStackTrace @ 0x140B97344 (ViPtCaptureStackTrace.c)
 *     ViPtLogPoolTrace @ 0x140B97494 (ViPtLogPoolTrace.c)
 */

struct _KTHREAD *__fastcall ViPtLogPoolTraceWrapper(__int64 a1, int a2, __int64 a3, char a4)
{
  struct _KTHREAD *result; // rax
  _QWORD Parameter[53]; // [rsp+20h] [rbp-1C8h] BYREF
  int v10; // [rsp+1CCh] [rbp-1Ch]
  int v11; // [rsp+1D0h] [rbp-18h]
  char v12; // [rsp+1D4h] [rbp-14h]

  result = (struct _KTHREAD *)memset_0(Parameter, 0, 0x1B8uLL);
  if ( a1 && ((VfOptionFlags & 0x1000) != 0 || VfPoolTraces) && a2 != 1850304854 )
  {
    result = (struct _KTHREAD *)ViPtCaptureStackTrace(Parameter);
    if ( v10 )
    {
      v11 = a2;
      Parameter[0] = a1;
      v12 = a4 & 1;
      Parameter[1] = a3;
      result = KeGetCurrentThread();
      Parameter[2] = result;
      if ( (VfOptionFlags & 0x1000) != 0 )
        result = (struct _KTHREAD *)ViPtProcessApt(Parameter);
      if ( (a4 & 2) == 0 )
        return (struct _KTHREAD *)ViPtLogPoolTrace(Parameter);
    }
  }
  return result;
}
