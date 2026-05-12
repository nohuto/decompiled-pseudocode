/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1400809B4
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x140080780 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x140080920 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x140080B80 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponent @ 0x14002A810 (RaidUnitPoFxActivateComponent.c)
 *     McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x14007E8D0 (McTemplateK0zjquuujsss_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1872);
    if ( (*(_DWORD *)(v2 + 32) & 0xD00) == 0x500 && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 148), 0) )
    {
      v3 = *(_QWORD *)(a1 + 1872);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v3 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v3 + 128) )
        {
          v4 = *(_QWORD *)(a1 + 1872);
          *(_QWORD *)(v4 + 128) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL);
        }
        v5 = *(_QWORD *)(a1 + 1872);
        if ( *(_QWORD *)(v5 + 128) )
        {
          if ( (byte_140173446 & 4) != 0 )
            McTemplateK0zjquuujsss_EtwWriteTransfer(
              a1 + 177,
              a1 + 168,
              a1 + 2104,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
              *(_QWORD *)(a1 + 24) + 5128LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              *(_BYTE *)(a1 + 106),
              a1 + 2104,
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242));
          RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v5 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
