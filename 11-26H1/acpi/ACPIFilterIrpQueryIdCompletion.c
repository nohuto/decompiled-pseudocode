/*
 * XREFs of ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSetFlags @ 0x14003BB9C (ACPIInternalSetFlags.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004F558 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x14006AB8C (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1400BBAEC (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIdCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  char v5; // bp
  unsigned __int8 v6; // r13
  __int64 v7; // rcx
  __int64 DeviceExtension; // rdi
  _WORD *v9; // rsi
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // eax
  int FailDeviceResetOnOpenHandles; // eax
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h] BYREF
  int v20; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v20 = 0;
  v19 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v6 = *(_BYTE *)(v2 + 1);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !DeviceExtension )
    goto LABEL_21;
  v9 = *(_WORD **)(a2 + 56);
  v10 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v10 == 5 )
  {
    v11 = ACPIBusAndFilterIrpQueryContainerId(&v18, &v19, DeviceExtension);
    v5 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)(a2 + 56) = v18;
      *(_DWORD *)(a2 + 48) = v11;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_22;
    }
  }
  if ( (AcpiOverrideAttributes & 0x100000) != 0 && (*(_DWORD *)(DeviceExtension + 1008) & 0x800000) == 0 && v10 - 1 <= 1 )
  {
    if ( v9 )
    {
      v12 = ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(v10, v9, &v20);
      v5 = v12;
      if ( v12 >= 0 && v20 == 2 )
        ACPIInternalSetFlags((void *)(DeviceExtension + 1008), 0x800000uLL);
    }
  }
  if ( (AcpiOverrideAttributes & 0x200000) == 0
    || (*(_DWORD *)(DeviceExtension + 1008) & 0x40000000) != 0
    || v10 - 1 > 1
    || !v9
    || (FailDeviceResetOnOpenHandles = ACPIEmQueryFailDeviceResetOnOpenHandles(v10, v9),
        v5 = FailDeviceResetOnOpenHandles,
        FailDeviceResetOnOpenHandles < 0)
    || v20 != 2 )
  {
LABEL_21:
    if ( !DeviceExtension )
      goto LABEL_23;
    goto LABEL_22;
  }
  ACPIInternalSetFlags((void *)(DeviceExtension + 1008), 0x40000000uLL);
LABEL_22:
  v3 = DeviceExtension;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      a2,
      IrpText,
      v5,
      v3,
      v16,
      v15);
  }
  return 0LL;
}
