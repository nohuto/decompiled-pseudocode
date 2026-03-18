/*
 * XREFs of ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     AcpiDiagTraceEpmInitialization @ 0x140056400 (AcpiDiagTraceEpmInitialization.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIPepCleanupEpmNotificationSupport @ 0x1400B4010 (ACPIPepCleanupEpmNotificationSupport.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

NTSTATUS __fastcall ACPIPepInitializeEpmNotificationSupport(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r14d
  PVOID v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r15d
  char i; // r11
  unsigned int v13; // eax
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rcx
  PVOID v17; // rdi
  __int64 v18; // rcx
  unsigned __int8 *v19; // rdx
  signed __int32 v21; // [rsp+38h] [rbp-49h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int128 v24; // [rsp+50h] [rbp-31h] BYREF
  __int128 v25; // [rsp+60h] [rbp-21h]
  __int128 v26; // [rsp+70h] [rbp-11h]
  __int64 v27[2]; // [rsp+88h] [rbp+7h] BYREF
  signed __int32 *v28; // [rsp+A8h] [rbp+27h]
  __int64 v29; // [rsp+B0h] [rbp+2Fh]

  v23 = 0LL;
  v2 = a1 + 160;
  AcpiGetDriverProxyWrappedEndpoint(&v23, (__int64)ACPIPepEffectivePowerModeCallback);
  *(_DWORD *)(v2 + 100) = -1;
  *(_DWORD *)(v2 + 104) = -1;
  *(_DWORD *)(v2 + 108) = -1;
  v3 = *(_QWORD *)(a1 + 760);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v21 = 0;
  P = 0LL;
  *(_OWORD *)v27 = PEP_NOTIFICATIONS_DSM_EPM_UUID;
  v6 = ACPIAmliEvaluateDsm(v3, (unsigned int)v27, 0, 0, (__int64)&v24, (__int64)&P);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_14008C310 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_14008C310,
        byte_14007D437,
        v4,
        v5,
        2u,
        (struct _EVENT_DATA_DESCRIPTOR *)v27);
    return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
  }
  v7 = P;
  if ( *((_WORD *)P + 1) == 3 )
  {
    v8 = *((_DWORD *)P + 6);
    if ( v8 )
    {
      v9 = 0LL;
      v10 = 0;
      v11 = 0;
      for ( i = 0; ; i += 8 )
      {
        v13 = 4;
        if ( v8 < 4 )
          v13 = v8;
        if ( (unsigned int)v9 >= v13 )
          break;
        v14 = v10;
        v15 = *(unsigned __int8 *)(v9 + *((_QWORD *)P + 4)) << i;
        if ( v8 >= 4 )
          v14 = v11;
        v9 = (unsigned int)(v9 + 1);
        v10 = v14 | v15;
        v21 = v10;
        v11 = v10;
      }
    }
  }
  AMLIFreeDataBuffs((__int64)P);
  ExFreePoolWithTag(v7, 0x52706341u);
  if ( !_bittest(&v21, 1u) || !_bittest(&v21, 2u) )
  {
    if ( (unsigned int)dword_14008C310 <= 5 )
      return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
    v19 = (unsigned __int8 *)&dword_14007D365;
    goto LABEL_26;
  }
  *(_BYTE *)(v2 + 97) = 1;
  v16 = *(_QWORD *)(a1 + 760);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  LODWORD(v24) = 1;
  WORD5(v24) = 1;
  LODWORD(v26) = 4;
  *(_OWORD *)v27 = PEP_NOTIFICATIONS_DSM_EPM_UUID;
  DWORD2(v25) = 2;
  P = 0LL;
  v6 = ACPIAmliEvaluateDsm(v16, (unsigned int)v27, 0, 1, (__int64)&v24, (__int64)&P);
  if ( v6 < 0 )
    return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
  v17 = P;
  if ( *((_WORD *)P + 1) == 1 )
    *(_DWORD *)(v2 + 100) = *((_DWORD *)P + 4);
  AMLIFreeDataBuffs((__int64)v17);
  ExFreePoolWithTag(v17, 0x52706341u);
  v18 = *(unsigned int *)(v2 + 100);
  if ( (unsigned int)(v18 - 1) > 1 )
  {
    *(_BYTE *)(v2 + 97) = 0;
    if ( (unsigned int)dword_14008C310 <= 5 )
      return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
    v21 = v18;
    v19 = (unsigned __int8 *)&unk_14007D3CE;
LABEL_26:
    v29 = 4LL;
    v28 = &v21;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14008C310, v19, v4, v5, 3u, (struct _EVENT_DATA_DESCRIPTOR *)v27);
    return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
  }
  v6 = PoRegisterForEffectivePowerModeNotifications(v18, v23, v2, v2 + 112, *(_QWORD *)(a1 + 768));
  if ( v6 < 0 )
  {
    *(_BYTE *)(v2 + 97) = 0;
    ACPIPepCleanupEpmNotificationSupport(a1);
    if ( (unsigned int)dword_14008C310 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_14008C310,
        byte_14007D308,
        v4,
        v5,
        2u,
        (struct _EVENT_DATA_DESCRIPTOR *)v27);
  }
  return AcpiDiagTraceEpmInitialization(a1, v6, v4, v5);
}
