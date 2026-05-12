/*
 * XREFs of sub_1400160C0 @ 0x1400160C0
 * Callers:
 *     sub_14000C348 @ 0x14000C348 (sub_14000C348.c)
 * Callees:
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 */

__int64 __fastcall sub_1400160C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v9; // r15
  char v10; // al
  int v11; // eax
  unsigned int v12; // esi

  v5 = *(_QWORD *)(a4 + 16);
  v6 = *(_QWORD *)(a1 + 64);
  v9 = 0LL;
  sub_140017C40(v5, a2, 0LL, 0LL);
  v10 = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 160) = a2;
  *(_BYTE *)(v5 + 16) = v10 & 0xE3 | 4;
  *(_QWORD *)(v5 + 168) = a3;
  *(_QWORD *)(v5 + 216) = v6;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v9 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  sub_1400161E0(v6, a3);
  *(_QWORD *)(v5 + 656) = a5;
  if ( *(_BYTE *)(v6 + 4370) )
    v11 = sub_140017D90(v6, v5);
  else
    v11 = sub_1400184D0(v6, v5);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    sub_140017A20(v5, 0LL);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400556F8(off_140168120->AttachedDevice, 10LL, &unk_14014C778, v6, a2, *(_DWORD *)(a2 + 48));
    }
  }
  return v12;
}
