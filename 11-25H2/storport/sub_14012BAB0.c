/*
 * XREFs of sub_14012BAB0 @ 0x14012BAB0
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     sub_140128094 @ 0x140128094 (sub_140128094.c)
 *     sub_14012BB98 @ 0x14012BB98 (sub_14012BB98.c)
 */

void __fastcall sub_14012BAB0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  int v4; // esi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r11
  _DWORD *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // edx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( *(_BYTE *)v3 == 1 && *a2 && a2[1] >= 0x10u )
  {
    v4 = a2[2];
    v5 = a2[3];
    *(_DWORD *)(v3 + 136) = v4;
    *(_DWORD *)(v3 + 192) = v5;
    sub_14012BB98(a1);
    v8 = *(_DWORD **)(v7 + 1048);
    if ( v8[12] == 5 )
    {
      if ( v4 == 1 )
        v9 = v8[16];
      else
        v9 = v8[15];
      sub_140128094(*(_QWORD **)(v7 + 128), v9, v6, 0);
    }
    else if ( (*(_DWORD *)(v3 + 176) & 2) != 0 )
    {
      v10 = v4 == 1 ? v8[16] : -1;
      sub_140128094(*(_QWORD **)(v7 + 128), v10, v6, 0);
      if ( v4 == 1 )
        PoFxSetComponentLatency(**(_QWORD **)(v3 + 8), 0LL, 10000LL * (unsigned int)a2[3]);
    }
  }
}
