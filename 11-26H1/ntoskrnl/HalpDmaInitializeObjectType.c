/*
 * XREFs of HalpDmaInitializeObjectType @ 0x14058D440
 * Callers:
 *     HalpDmaInitEarly @ 0x140CB6930 (HalpDmaInitEarly.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 */

__int64 HalpDmaInitializeObjectType()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  char v3; // [rsp+32h] [rbp-27h]
  int v4; // [rsp+38h] [rbp-21h]
  __int128 v5; // [rsp+3Ch] [rbp-1Dh]
  int v6; // [rsp+4Ch] [rbp-Dh]
  int v7; // [rsp+54h] [rbp-5h]
  void (__fastcall *v8)(__int64, __int64); // [rsp+78h] [rbp+1Fh]

  DestinationString = 0LL;
  memset_0(&v2, 0, 0x78uLL);
  v3 |= 4u;
  v2 = 120;
  v4 = 256;
  v5 = PopPowerRequestMapping;
  v7 = 512;
  v6 = 2031616;
  v8 = HalpDmaFreeChildAdapter;
  RtlInitUnicodeString(&DestinationString, L"DmaAdapter");
  return ((__int64 (__fastcall *)(UNICODE_STRING *, __int16 *, _QWORD, POBJECT_TYPE *))ObCreateObjectType)(
           &DestinationString,
           &v2,
           0LL,
           &HalpDmaAdapterObjectType);
}
