/*
 * XREFs of sub_1400C5068 @ 0x1400C5068
 * Callers:
 *     sub_1400C225C @ 0x1400C225C (sub_1400C225C.c)
 * Callees:
 *     sub_1400C3BAC @ 0x1400C3BAC (sub_1400C3BAC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1400C5068(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+88h] [rbp-20h]

  memset_0(Dst, 0, 0x40uLL);
  v6 = v6 & 0xFFFFFF00 | 0xD1;
  Dst[0] = 10;
  v2 = sub_140187D84(a1, 0, 0, 0, (__int64)Dst);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_1400C3BAC(a1, -1, -1, 0, v2);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 32LL) = 0;
  }
  return v3;
}
