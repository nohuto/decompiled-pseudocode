/*
 * XREFs of sub_140030360 @ 0x140030360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_1400305F0 @ 0x1400305F0 (sub_1400305F0.c)
 *     sub_14003081C @ 0x14003081C (sub_14003081C.c)
 *     sub_1400308A8 @ 0x1400308A8 (sub_1400308A8.c)
 *     sub_140076550 @ 0x140076550 (sub_140076550.c)
 */

void __fastcall sub_140030360(__int64 Context)
{
  int v2; // edx
  int v3; // r8d

  if ( sub_140021280(Context) )
  {
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140076550(
        *(_QWORD *)(Context + 24),
        v2,
        v3,
        **(_QWORD **)(Context + 1872),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 104),
        *(_BYTE *)(Context + 105),
        *(_BYTE *)(Context + 106));
    sub_1400305F0(Context, 0LL);
    *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 936) = 0;
    if ( *(_DWORD *)(Context + 1040) && (*(_BYTE *)(Context + 505) & 0x40) != 0 )
      *(_BYTE *)(Context + 1862) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) & 4) != 0 )
    {
      if ( sub_1400215B0(Context, 5) )
        sub_14003081C(Context, 0LL);
    }
    sub_1400308A8((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
}
