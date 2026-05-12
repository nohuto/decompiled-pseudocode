/*
 * XREFs of sub_140118560 @ 0x140118560
 * Callers:
 *     sub_1400F73A0 @ 0x1400F73A0 (sub_1400F73A0.c)
 *     sub_140107454 @ 0x140107454 (sub_140107454.c)
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 * Callees:
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_140118560(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  unsigned __int8 *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v13 = 0LL;
  *(_BYTE *)(v3 + 3) |= 1u;
  v6 = a3;
  if ( (int)IoGetIoAttributionHandle(a2, &v13) >= 0 )
  {
    v7 = *(unsigned __int8 **)(a2 + 184);
    v8 = v13;
    v14 = 0LL;
    LODWORD(v14) = 1;
    v15 = 0LL;
    DWORD1(v14) = *v7 | 0x300;
    *((_QWORD *)&v15 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v15 + 1);
    IoRecordIoAttribution(v8, &v14);
  }
  sub_140120B60(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  _InterlockedOr(v12, 0);
  LODWORD(v9) = _InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 256) + 8 * v6 + 24), 1, 0);
  if ( !(_DWORD)v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 952LL));
    v10 = *(_QWORD *)(a1 + 16);
    if ( !*(_QWORD *)(v10 + 1272) || (v9 = *(_DWORD **)(v10 + 1272), !*v9) )
    {
      LODWORD(v9) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 128LL),
                      1,
                      0);
      if ( !(_DWORD)v9 )
        LOBYTE(v9) = KeSetTimer(
                       *(PKTIMER *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 16LL),
                       (LARGE_INTEGER)-600LL,
                       *(PKDPC *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 8LL));
    }
  }
  return (char)v9;
}
