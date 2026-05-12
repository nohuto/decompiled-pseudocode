/*
 * XREFs of sub_14012B468 @ 0x14012B468
 * Callers:
 *     sub_140126C00 @ 0x140126C00 (sub_140126C00.c)
 *     sub_1401276A0 @ 0x1401276A0 (sub_1401276A0.c)
 * Callees:
 *     sub_14012B1B8 @ 0x14012B1B8 (sub_14012B1B8.c)
 *     sub_14012B3F0 @ 0x14012B3F0 (sub_14012B3F0.c)
 *     sub_14012BA18 @ 0x14012BA18 (sub_14012BA18.c)
 *     sub_14012BB98 @ 0x14012BB98 (sub_14012BB98.c)
 */

char __fastcall sub_14012B468(__int64 a1, char a2)
{
  __int64 v3; // rax

  if ( a2 )
  {
    sub_14012B1B8(a1);
    PoFxSetComponentLatency(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL), 0LL, 0LL);
    LOBYTE(v3) = sub_14012B3F0(a1);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL);
    if ( *(_DWORD *)(v3 + 16) > 1u )
    {
      sub_14012BB98(a1);
      LOBYTE(v3) = sub_14012BA18(a1);
    }
  }
  return v3;
}
