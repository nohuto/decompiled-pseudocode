/*
 * XREFs of IopCreateIoRingObjectType @ 0x140CC4F58
 * Callers:
 *     IoCreateObjectTypes @ 0x140CC0930 (IoCreateObjectTypes.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 */

__int64 IopCreateIoRingObjectType()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  char v3; // [rsp+32h] [rbp-27h]
  int v4; // [rsp+38h] [rbp-21h]
  int v5; // [rsp+54h] [rbp-5h]
  int v6; // [rsp+5Ch] [rbp+3h]
  __int64 (__fastcall *v7)(int); // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // [rsp+70h] [rbp+17h]
  void (__fastcall *v9)(__int64); // [rsp+78h] [rbp+1Fh]

  memset_0(&v2, 0, 0x78uLL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoRing");
  v3 |= 6u;
  v7 = IopOpenIoRing;
  v2 = 120;
  v8 = IopCloseIoRing;
  v4 = 7634;
  v9 = IopDeleteIoRing;
  v5 = 512;
  v6 = 208;
  return ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&IoRingObjectType);
}
