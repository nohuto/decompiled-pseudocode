/*
 * XREFs of RtlpAddForwarderPath @ 0x18011FA44
 * Callers:
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x180114634 (RtlpAddSystemPath.c)
 */

char *__fastcall RtlpAddForwarderPath(char a1, char *a2)
{
  char *v2; // rax

  v2 = a2;
  if ( a1 )
    v2 = RtlpAddSystemPath(L"\\Forwarders\\alt", 0x20uLL, a2);
  return RtlpAddSystemPath(L"\\Forwarders", 0x18uLL, v2);
}
