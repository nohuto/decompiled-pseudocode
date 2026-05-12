/*
 * XREFs of sub_1400C225C @ 0x1400C225C
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_140012E50 @ 0x140012E50 (sub_140012E50.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400C5068 @ 0x1400C5068 (sub_1400C5068.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140185470 @ 0x140185470 (sub_140185470.c)
 */

__int64 __fastcall sub_1400C225C(__int64 a1)
{
  __int64 v2; // rax
  int v4; // eax
  char v5; // cl
  char v6; // dl
  char v7; // cl
  __int64 v8; // rcx

  if ( !*(_QWORD *)(a1 + 6160) )
  {
    v2 = sub_1400143E0(64LL, 184LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 6160) = v2;
    if ( !v2 )
      return 3221225626LL;
  }
  v4 = sub_1400C5068(a1);
  v5 = *(_BYTE *)(a1 + 111);
  v6 = v5 | 2;
  v7 = v5 & 0xFD;
  if ( v4 < 0 )
    v6 = v7;
  *(_BYTE *)(a1 + 111) = v6;
  if ( *(char *)(a1 + 110) >= 0 )
  {
    **(_WORD **)(a1 + 6160) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 4LL) = 184;
    sub_140185470(a1);
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(a1 + 6160) + 80LL), SynchronizationEvent, 0);
    v8 = *(_QWORD *)(a1 + 6160) + 128LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_DWORD *)(v8 + 16) = 0;
    *(_DWORD *)v8 = 1;
    KeInitializeEvent((PRKEVENT)(v8 + 24), SynchronizationEvent, 0);
  }
  sub_140012E50(a1 + 376, 23LL);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) )
    *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) = sub_1400143E0(64LL, 28LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  return 0LL;
}
