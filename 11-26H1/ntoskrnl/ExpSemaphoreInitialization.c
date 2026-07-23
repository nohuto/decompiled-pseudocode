/*
 * XREFs of ExpSemaphoreInitialization @ 0x140CECF40
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 */

bool ExpSemaphoreInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _WORD v2[2]; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+34h] [rbp-25h]
  int v4; // [rsp+38h] [rbp-21h]
  __int128 v5; // [rsp+3Ch] [rbp-1Dh]
  int v6; // [rsp+4Ch] [rbp-Dh]
  int v7; // [rsp+54h] [rbp-5h]
  int v8; // [rsp+5Ch] [rbp+3h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Semaphore");
  memset_0(v2, 0, 0x78uLL);
  v2[0] = 120;
  v3 = 8;
  v4 = 256;
  v7 = 512;
  v5 = ExpSemaphoreMapping;
  v8 = 32;
  v6 = 2031619;
  return (int)ObCreateObjectType(&DestinationString, v2, 0LL, (__int64)&ExSemaphoreObjectType) >= 0;
}
