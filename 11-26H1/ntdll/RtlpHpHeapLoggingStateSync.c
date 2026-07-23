/*
 * XREFs of RtlpHpHeapLoggingStateSync @ 0x1800FC2B0
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpSynchronizeHeapLoggingStateCallback @ 0x1800FC290 (RtlpSynchronizeHeapLoggingStateCallback.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 */

int __fastcall RtlpHpHeapLoggingStateSync(__int64 a1)
{
  struct _PEB *v2; // rax
  __int64 v3; // rcx

  LODWORD(v2) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v2 )
  {
    v2 = NtCurrentPeb();
    v3 = (__int64)v2->SharedData + 550;
  }
  else
  {
    v3 = 2147353472LL;
  }
  if ( *(_BYTE *)v3 && (v2 = NtCurrentPeb(), (v2->TracingFlags & 1) != 0) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x80u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFF7F);
  return (int)v2;
}
