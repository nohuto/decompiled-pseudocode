/*
 * XREFs of NVMeHwUnitControl @ 0x140010210
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x1400121D8 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     NVMeLunCompleteAllIORequests @ 0x140018738 (NVMeLunCompleteAllIORequests.c)
 *     NVMeGetRichDeviceDescription @ 0x14001E830 (NVMeGetRichDeviceDescription.c)
 *     ProcessForwardIoControl @ 0x14002B318 (ProcessForwardIoControl.c)
 *     ProcessIrpCommand @ 0x14002B710 (ProcessIrpCommand.c)
 *     NVMeSendLunInternalData @ 0x14003102C (NVMeSendLunInternalData.c)
 *     memset @ 0x140032A40 (memset.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // eax
  BOOL v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx

  if ( a1 && (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 0LL;
  switch ( a2 )
  {
    case 0:
      v6 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
        *(_BYTE *)(a3 + 4) = 1;
      if ( v6 > 1 )
        *(_BYTE *)(a3 + 5) = 1;
      if ( v6 > 2 )
        *(_BYTE *)(a3 + 6) = 1;
      if ( v6 > 3 )
        *(_BYTE *)(a3 + 7) = 1;
      if ( v6 > 9 )
        *(_BYTE *)(a3 + 13) = 1;
      if ( v6 > 0xA )
        *(_BYTE *)(a3 + 14) = 1;
      if ( v6 > 0xB )
        *(_BYTE *)(a3 + 15) = 1;
      if ( v6 > 0xD )
        *(_BYTE *)(a3 + 17) = 1;
      if ( v6 > 0xE )
        *(_BYTE *)(a3 + 18) = 1;
      if ( v6 > 0x1E )
        *(_BYTE *)(a3 + 34) = 1;
      if ( v6 <= 0x1F )
      {
        if ( v6 <= 0x10 )
          return 0;
      }
      else
      {
        *(_BYTE *)(a3 + 35) = 1;
      }
      *(_BYTE *)(a3 + 20) = 1;
      return 0;
    case 1:
      if ( *(_DWORD *)(a3 + 8) == 2 )
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFBF | (*(_BYTE *)(a3 + 12) != 0 ? 0x40 : 0);
      return 0;
    case 2:
      v8 = *(unsigned __int8 *)(a3 + 10);
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 224) || !*(_QWORD *)(a1 + 8 * v8 + 1672) )
        goto LABEL_59;
      return 0;
    case 3:
      return 0;
    case 9:
      v9 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1672);
      if ( v9 )
        *(_DWORD *)(v9 + 20) |= 4u;
      return 0;
    case 10:
      v10 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1672);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 20) |= 4u;
        NVMeLunCompleteAllIORequests(a1, *(unsigned __int8 *)(a3 + 10));
        return 0;
      }
      else
      {
        return 0;
      }
    case 11:
      return NVMeGetRichDeviceDescription(a1, a3) != 0;
    case 13:
      v11 = *(_QWORD *)(a1 + 1560);
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
      {
        memset((void *)a3, 0, 0x98uLL);
        *(_DWORD *)a3 = 1;
        v7 = 0;
        *(_DWORD *)(a3 + 4) = 152;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v11 + 4);
        *(_DWORD *)(a3 + 32) = *(_DWORD *)(v11 + 20);
      }
      return v7;
    case 14:
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
        return (BOOL)NVMeSendLunInternalData(
                       a1,
                       *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a3 + 8) + 10LL) + 1672),
                       *(_QWORD *)(a3 + 24));
      return v7;
    case 16:
      if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_59;
      v7 = StorPortExtendedFunction(135LL, a1, *(unsigned int *)(a1 + 4336), *(unsigned int *)(a1 + 4340)) != 0;
      break;
    case 30:
      v7 = 1;
      if ( a3 && *(_QWORD *)a3 )
      {
        ProcessIrpCommand(a1, a3);
        return 0;
      }
      return v7;
    case 31:
      v7 = 1;
      if ( a3 && *(_DWORD *)a3 >= 0x38u && *(_DWORD *)(a3 + 4) >= 0x38u && *(int *)(a3 + 8) < 6 )
      {
        ProcessForwardIoControl(a1, a3);
        return 0;
      }
      return v7;
    default:
LABEL_59:
      v7 = 1;
      break;
  }
  return v7;
}
