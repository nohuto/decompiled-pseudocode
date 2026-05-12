/*
 * XREFs of sub_14003F914 @ 0x14003F914
 * Callers:
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 */

__int64 __fastcall sub_14003F914(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int KeyHandle; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF
  __int64 v7; // [rsp+80h] [rbp+28h] BYREF
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF

  KeyHandle = 8;
  v7 = (__int64)&v8;
  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"InitialTimestamp");
  result = sub_1401AD970(*(_QWORD *)(a1 + 8), (int)&DestinationString, (int)&v3, 11, (__int64)&v7, &KeyHandle);
  v6 = MEMORY[0xFFFFF78000000014];
  if ( (int)result < 0 || MEMORY[0xFFFFF78000000014] < v8 )
  {
    sub_1401B06F4(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v3, 11, (__int64)&v6, 8);
    *(_QWORD *)(a1 + 3360) = v6;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 3360) = v8;
  }
  return result;
}
