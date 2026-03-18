/*
 * XREFs of hCreateKernelTimer @ 0x1401AAAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall hCreateKernelTimer(TIMER_TYPE TimerType)
{
  struct _OBJECT_ATTRIBUTES v2; // [rsp+20h] [rbp-38h] BYREF
  void *v3; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)&v2.Length = 48LL;
  v2.RootDirectory = 0LL;
  v2.ObjectName = 0LL;
  *(_QWORD *)&v2.Attributes = 512LL;
  v3 = 0LL;
  *(_OWORD *)&v2.SecurityDescriptor = 0LL;
  ZwCreateTimer(&v3, 0x1F0003u, &v2, TimerType);
  return v3;
}
