/*
 * XREFs of RaidUnitSendPowerToMiniport @ 0x140042800
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidUnitSendPowerToMiniport(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rax
  int v10; // edi
  _DWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+2Ch] [rbp-Ch]

  v4 = -1073741637;
  if ( !KsrPowerDownOptimizationEnabled )
    goto LABEL_2;
  v11 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( *v11 == 1431193940 )
  {
    if ( !StorKsrPowerDown )
    {
      v12 = v11[905];
      goto LABEL_11;
    }
  }
  else
  {
    if ( *v11 != 1094997074 )
      goto LABEL_2;
    if ( !StorKsrPowerDown )
    {
      v12 = v11[1551];
LABEL_11:
      if ( (v12 & 1) == 0 )
        goto LABEL_2;
    }
  }
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v13 + 32) == 5 && *(_DWORD *)(v13 + 24) == 4 && RaidIsUnitControlSupported(a1, 15) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 376LL, 15LL, 0LL);
LABEL_2:
  if ( RaidIsUnitControlSupported(a1, 3) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v15 = a1 + 96;
    v16 = *(_DWORD *)(v5 + 32);
    v6 = *(_DWORD *)(v5 + 24);
    v7 = *(_QWORD *)(a1 + 24);
    v17 = v6;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(v7 + 608) + 200LL);
    if ( v8 )
    {
      v10 = v8(*(_QWORD *)(v7 + 616) + 16LL, 3LL, &v15);
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v10 )
        {
          v14 = v10 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
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
        return v10 != 0 ? 0xC0000001 : 0;
      }
    }
  }
  return v4;
}
