/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x18016E764
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  int v1; // eax
  _DWORD *v2; // rdx
  _DWORD v4[6]; // [rsp+0h] [rbp-18h] BYREF

  v1 = 0;
  v2 = v4;
  do
    *v2++ = v1++;
  while ( v1 < 4 );
  return (unsigned int)v4[a1];
}
