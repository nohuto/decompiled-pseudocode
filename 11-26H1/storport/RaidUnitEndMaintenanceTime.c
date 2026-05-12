/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x140080780
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x14007EA60 (McTemplateK0zjquuujssstq_EtwWriteTransfer.c)
 *     RaidUnitMaintenanceTime @ 0x1400809B4 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rbp

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v3 = (_QWORD **)(a2 + 1872);
    v4 = *(_QWORD *)(a2 + 1872);
    if ( (*(_DWORD *)(v4 + 148) & 1) != 0 )
    {
      if ( (byte_140173446 & 4) != 0 )
        McTemplateK0zjquuujssstq_EtwWriteTransfer(
          a2 + 177,
          a2 + 168,
          a2 + 2104,
          *(const wchar_t **)(*(_QWORD *)(a2 + 24) + 4784LL),
          *(_QWORD *)(a2 + 24) + 5128LL,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 104),
          *(_BYTE *)(a2 + 105),
          *(_BYTE *)(a2 + 106),
          a2 + 2104,
          (const char *)(a2 + 168),
          (const char *)(a2 + 177),
          (const char *)(a2 + 242),
          *(_DWORD *)(v4 + 144) == 0,
          *(_DWORD *)(v4 + 144));
      v5 = a2 + 1872;
      *((_DWORD *)*v3 + 37) &= ~1u;
      v6 = *(_QWORD *)(a2 + 24);
      if ( RaidUnitCheckAndAcquirePoFx(a2) )
      {
        PoFxIdleComponent(**v3, 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1864));
      }
      if ( *(_QWORD *)(v6 + 5024) )
        RaidAdapterPoFxIdleComponent(v6, 0LL, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 144LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)v5 + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1864));
  }
}
