/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1400C5BD8
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400CDB30 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     AcpiCheckExternalConnection @ 0x1400CC62C (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // r14
  char *v10; // rax
  const char *v11; // r8
  const char *v12; // r10
  int v14; // edi
  char *v15; // rax
  const char *v16; // r8
  const char *v17; // r10
  char *IrpText; // rax
  const char *v19; // r8
  const char *v20; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_BYTE *)(v7 + 1);
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    AcpiCheckExternalConnection();
    v14 = ACPIDetectPdoDevices(a1, a3);
    if ( v14 >= 0 )
    {
      v14 = ACPIDetectDockDevices(v8, a3);
      if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0xEu,
          (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
          a2,
          IrpText,
          v14,
          v8,
          v19,
          v20);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xDu,
        (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
        a2,
        v15,
        v14,
        v8,
        v16,
        v17);
    }
    return (unsigned int)v14;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = ACPIDebugGetIrpText(*(_QWORD *)(DeviceExtension + 8), *(_BYTE *)(v7 + 1));
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xCu,
        (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
        a2,
        v10,
        0,
        v8,
        v11,
        v12);
    }
    return 3221225485LL;
  }
}
