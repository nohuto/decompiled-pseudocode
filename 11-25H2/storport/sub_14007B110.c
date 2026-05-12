/*
 * XREFs of sub_14007B110 @ 0x14007B110
 * Callers:
 *     sub_1400DC460 @ 0x1400DC460 (sub_1400DC460.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E0F0C @ 0x1400E0F0C (sub_1400E0F0C.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 *     sub_1400E1630 @ 0x1400E1630 (sub_1400E1630.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 *     sub_1400E5614 @ 0x1400E5614 (sub_1400E5614.c)
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_14007B110(__int64 a1, char a2)
{
  unsigned int v4; // esi
  __int64 result; // rax

  v4 = a2 != 0 ? 152 : 240;
  result = sub_1400143E0(64LL, v4, 1918067026LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  if ( result )
  {
    *(_DWORD *)result = 2621448;
    *(_DWORD *)(result + 8) = 1397899864;
    *(_DWORD *)(result + 12) = 1;
    *(_DWORD *)(result + 16) = v4;
    *(_WORD *)(result + 36) = 2;
    *(_DWORD *)(result + 52) = 0;
    *(_QWORD *)(result + 56) = 1LL;
    *(_DWORD *)(result + 20) = a2 != 0 ? 44 : 10;
    *(_QWORD *)(result + 64) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 120) = 128;
    if ( a2 )
    {
      *(_DWORD *)(result + 128) = 68;
      *(_DWORD *)(result + 132) = 12;
      *(_WORD *)(result + 136) = 1;
    }
    else
    {
      *(_DWORD *)(result + 128) = 67;
      *(_DWORD *)(result + 132) = 100;
      *(_QWORD *)(result + 136) = *(_QWORD *)(a1 + 560);
    }
  }
  return result;
}
