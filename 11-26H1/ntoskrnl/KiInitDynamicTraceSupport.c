/*
 * XREFs of KiInitDynamicTraceSupport @ 0x140CD1ED0
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v0 = 1;
  v5 = 0LL;
  ImageBase = 0LL;
  *(_QWORD *)&stru_140FC11F0.PriorityFloorCounts[24] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, &stru_140FC11F0.PriorityFloorCounts[24], &stru_140FC11F0.ReadTransferCount);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(stru_140FC11F0.ReadTransferCount, &ImageBase, 0LL);
    if ( v3 )
    {
      stru_140FC11F0.ReadTransferCount = ImageBase + v3->BeginAddress;
      stru_140FC11F0.WriteTransferCount = ImageBase + v3->EndAddress;
    }
    result = (__int64)v5;
    *v5 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
