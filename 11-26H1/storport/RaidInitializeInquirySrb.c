/*
 * XREFs of RaidInitializeInquirySrb @ 0x1401B48C0
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeInquirySrb(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  _BYTE *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax

  if ( a6 < 0x24 )
    return 3221225716LL;
  if ( a7 == 1 )
  {
    *(_WORD *)a1 = 8;
    *(_BYTE *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 12) = 1;
    *(_QWORD *)(a1 + 16) = 184LL;
    *(_DWORD *)(a1 + 120) = 144;
    *(_QWORD *)(a1 + 64) = a5;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_WORD *)(a1 + 36) = 2;
    *(_DWORD *)(a1 + 52) = 128;
    *(_DWORD *)(a1 + 24) = 72;
    *(_DWORD *)(a1 + 60) = a6;
    *(_DWORD *)(a1 + 40) = 10;
    *(_DWORD *)(a1 + 56) = 1;
    *(_WORD *)(a1 + 128) = 1;
    *(_DWORD *)(a1 + 132) = 4;
    *(_BYTE *)(a1 + 136) = a2;
    *(_BYTE *)(a1 + 137) = a3;
    *(_BYTE *)(a1 + 138) = a4;
    v9 = *(unsigned int *)(a1 + 120);
    *(_DWORD *)(v9 + a1) = 64;
    *(_DWORD *)(v9 + a1 + 4) = 32;
    *(_BYTE *)(v9 + a1 + 10) = 6;
    v7 = (_BYTE *)(v9 + a1 + 24);
  }
  else
  {
    *(_WORD *)a1 = 88;
    *(_BYTE *)(a1 + 2) = 0;
    *(_BYTE *)(a1 + 5) = a2;
    *(_BYTE *)(a1 + 6) = a3;
    *(_BYTE *)(a1 + 7) = a4;
    *(_DWORD *)(a1 + 12) = 72;
    *(_QWORD *)(a1 + 24) = a5;
    *(_DWORD *)(a1 + 16) = a6;
    *(_DWORD *)(a1 + 20) = 10;
    *(_BYTE *)(a1 + 10) = 6;
    v7 = (_BYTE *)(a1 + 72);
  }
  v7[4] = a6;
  v7[3] = BYTE1(a6);
  result = 0LL;
  *v7 = 18;
  return result;
}
