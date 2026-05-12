/*
 * XREFs of sub_1400CD79C @ 0x1400CD79C
 * Callers:
 *     sub_1400D7690 @ 0x1400D7690 (sub_1400D7690.c)
 * Callees:
 *     sub_1400E7EF0 @ 0x1400E7EF0 (sub_1400E7EF0.c)
 *     sub_1400E9608 @ 0x1400E9608 (sub_1400E9608.c)
 *     sub_1400EC4CC @ 0x1400EC4CC (sub_1400EC4CC.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1400F6764 @ 0x1400F6764 (sub_1400F6764.c)
 *     sub_1401223BC @ 0x1401223BC (sub_1401223BC.c)
 */

__int64 __fastcall sub_1400CD79C(_QWORD *SystemArgument2)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // edi

  v1 = SystemArgument2[16];
  *((_DWORD *)SystemArgument2 + 155) = *(_DWORD *)(v1 + 200);
  SystemArgument2[121] &= ~2uLL;
  sub_1400F6764();
  sub_1400F0DFC(SystemArgument2, 8LL, 4LL);
  sub_1400F0DFC(SystemArgument2, 0LL, 8LL);
  SystemArgument2[73] = 0LL;
  *((_DWORD *)SystemArgument2 + 2) = 1;
  *((_DWORD *)SystemArgument2 + 300) = 4;
  *((_DWORD *)SystemArgument2 + 301) = sub_1400EC4CC(SystemArgument2);
  sub_1400F0DFC(SystemArgument2, 36LL, 4LL);
  *((_WORD *)SystemArgument2 + 3) = 1;
  sub_1400F0DFC(SystemArgument2, 2147483652LL, 4LL);
  *((_BYTE *)SystemArgument2 + 1729) = 1;
  if ( (*(_BYTE *)(v1 + 416) & 8) != 0 && !(unsigned int)sub_1400F0DFC(SystemArgument2, 2147483653LL, 1LL) )
    *((_BYTE *)SystemArgument2 + 1729) = 1;
  sub_1400E9608(SystemArgument2);
  sub_1401223BC(SystemArgument2);
  sub_1400F1D38(SystemArgument2, v3, 1LL);
  sub_1400ED16C(SystemArgument2);
  v4 = sub_1400E7EF0(SystemArgument2);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(SystemArgument2[159] + 40LL) + 192LL), 1, 0) )
    KeSetCoalescableTimer(
      (PKTIMER)(*(_QWORD *)(SystemArgument2[159] + 40LL) + 128LL),
      (LARGE_INTEGER)-50000000LL,
      0x7D0u,
      0x12Cu,
      (PKDPC)(*(_QWORD *)(SystemArgument2[159] + 40LL) + 64LL));
  return v4;
}
