/*
 * XREFs of sub_140042310 @ 0x140042310
 * Callers:
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 */

__int64 __fastcall sub_140042310(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int KeyHandle; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+30h] BYREF

  KeyHandle = 4;
  v8 = (__int64)&v7;
  DestinationString = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v4, L"PowerCycleCountOverride");
  result = sub_1401AD970(*(_QWORD *)(a1 + 8), (int)&DestinationString, (int)&v4, 4, (__int64)&v8, &KeyHandle);
  v3 = 0;
  if ( (int)result < 0 )
  {
    RtlInitUnicodeString(&v4, L"PowerCycleCount");
    result = sub_1401AD970(*(_QWORD *)(a1 + 8), (int)&DestinationString, (int)&v4, 4, (__int64)&v8, &KeyHandle);
    if ( (int)result >= 0 )
      v3 = v7;
    *(_DWORD *)(a1 + 3352) = v3;
  }
  else
  {
    *(_DWORD *)(a1 + 3352) = v7;
  }
  return result;
}
