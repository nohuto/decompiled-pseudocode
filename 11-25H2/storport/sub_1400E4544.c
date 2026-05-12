/*
 * XREFs of sub_1400E4544 @ 0x1400E4544
 * Callers:
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DD768 @ 0x1400DD768 (sub_1400DD768.c)
 *     sub_1400DFC54 @ 0x1400DFC54 (sub_1400DFC54.c)
 *     sub_1400DFDFC @ 0x1400DFDFC (sub_1400DFDFC.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E1630 @ 0x1400E1630 (sub_1400E1630.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E51D4 @ 0x1400E51D4 (sub_1400E51D4.c)
 *     sub_1400E54E8 @ 0x1400E54E8 (sub_1400E54E8.c)
 *     sub_1400E5614 @ 0x1400E5614 (sub_1400E5614.c)
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 */

__int64 __fastcall sub_1400E4544(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+48h] [rbp-80h]
  int v19; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+D8h] [rbp+10h] BYREF

  v19 = 0;
  v20 = 0;
  sub_1400A870C(
    a1,
    1,
    4,
    (__int64)L"Reconnecting association",
    (void *)&dword_140149108,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 96) + 32LL) & 4) != 0 )
    *(_WORD *)(a1 + 4) = -1;
  v2 = *(_QWORD *)(a1 + 712);
  *(_DWORD *)(a1 + 568) = 1;
  *(_WORD *)(a1 + 22) = 0;
  v3 = sub_1400E1C2C(v2);
  if ( v3 < 0 )
  {
    v4 = 10;
LABEL_38:
    sub_1400A870C(
      a1,
      1,
      2,
      (__int64)L"Reconnecting association failed",
      L"Status",
      v3,
      L"FailureCode",
      v4,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    return (unsigned int)v3;
  }
  if ( (*(_BYTE *)(a1 + 136) & 0x40) != 0 )
  {
    v3 = sub_1400F33E4(*(_QWORD *)(a1 + 712));
    if ( v3 < 0 )
    {
      v4 = 11;
      goto LABEL_38;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 712) + 120LL) = 5;
  *(_DWORD *)(a1 + 568) = 2;
  v3 = sub_1400E18FC(a1, 0, (_QWORD *)(a1 + 584));
  if ( v3 < 0 )
  {
    v4 = 15;
    goto LABEL_38;
  }
  v3 = sub_1400DD768(a1, &v19);
  if ( v3 < 0 || (v3 = sub_1400DFC54(a1, &v19), v3 < 0) )
  {
    v4 = v19;
    goto LABEL_38;
  }
  v5 = a1 + 592;
  ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0x52436152u);
  *(_QWORD *)(a1 + 592) = 0LL;
  v3 = sub_1400E0B68(a1, 0, 1, 0, 0, (_QWORD *)(a1 + 592));
  if ( v3 < 0 )
  {
    v4 = 20;
    goto LABEL_38;
  }
  v3 = 0;
  if ( *(_DWORD *)(a1 + 572) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)v5 + 516LL) )
    {
      v4 = 21;
      v3 = -1073741637;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(a1 + 576) & 0xFFFF0000) >= 0x20000 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0x52436152u);
      *(_QWORD *)(a1 + 600) = 0LL;
      v3 = sub_1400E0B68(a1, -1, 6, 0, 0, (_QWORD *)(a1 + 600));
      if ( v3 < 0 )
      {
        v4 = 22;
        goto LABEL_38;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)v5 + 525LL) & 1) != 0 )
    {
      v3 = sub_1400E1630(a1, v6, 6, v7, 0, v14, v15, v16, v17, v18, &v20);
      if ( v3 < 0 )
      {
        v4 = 23;
        goto LABEL_38;
      }
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)v20 << 19) ^ (*(_QWORD *)(a1 + 136) ^ ((unsigned __int64)v20 << 19)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
    v3 = sub_1400E54E8(a1);
    if ( v3 < 0 )
    {
      v4 = 24;
      goto LABEL_38;
    }
    sub_1400E51D4(a1);
    v5 = a1 + 592;
  }
  if ( *(_WORD *)(*(_QWORD *)v5 + 320LL) )
  {
    v3 = sub_1400E5614(a1, v6);
    v11 = *(_QWORD *)v5;
    if ( v3 < 0 )
    {
      sub_1400A870C(
        a1,
        1,
        2,
        (__int64)L"KATO set failed",
        L"Status",
        v3,
        L"KeepAliveTimeout msecs",
        *(_DWORD *)(a1 + 1076),
        L"KAS",
        *(_WORD *)(v11 + 320),
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
      v4 = 31;
      goto LABEL_38;
    }
    sub_1400A870C(
      a1,
      1,
      4,
      (__int64)L"KATO set",
      L"KeepAliveTimeout msecs",
      *(_DWORD *)(a1 + 1076),
      L"KAS",
      *(_WORD *)(v11 + 320),
      L"TBKAS",
      (*(_DWORD *)(v11 + 96) & 0x40LL) != 0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
  }
  else
  {
    sub_1400A870C(
      a1,
      1,
      4,
      (__int64)L"Keep Alive not supported",
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
  }
  if ( *(_BYTE *)(a1 + 742) )
  {
    v3 = sub_1400DFDFC(a1, v8, v9, v10);
    if ( v3 < 0 )
    {
      v4 = 33;
      goto LABEL_38;
    }
  }
  v12 = *(_QWORD *)(a1 + 968) | 1LL;
  *(_DWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 968) = v12;
  sub_1400A870C(
    a1,
    1,
    4,
    (__int64)L"Reconnecting association succeeded",
    (void *)&dword_140149108,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  return (unsigned int)v3;
}
