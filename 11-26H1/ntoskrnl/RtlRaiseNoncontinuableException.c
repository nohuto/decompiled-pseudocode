/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x140535190
 * Callers:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1405349A0 (RtlpCaptureContext.c)
 */

char RtlRaiseNoncontinuableException()
{
  char v0; // r8
  ULONG_PTR v2; // [rsp+28h] [rbp-10h]
  __int64 v3; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v5; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  *(_QWORD *)(v3 + 152) = &v5;
  *(_QWORD *)(v3 + 248) = retaddr;
  if ( *(_QWORD *)(v2 + 16) == -1LL )
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(v3 + 248);
  if ( v0 )
    return RtlDispatchException(v2, v3);
  else
    return ZwRaiseException(v2);
}
