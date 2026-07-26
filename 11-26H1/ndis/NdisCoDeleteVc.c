/*
 * XREFs of NdisCoDeleteVc @ 0x1400D68B0
 * Callers:
 *     NdisMCmDeleteVc @ 0x1400D7270 (NdisMCmDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140058560 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLLqL @ 0x1400D7608 (WPP_RECORDER_SF_qLLqL.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r13
  NDIS_STATUS v5; // edi
  char *v6; // rsi
  __int64 v7; // rcx
  NTSTATUS v8; // ebp
  char *v9; // r15
  NDIS_HANDLE *v10; // rdx
  NDIS_HANDLE *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  void (__fastcall *v13)(_QWORD); // rax
  NDIS_HANDLE *v14; // rdx
  NDIS_HANDLE *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  NDIS_HANDLE *v18; // rdx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // [rsp+28h] [rbp-50h]
  PVOID WnodeEventItem; // [rsp+80h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v23) = HIDWORD(NdisVcHandle);
    WPP_RECORDER_SF_qLLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), **((_DWORD **)NdisVcHandle + 1));
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v3 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  v4 = v2;
  if ( (*v3 & 3) != 0 )
  {
    v5 = 65539;
    goto LABEL_30;
  }
  if ( (*v3 & 4) != 0 )
  {
    v5 = -1073676286;
    goto LABEL_30;
  }
  *((_DWORD *)NdisVcHandle + 1) |= 0x80000000;
  if ( *((_DWORD *)NdisVcHandle + 22) && *((_QWORD *)NdisVcHandle + 27) )
    *v3 |= 8u;
  if ( *((_QWORD *)NdisVcHandle + 38) )
  {
    WnodeEventItem = 0LL;
    ndisSetupWmiNode(
      *((struct _NDIS_MINIPORT_BLOCK **)NdisVcHandle + 24),
      (const struct _UNICODE_STRING *)((char *)NdisVcHandle + 296),
      0,
      (__int128 *)&GUID_NDIS_NOTIFY_VC_REMOVAL,
      (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
    v6 = (char *)NdisVcHandle + 192;
    if ( WnodeEventItem )
    {
      v8 = IoWMIWriteEvent(WnodeEventItem);
      if ( v8 < 0 )
      {
        v9 = (char *)NdisVcHandle + 192;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = v8;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x12u,
            0x14u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
            v23);
          v9 = (char *)NdisVcHandle + 192;
        }
        if ( (byte_14011D041 & 0x10) != 0 )
        {
          McTemplateK0qqq_EtwWriteTransfer(
            v7,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4008LL),
            v8,
            1,
            0);
          v6 = v9;
        }
        ExFreePoolWithTag(WnodeEventItem, 0);
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)v6 + 1344LL));
    v10 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v10[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v11 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v11 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v11 = v10;
    v10[1] = v11;
    --*(_WORD *)(*(_QWORD *)v6 + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v12 = (KSPIN_LOCK *)(*(_QWORD *)v6 + 1344LL);
    *((_QWORD *)NdisVcHandle + 38) = 0LL;
    *((_DWORD *)NdisVcHandle + 74) = 0;
    KeReleaseSpinLockFromDpcLevel(v12);
  }
  v13 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v13 )
    v13(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v14 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v14[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v15 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v15 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v15 = v14;
  v14[1] = v15;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v16 = *((_QWORD *)NdisVcHandle + 17);
  if ( v16 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 232));
    v17 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v17[1] == (char *)NdisVcHandle + 152 )
    {
      v18 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v18 == (char *)NdisVcHandle + 152 )
      {
        *v18 = v17;
        v17[1] = v18;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 17) + 232LL));
        goto LABEL_29;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
LABEL_29:
  v5 = 0;
LABEL_30:
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v4);
  if ( !v5 )
    ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v19, v20, v21);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v5;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x15u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v23);
  }
  return v5;
}
