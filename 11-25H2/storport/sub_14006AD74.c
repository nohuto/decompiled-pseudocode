/*
 * XREFs of sub_14006AD74 @ 0x14006AD74
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 */

__int64 __fastcall sub_14006AD74(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a2 + 800) != -1 )
  {
    if ( (unsigned int)sub_1400567A0() )
      v4 = *(_QWORD *)(a1 + 3600);
    else
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6192LL);
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 72) + 72LL * *(unsigned int *)(a2 + 800) + 36)) < 0 )
      KeBugCheckEx(0x176u, 2uLL, 1uLL, a2, v4 + 56);
  }
  return 0LL;
}
