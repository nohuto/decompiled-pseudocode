/*
 * XREFs of sub_14001D308 @ 0x14001D308
 * Callers:
 *     sub_14001D2BC @ 0x14001D2BC (sub_14001D2BC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14005D050 @ 0x14005D050 (sub_14005D050.c)
 */

void __fastcall sub_14001D308(__int64 a1)
{
  void **v2; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  ULONG ActualResolution; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &off_1400B91C8;
  *(_QWORD *)(a1 + 8) = &off_1400B91A8;
  v2 = (void **)(a1 + 120);
  if ( *(_QWORD *)(a1 + 120) && *v2 != (void *)-1LL )
    sub_140016980(a1);
  sub_14001D640(a1 + 280, 0LL);
  sub_14001D640(a1 + 288, 0LL);
  sub_140016858((void **)(a1 + 296), 0LL);
  sub_14001D640(a1 + 264, 0LL);
  sub_140019444((__int64 *)(a1 + 408));
  sub_140019444((__int64 *)(a1 + 424));
  sub_14001D640(a1 + 432, 0LL);
  sub_14001D640(a1 + 416, 0LL);
  if ( *(_BYTE *)(a1 + 73) )
  {
    EnterCriticalSection(&stru_1400E86B0);
    v5 = &stru_1400E86B0;
    if ( _InterlockedExchangeAdd(&dword_1400E8958, 0xFFFFFFFF) == 1 )
    {
      ActualResolution = 0;
      if ( NtSetTimerResolution(0, 0, &ActualResolution) < 0 )
        sub_14005D050(retaddr, 2233LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp");
    }
    sub_140018FF0(&v5);
  }
  sub_140019444((__int64 *)(a1 + 80));
  sub_140019444((__int64 *)(a1 + 208));
  sub_14001D640(a1 + 312, 0LL);
  sub_14001D96C(a1 + 4720);
  sub_140003238((__int64 *)(a1 + 4688));
  if ( *(_QWORD *)(a1 + 432) )
    sub_14001D6A8();
  sub_140003238((__int64 *)(a1 + 424));
  if ( *(_QWORD *)(a1 + 416) )
    sub_14001D6A8();
  sub_140003238((__int64 *)(a1 + 408));
  sub_140003238((__int64 *)(a1 + 328));
  if ( *(_QWORD *)(a1 + 312) )
    sub_14001D6A8();
  sub_140016F18((void **)(a1 + 296));
  if ( *(_QWORD *)(a1 + 288) )
    sub_14001D6A8();
  if ( *(_QWORD *)(a1 + 280) )
    sub_14001D6A8();
  if ( *(_QWORD *)(a1 + 264) )
    sub_14001D6A8();
  sub_140003238((__int64 *)(a1 + 256));
  sub_140003238((__int64 *)(a1 + 208));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  sub_140016F18(v2);
  sub_140003238((__int64 *)(a1 + 80));
  sub_140006B48(a1 + 24);
}
