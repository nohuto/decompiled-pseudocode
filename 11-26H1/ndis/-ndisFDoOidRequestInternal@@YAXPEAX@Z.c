/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x140023710 (WPP_RECORDER_SF_Dqqd.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140023BB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140023DF0 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140056520 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401560A0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015CEB0 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  KSPIN_LOCK *p_Lock; // r15
  KSPIN_LOCK *v3; // r12
  __int64 *v4; // r14
  int v5; // edx
  struct _NDIS_FILTER_BLOCK *v6; // rcx
  KIRQL v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  _NDIS_OID_REQUEST *v10; // r13
  bool v11; // zf
  unsigned int v12; // r8d
  unsigned int v13; // eax
  char *Miniport; // rcx
  NDIS_OID Oid; // r10d
  unsigned int v16; // r9d
  int v17; // edx
  __int64 (__fastcall *v18)(__int128 *); // rax
  char v19; // bl
  unsigned __int8 v20; // al
  KIRQL v21; // r8
  unsigned __int8 v22; // si
  unsigned int v23; // eax
  KIRQL v24; // al
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbx
  NDIS_OID v26; // r15d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r14d
  _NDIS_OID_REQUEST *v30; // rsi
  PVOID v31; // rdx
  _NDIS_OID_REQUEST *v32; // rdx
  KSPIN_LOCK *p_Type; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  KSPIN_LOCK v36; // r15
  KIRQL v37; // al
  __int64 v38; // rbx
  NDISWATCHDOG__ *m_ptr; // rbx
  KIRQL v40; // al
  int v41; // [rsp+28h] [rbp-39h]
  __int128 v42; // [rsp+58h] [rbp-9h] BYREF
  __int128 v43; // [rsp+68h] [rbp+7h]
  __int128 v44; // [rsp+78h] [rbp+17h]
  _NDIS_OID_REQUEST *v45; // [rsp+C8h] [rbp+67h]
  PVOID P; // [rsp+D0h] [rbp+6Fh] BYREF

  p_Lock = &Parameter->Lock;
  v3 = 0LL;
LABEL_2:
  while ( 1 )
  {
    v4 = 0LL;
    KeAcquireSpinLockRaiseToDpc(p_Lock);
    Parameter->LockThread = KeGetCurrentThread();
    if ( !FILTER_TEST_FLAG(Parameter, 0x800u) )
      break;
LABEL_7:
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v7);
    if ( !v4 )
      return;
    v10 = (_NDIS_OID_REQUEST *)(v4 - 9);
    *((_DWORD *)v4 + 4) &= ~4u;
    v11 = Parameter->Header.Type == 17;
    v12 = 0;
    v45 = (_NDIS_OID_REQUEST *)(v4 - 9);
    v13 = 73;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( v11 )
      Miniport = (char *)Parameter;
    else
      Miniport = (char *)Parameter->Miniport;
    if ( !v10->PortNumber || (*((_DWORD *)Miniport + 468) & 0x200) == 0 )
    {
      Oid = v10->DATA.QUERY_INFORMATION.Oid;
      v16 = 146;
      while ( v13 <= v16 && v13 >= v12 )
      {
        if ( *((_DWORD *)&unk_1400F4080 + 6 * v13) > Oid )
        {
          if ( !v13 )
            break;
          v16 = v13 - 1;
          v13 = v12 + ((v13 - v12) >> 1);
        }
        else
        {
          if ( *((_DWORD *)&unk_1400F4080 + 6 * v13) == Oid )
          {
            *((_DWORD *)v4 + 5) = v13;
            v17 = *((_DWORD *)v4 + 4);
            *(_QWORD *)&v43 = Parameter;
            *((_DWORD *)v4 + 4) = v17 | 4;
            *(_QWORD *)&v42 = 0LL;
            *(_QWORD *)&v44 = v4 - 9;
            if ( (v17 & 0x220) != 0 )
              *((_QWORD *)&v43 + 1) = v4[4];
            else
              *((_QWORD *)&v43 + 1) = 0LL;
            if ( (v17 & 0x40) != 0 )
              *((_QWORD *)&v42 + 1) = v4[4];
            else
              *((_QWORD *)&v42 + 1) = 0LL;
            DWORD2(v44) = 0;
            if ( (v17 & 0x840080) != 0 )
              break;
            v18 = (__int64 (__fastcall *)(__int128 *))*(&funcs_140024A90 + 3 * v13);
            if ( !v18 )
              break;
            v19 = v18(&v42);
            if ( v19 != 1 )
              goto LABEL_26;
            HIDWORD(v44) |= 4u;
            ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v42);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v34, v35, 0x15u, v41);
            goto LABEL_2;
          }
          v12 = v13 + 1;
          v13 += 1 + ((v16 - v13) >> 1);
        }
      }
    }
    v19 = 0;
LABEL_26:
    KeAcquireSpinLockRaiseToDpc(p_Lock);
    Parameter->LockThread = KeGetCurrentThread();
    v20 = FILTER_TEST_FLAG(Parameter, 0x10000u);
    Parameter->LockThread = 0LL;
    v22 = v20;
    if ( v20 )
      v19 = 1;
    KeReleaseSpinLock(p_Lock, v21);
    if ( v19 == 1 )
    {
      v42 = 0uLL;
      v23 = -1073676286;
      *((_QWORD *)&v43 + 1) = 0LL;
      if ( !v22 )
        v23 = -1073741823;
      *((_QWORD *)&v44 + 1) = v23;
      *(_QWORD *)&v44 = v4 - 9;
      *(_QWORD *)&v43 = Parameter;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v42);
    }
    else
    {
      *((_DWORD *)v4 + 4) |= 0x20000u;
      v24 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      Parameter->PendingOidRequest = v10;
      Parameter->LockThread = 0LL;
      KeReleaseSpinLock(p_Lock, v24);
      ndisDrainWatchdog(Parameter->PendingOidWatchdog.m_ptr);
      ndisArmWatchdog(
        Parameter->PendingOidWatchdog.m_ptr,
        Parameter,
        0x24u,
        Parameter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler,
        ndisWatchdogOidTimeout,
        v10->DATA.QUERY_INFORMATION.Oid);
      FilterDriver = Parameter->FilterDriver;
      v26 = v10->DATA.QUERY_INFORMATION.Oid;
      P = 0LL;
      v29 = ndisOidCloneForCompatibility(
              &Parameter->Header,
              (struct _NDIS_OID_REQUEST *)(v4 - 9),
              1,
              (struct _NDIS_OID_REQUEST **)&P);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v28,
          0x75u,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)Parameter,
          v26);
      v30 = (_NDIS_OID_REQUEST *)P;
      if ( !v29 )
      {
        v31 = v10;
        if ( P )
          v31 = P;
        ndisAzTelemetryOidDelivered<_NDIS_FILTER_BLOCK>((__int64)Parameter, (__int64)v31);
        v32 = v10;
        if ( v30 )
          v32 = v30;
        v29 = FilterDriver->DefaultFilterCharacteristics.OidRequestHandler(Parameter->FilterModuleContext, v32);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          v28,
          0x76u,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)Parameter,
          v26,
          (char)v10);
      p_Lock = &Parameter->Lock;
      if ( v29 != 259 )
      {
        if ( !v30 )
          goto LABEL_69;
        p_Type = 0LL;
        if ( Parameter->Header.Type == 5 )
          p_Type = (KSPIN_LOCK *)&Parameter->Header.Type;
        else
          v3 = (KSPIN_LOCK *)&Parameter->Header.Type;
        v36 = *(_QWORD *)&v30->NdisReserved[24];
        if ( !v36 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v27,
              11,
              16,
              (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
          }
          v3 = 0LL;
          goto LABEL_68;
        }
        *(_QWORD *)&v30->NdisReserved[24] = 0LL;
        if ( v30->RequestType == NdisRequestMethod )
        {
          *(_DWORD *)(v36 + 60) = v30->DATA.METHOD_INFORMATION.BytesWritten;
          *(_DWORD *)(v36 + 64) = v30->DATA.METHOD_INFORMATION.BytesRead;
          *(_DWORD *)(v36 + 68) = v30->DATA.METHOD_INFORMATION.BytesNeeded;
          *(_QWORD *)(v36 + 40) = v30->DATA.QUERY_INFORMATION.InformationBuffer;
          *(_DWORD *)(v36 + 48) = v30->DATA.QUERY_INFORMATION.InformationBufferLength;
          *(_DWORD *)(v36 + 52) = v30->DATA.QUERY_INFORMATION.BytesWritten;
        }
        else
        {
          *(_DWORD *)(v36 + 52) = v30->DATA.QUERY_INFORMATION.BytesWritten;
          *(_DWORD *)(v36 + 56) = v30->DATA.QUERY_INFORMATION.BytesNeeded;
          *(_QWORD *)(v36 + 40) = v30->DATA.QUERY_INFORMATION.InformationBuffer;
          *(_DWORD *)(v36 + 48) = v30->DATA.QUERY_INFORMATION.InformationBufferLength;
        }
        if ( (*(_DWORD *)(v36 + 88) & 0x400) != 0 )
          goto LABEL_75;
        if ( !p_Type )
        {
          v40 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
          v3[276] = v36;
          v3[65] = 0LL;
          KeReleaseSpinLock(v3 + 12, v40);
LABEL_75:
          v3 = 0LL;
          goto LABEL_63;
        }
        v37 = KeAcquireSpinLockRaiseToDpc(p_Type + 18);
        v3 = 0LL;
        p_Type[22] = v36;
        p_Type[19] = 0LL;
        KeReleaseSpinLock(p_Type + 18, v37);
LABEL_63:
        v38 = *(_QWORD *)&v30->NdisReserved[24];
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0xDu,
            (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
            (char)v30);
        if ( v38 )
        {
          *(_BYTE *)(v38 + 232) = v30->SupportedRevision;
          *(_DWORD *)(v38 + 152) = *(_DWORD *)&v30->NdisReserved[80];
        }
        ExFreePoolWithTag(v30, 0);
LABEL_68:
        v10 = v45;
LABEL_69:
        m_ptr = Parameter->PendingOidWatchdog.m_ptr;
        if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
        {
          if ( KeCancelTimer((PKTIMER)m_ptr + 1) )
          {
            KeSetEvent((PRKEVENT)m_ptr + 7, 0, 0);
            *((_DWORD *)m_ptr + 40) = 0;
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)m_ptr + 40, 0);
          }
        }
        v42 = 0uLL;
        *(_QWORD *)&v44 = v10;
        v43 = (unsigned __int64)Parameter;
        *((_QWORD *)&v44 + 1) = v29;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v42);
        p_Lock = &Parameter->Lock;
      }
    }
  }
  if ( Parameter->OidRequestList.Flink != &Parameter->OidRequestList )
  {
    FILTER_SET_FLAG(v6, v5);
    v4 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || (v9 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v8 = v9;
    *(_QWORD *)(v9 + 8) = v8;
    goto LABEL_7;
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v7);
}
