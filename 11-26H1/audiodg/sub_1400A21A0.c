/*
 * XREFs of sub_1400A21A0 @ 0x1400A21A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000F528 @ 0x14000F528 (sub_14000F528.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 */

void __fastcall sub_1400A21A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // al
  int v4; // ebp
  __int64 v5; // rcx
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
  {
    a2 = *(_QWORD *)(a1 + 80);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 164), 0, 0);
    v4 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 448);
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)(v2 + 440), v5);
        v8 = *(_QWORD *)(v2 + 440);
        sub_140019444((__int64 *)(v2 + 432));
        v6 = sub_14001D564((_QWORD *)(v2 + 432), &v8);
        if ( v6 < 0 )
          sub_140007934(
            (int)retaddr,
            980,
            (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            v6);
        *(_QWORD *)(v2 + 448) = 0LL;
      }
    }
    a1 = *(_QWORD *)(v2 + 440);
    if ( a1 && ((*(_BYTE *)(v2 + 184) & 1) == 0 || v4) )
      SetEvent((HANDLE)a1);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F528(a1, a2, v2 - 8, *(_DWORD *)(v2 + 460), *(_QWORD *)(v2 + 440));
}
