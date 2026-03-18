/*
 * XREFs of KiInitDynamicTraceSupport @ 0x140CCBD70
 * Callers:
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  unsigned int *v3; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v0 = 1;
  v5 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&stru_140FC01F0.PriorityFloorCounts[24] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, &stru_140FC01F0.PriorityFloorCounts[24], &stru_140FC01F0.ReadTransferCount);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(stru_140FC01F0.ReadTransferCount, &v4, 0LL);
    if ( v3 )
    {
      stru_140FC01F0.ReadTransferCount = v4 + *v3;
      stru_140FC01F0.WriteTransferCount = v4 + v3[1];
    }
    result = (__int64)v5;
    *v5 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
