/*
 * XREFs of RtlGetSystemBootStatus @ 0x140805960
 * Callers:
 *     PopCheckAndClearBootError @ 0x140CCFFDC (PopCheckAndClearBootError.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140B1B7B4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatus(int a1, __int64 a2, int a3)
{
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v4[0] = a1;
  v5 = a2;
  v6 = a3;
  v4[1] = 0;
  return RtlpSystemBootStatusRequest(31LL, v4, 1LL);
}
