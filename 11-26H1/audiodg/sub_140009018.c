/*
 * XREFs of sub_140009018 @ 0x140009018
 * Callers:
 *     sub_140008D80 @ 0x140008D80 (sub_140008D80.c)
 *     sub_140008EF0 @ 0x140008EF0 (sub_140008EF0.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_1400562A0 @ 0x1400562A0 (sub_1400562A0.c)
 *     sub_14006E240 @ 0x14006E240 (sub_14006E240.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000858C @ 0x14000858C (sub_14000858C.c)
 */

__int64 __fastcall sub_140009018(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 256);
  while ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v7 + 8) == a2 )
    {
      v6 = sub_14000858C(v7, a3);
      if ( v6 < 0 )
        sub_140007934((int)retaddr, 4615, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v6);
    }
  }
  return 0LL;
}
