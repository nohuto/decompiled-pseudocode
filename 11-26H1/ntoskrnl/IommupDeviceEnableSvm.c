/*
 * XREFs of IommupDeviceEnableSvm @ 0x14078537C
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 * Callees:
 *     HalpDmaGetIommuInterface @ 0x14057B358 (HalpDmaGetIommuInterface.c)
 *     Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline @ 0x140589DB4 (Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupDeviceGetAtsSettings @ 0x14058A420 (IommupDeviceGetAtsSettings.c)
 *     IommupDeviceGetPasidSettings @ 0x14058A55C (IommupDeviceGetPasidSettings.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 */

__int64 __fastcall IommupDeviceEnableSvm(__int64 a1, __int64 a2)
{
  int PasidSettings; // ebx
  char v5; // r15
  char v6; // si
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+70h] [rbp+40h] BYREF
  char v14; // [rsp+80h] [rbp+50h] BYREF
  char v15; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)(a1 + 265) = 0;
  v13 = 0;
  v15 = 0;
  v12[0] = 0;
  v14 = 0;
  PasidSettings = IommupDeviceGetPasidSettings(a2, &v15, &v13, v12);
  if ( PasidSettings < 0 )
    return (unsigned int)PasidSettings;
  v5 = v15;
  v6 = v13;
  if ( v15 )
  {
    if ( v13 )
      return (unsigned int)-1073741776;
  }
  else
  {
    v7 = 0;
    if ( !v13 )
      goto LABEL_7;
  }
  v7 = 1;
LABEL_7:
  PasidSettings = IommupDeviceGetAtsSettings(a2, &v14);
  if ( PasidSettings < 0 )
    return (unsigned int)PasidSettings;
  if ( v7 )
  {
    if ( v14 )
      return (unsigned int)-1073741637;
  }
  else if ( !v14 )
  {
    return (unsigned int)PasidSettings;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    return (unsigned int)-1073741637;
  PasidSettings = HalpDmaGetIommuInterface(v8, a1 + 272);
  if ( PasidSettings >= 0 && v7 )
  {
    *(_BYTE *)(a1 + 264) = v12[0];
    *(_BYTE *)(a1 + 265) = v5;
    *(_BYTE *)(a1 + 266) = 1;
    PasidSettings = IommupDeviceEnablePasidTaggedDma(a1, v6);
    if ( PasidSettings >= 0 )
    {
      if ( (unsigned int)Feature_IommuStage1FaultSuppresion__private_IsEnabledDeviceUsageNoInline()
        && *(_BYTE *)(a1 + 264)
        && *(_DWORD *)(a1 + 412) != 1 )
      {
        *(_DWORD *)(a1 + 412) = 2;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 280);
      *(_WORD *)(a1 + 265) = 0;
      *(_BYTE *)(a1 + 264) = 0;
      guard_dispatch_icall_no_overrides(v10, v9);
    }
  }
  return (unsigned int)PasidSettings;
}
