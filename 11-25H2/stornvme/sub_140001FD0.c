/*
 * XREFs of sub_140001FD0 @ 0x140001FD0
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 *     sub_140026970 @ 0x140026970 (sub_140026970.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 */

__int64 __fastcall sub_140001FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  unsigned __int8 v7; // si
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v7 = *(_BYTE *)(a3 + 2);
  if ( v7 <= (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 260LL) >> 1) & 7) )
  {
    *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFC | 1;
    sub_1400042C0(a1, a2);
    v9 = *(_QWORD *)(a1 + 1560);
    if ( !v9
      || (*(_BYTE *)(v9 + 260) & 0x10) == 0
      || (*(_DWORD *)(a1 + 56) & 0x20) != 0
      || (v10 = 24, (*(_DWORD *)(a1 + 24) & 0x400) != 0) )
    {
      v10 = 8;
    }
    v11 = *(_DWORD *)(v6 + 4136) & 0xFFFFFFF8;
    *(_BYTE *)(v6 + 4096) = 16;
    *(_QWORD *)(v6 + 4192) = sub_140026970;
    *(_DWORD *)(v6 + 4136) = v10 | (v11 ^ v7 & 7) & 0xFFFFFFE7;
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    sub_140002330(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
