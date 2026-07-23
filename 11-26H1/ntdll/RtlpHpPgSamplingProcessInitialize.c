/*
 * XREFs of RtlpHpPgSamplingProcessInitialize @ 0x18011D004
 * Callers:
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144E54 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlpHpSetHeapFeatures @ 0x1801450C4 (RtlpHpSetHeapFeatures.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlpHpPgSamplingProcessInitialize(char a1)
{
  int v1; // ecx
  __int64 v2; // r9
  struct _TEB *v3; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  struct _TEB *result; // rax

  v1 = a1 & 0x1F;
  if ( v1 == 31 )
  {
    v2 = -1LL;
  }
  else if ( v1 )
  {
    v2 = (1LL << ((unsigned __int8)v1 + 1)) - 1;
  }
  else
  {
    v2 = 0LL;
  }
  v3 = NtCurrentTeb();
  RtlpHpPgSamplingRateMask = v2;
  if ( v2 == -1 )
  {
    v3->HeapPgSamplingCount = 0LL;
  }
  else
  {
    v4 = v3->RngState[0];
    v5 = v3->RngState[1];
    v6 = v5 + v4;
    v7 = v4 ^ v5;
    v3->RngState[0] = v7 ^ __ROL8__(v4, 24) ^ (v7 << 16);
    v3->RngState[1] = __ROL8__(v7, 37);
    result = NtCurrentTeb();
    result->HeapPgSamplingCount = ((unsigned int)v2 & HIDWORD(v6)) + 1;
  }
  return result;
}
