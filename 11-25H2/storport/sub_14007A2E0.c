/*
 * XREFs of sub_14007A2E0 @ 0x14007A2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_1400305F0 @ 0x1400305F0 (sub_1400305F0.c)
 *     sub_14003081C @ 0x14003081C (sub_14003081C.c)
 *     sub_140076618 @ 0x140076618 (sub_140076618.c)
 *     sub_14007A550 @ 0x14007A550 (sub_14007A550.c)
 *     sub_1400BC33C @ 0x1400BC33C (sub_1400BC33C.c)
 */

void __fastcall sub_14007A2E0(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp-20h]

  if ( sub_140021280(Context) )
  {
    v4 = *(_QWORD *)(Context + 1872);
    if ( (*(_DWORD *)(v4 + 32) & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 507) & 4) == 0 )
        sub_1400BC33C(Context);
      PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1872), v2, v3);
    }
    else
    {
      if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      {
        v5 = *(_BYTE *)(Context + 106);
        sub_140076618(
          *(_QWORD *)(Context + 24),
          &stru_140149EF8,
          v3,
          *(_QWORD *)v4,
          *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
          *(_BYTE *)(Context + 104),
          *(_BYTE *)(Context + 105),
          v5);
      }
      sub_1400305F0(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~8u;
      *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~0x10u;
      if ( *(_DWORD *)(Context + 1040) && (*(_BYTE *)(Context + 505) & 0x40) != 0 )
        *(_BYTE *)(Context + 1862) = 0;
      if ( sub_1400215B0(Context, 5) )
        sub_14003081C(Context);
      sub_14007A550((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
    }
  }
}
