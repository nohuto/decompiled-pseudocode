/*
 * XREFs of sub_1400AD1E4 @ 0x1400AD1E4
 * Callers:
 *     sub_1400AD420 @ 0x1400AD420 (sub_1400AD420.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000F528 @ 0x14000F528 (sub_14000F528.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 */

char __fastcall sub_1400AD1E4(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rsi
  char v4; // di
  int v6; // eax
  signed __int32 v7; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1392);
  v3 = (_QWORD *)(a1 + 1376);
  v4 = 0;
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 1384), v2);
    v10 = *(_QWORD *)(a1 + 1384);
    sub_140019444((__int64 *)(a1 + 1376));
    v6 = sub_14001D564(v3, &v10);
    if ( v6 < 0 )
      sub_140007934(
        (int)retaddr,
        211,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        v6);
    *(_QWORD *)(a1 + 1392) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL), 0x20u);
  }
  if ( *v3 )
  {
    v7 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1336) + 1312LL) + 64LL),
           0,
           0);
    if ( (v7 & 0xFFFFFF81) == 1 && (v7 & 2) != 0 )
    {
      SetEvent(*(HANDLE *)(a1 + 1384));
      v4 = 1;
    }
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F528(*(_QWORD *)(a1 + 1384), a2, a1, *(_DWORD *)(a1 + 1404), *(_QWORD *)(a1 + 1384));
  return v4;
}
