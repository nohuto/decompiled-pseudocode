/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x140033520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x140033610 (StorPortUnitPowerRequiredStep1.c)
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  int v8; // edi
  int v9; // edi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v10[0] = 0x1800000001LL;
    v10[1] = a1 + 96;
    v10[2] = a2;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)(v5 + 608) + 200LL);
    if ( v6 )
    {
      v8 = v6(*(_QWORD *)(v5 + 616) + 16LL, 5LL, v10);
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              return (unsigned int)-1073741595;
          }
          else
          {
            return (unsigned int)-1073741823;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return v8 != 0 ? 0xC0000001 : 0;
      }
    }
  }
  return v4;
}
