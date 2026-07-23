/*
 * XREFs of EtwpInitializePrivateSessionDemuxObject @ 0x140832FF0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 EtwpInitializePrivateSessionDemuxObject()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int16 Src; // [rsp+40h] [rbp-29h] BYREF
  char v3; // [rsp+42h] [rbp-27h]
  int v4; // [rsp+48h] [rbp-21h]
  GENERIC_MAPPING v5; // [rsp+4Ch] [rbp-1Dh]
  int v6; // [rsp+64h] [rbp-5h]
  int v7; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall *v8)(); // [rsp+78h] [rbp+Fh]
  void (__fastcall *v9)(_QWORD *); // [rsp+88h] [rbp+1Fh]

  DestinationString = 0LL;
  memset_0(&Src, 0, 0x78uLL);
  v3 |= 0x14u;
  v8 = IopOpenIoRing;
  Src = 120;
  v9 = EtwpDeleteSessionDemuxObject;
  v4 = 256;
  v5 = EtwpGenericMapping;
  v6 = 1;
  v7 = 32;
  RtlInitUnicodeString(&DestinationString, L"EtwSessionDemuxEntry");
  return ObCreateObjectTypeEx(&DestinationString, &Src, (__int64)&EtwpSessionDemuxObjectType);
}
