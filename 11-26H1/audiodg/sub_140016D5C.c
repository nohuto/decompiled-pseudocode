/*
 * XREFs of sub_140016D5C @ 0x140016D5C
 * Callers:
 *     sub_140016D20 @ 0x140016D20 (sub_140016D20.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140016F3C @ 0x140016F3C (sub_140016F3C.c)
 *     sub_140016F64 @ 0x140016F64 (sub_140016F64.c)
 *     sub_140016F80 @ 0x140016F80 (sub_140016F80.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 */

__int64 __fastcall sub_140016D5C(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_1400B85D8;
  v2 = a1 + 144;
  *(_QWORD *)(a1 + 8) = off_1400B85B8;
  *(_QWORD *)(a1 + 16) = off_1400B8630;
  sub_140016F80(a1 + 144, 0LL);
  if ( *(_QWORD *)(a1 + 176) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 216));
    v4 = a1 + 216;
    *(_BYTE *)(a1 + 224) = 1;
    sub_14003A998(&v4);
    SetThreadpoolWait(*(PTP_WAIT *)(a1 + 176), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*(PTP_WAIT *)(a1 + 176), 1);
    CloseThreadpoolWait(*(PTP_WAIT *)(a1 + 176));
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  *(_BYTE *)(a1 + 208) = 1;
  sub_140016858((void **)(a1 + 112), 0LL);
  sub_140003238((__int64 *)(a1 + 192));
  if ( *(_QWORD *)(a1 + 184) )
    sub_14001D6A8();
  sub_140016F3C(a1 + 152);
  sub_140016F64(v2);
  sub_140016F18(a1 + 112);
  sub_140003238((__int64 *)(a1 + 104));
  sub_140003238((__int64 *)(a1 + 96));
  WindowsDeleteString(*(HSTRING *)(a1 + 80));
  *(_QWORD *)(a1 + 80) = 0LL;
  WindowsDeleteString(*(HSTRING *)(a1 + 64));
  *(_QWORD *)(a1 + 64) = 0LL;
  return sub_140016EDC(a1);
}
