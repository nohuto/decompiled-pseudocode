/*
 * XREFs of sub_140020210 @ 0x140020210
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140021324 @ 0x140021324 (sub_140021324.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_140020210(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int v7; // r8d
  __int64 v8; // rcx
  _DWORD v9[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  char v12; // [rsp+64h] [rbp-14h]
  __int16 v13; // [rsp+65h] [rbp-13h]
  char v14; // [rsp+67h] [rbp-11h]

  if ( (unsigned __int8)sub_140021280(a1) )
  {
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140053738(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_14014A1F8,
        v4,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) &= ~2u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x100) != 0 )
    {
      sub_140021324(a1);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 64LL) = MEMORY[0xFFFFF78000000014];
    }
    if ( !*(_BYTE *)(a1 + 759) )
    {
      *(_BYTE *)(a1 + 759) = 1;
      v5 = *(_QWORD *)(a1 + 808);
      if ( (v5 & 3) == 0 )
      {
        do
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v5 | 2, v5);
        }
        while ( v6 != v5 && (v5 & 3) == 0 );
      }
      sub_140021810(a1, 2LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0
      && (unsigned __int8)sub_1400215B0(a1, 6LL)
      && (unsigned __int8)sub_1400215B0(a1, 6LL) )
    {
      v9[0] = 1;
      v13 = 0;
      v14 = 0;
      v11 = 0;
      v12 = 0;
      v8 = *(_QWORD *)(a1 + 24) + 376LL;
      v9[1] = 24;
      v10 = a1 + 96;
      sub_140021760(v8, 6LL, v9);
    }
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1872), a2);
    if ( byte_140168DAA )
    {
      if ( (byte_1401694F2 & 0x10) != 0 )
        sub_140053738(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&unk_14014B1E8,
          v7,
          **(_QWORD **)(a1 + 1872),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
