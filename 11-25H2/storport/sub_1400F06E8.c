/*
 * XREFs of sub_1400F06E8 @ 0x1400F06E8
 * Callers:
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_140130F80 @ 0x140130F80 (sub_140130F80.c)
 */

char __fastcall sub_1400F06E8(__int64 a1, char *a2)
{
  char v4; // r14
  char v6; // si
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // [rsp+A8h] [rbp+27h] BYREF

  v4 = 0;
  v10 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *a2;
  if ( *a2 && v6 != *(_BYTE *)(a1 + 946) )
  {
    *(_BYTE *)(a1 + 946) = v6;
    sub_1400A870C(
      a1,
      2,
      2,
      (__int64)L"Health Status : Critical Warning",
      L"Critical Warning",
      v6,
      L"Spare Below Threshold",
      *a2 & 1,
      L"Temperature Threshold",
      (*a2 & 2) != 0LL,
      L"Reliability Degraded",
      (*a2 & 4) != 0,
      L"ReadOnly",
      (*a2 & 8) != 0LL,
      L"Volatile Memory Backup Device Failure",
      (*a2 & 0x10) != 0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    if ( v6 != 2 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 1208) = *(_DWORD *)(a1 + 1208) & ~*(unsigned __int8 *)(a1 + 946) | 2;
    }
    v7 = *a2;
    if ( (*a2 & 1) != 0 )
    {
      *(_QWORD *)&v10 = v10 | 1;
    }
    else if ( (v7 & 2) != 0 )
    {
      *(_QWORD *)&v10 = v10 | 2;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v10 = v10 | 4;
    }
    else if ( (v7 & 8) != 0 )
    {
      *(_QWORD *)&v10 = v10 | 8;
    }
    else if ( (v7 & 0x10) != 0 )
    {
      *(_QWORD *)&v10 = v10 | 0x10;
    }
    else
    {
      *(_QWORD *)&v10 = v10 | 0x800;
    }
    sub_140130F80(*(_QWORD *)(a1 + 128), &v10, a2, 512LL);
  }
  if ( (unsigned __int8)a2[5] >= 0x5Fu )
  {
    v8 = *(_QWORD *)(a1 + 136);
    if ( (v8 & 0x800000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 136) = v8 | 0x800000000LL;
      sub_1400A870C(
        a1,
        2,
        2,
        (__int64)L"Health Status : Percentage Used",
        L"Percentage Used",
        a2[5],
        L"Endurance Threshold Limit",
        95,
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
  }
  if ( (unsigned __int8)a2[3] <= 2u )
  {
    v9 = *(_QWORD *)(a1 + 136);
    if ( (v9 & 0x1000000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 136) = v9 | 0x1000000000LL;
      sub_1400A870C(
        a1,
        2,
        2,
        (__int64)L"Health Status : Available Spare",
        L"Available Spare",
        a2[3],
        L"Spare Threshold Limit",
        2,
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
  }
  return v4;
}
