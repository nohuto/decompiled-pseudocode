/*
 * XREFs of sub_140033304 @ 0x140033304
 * Callers:
 *     sub_1400A7170 @ 0x1400A7170 (sub_1400A7170.c)
 *     sub_1400A7640 @ 0x1400A7640 (sub_1400A7640.c)
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 * Callees:
 *     sub_14003AC54 @ 0x14003AC54 (sub_14003AC54.c)
 */

__int64 __fastcall sub_140033304(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int32 v2; // r9d
  __int64 v3; // r11
  unsigned __int32 v4; // ecx
  __int64 result; // rax

  v1 = a1;
  do
  {
    v2 = sub_14003AC54(v1);
    v4 = *(_DWORD *)(v3 + 4LL * v2);
  }
  while ( v2 != _InterlockedCompareExchange(*(volatile signed __int32 **)(v1 + 136), v4, v2) );
  result = 16LL;
  if ( v2 <= 0x10 )
    return v4;
  return result;
}
