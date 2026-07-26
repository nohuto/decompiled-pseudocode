/*
 * XREFs of NdisCmMakeCallComplete @ 0x1400D5250
 * Callers:
 *     NdisClMakeCall @ 0x1400D4D90 (NdisClMakeCall.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400782D0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1400D54D0 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmMakeCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  bool v9; // bp
  unsigned int *v10; // rsi
  __int64 v11; // r14
  KIRQL v12; // al
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // r8d
  KIRQL v16; // al
  _QWORD *v17; // rcx
  KIRQL v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edx

  v9 = 0;
  v10 = (unsigned int *)((char *)NdisVcHandle + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, *((_QWORD *)NdisVcHandle + 9), 10);
  v11 = *((_QWORD *)NdisVcHandle + 8);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v13 = *v10 & 0xFFFFFFEF;
  *v10 = v13;
  if ( Status )
    v9 = (v13 & 0x40) != 0;
  else
    *v10 = v13 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v12);
  if ( Status )
  {
    if ( !v9 )
    {
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
      ndisDereferenceAf((KSPIN_LOCK *)v11);
      if ( NdisPartyHandle )
      {
        ExFreePoolWithTag(NdisPartyHandle, 0);
        NdisPartyHandle = 0LL;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xBu,
        (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
        Status);
  }
  else
  {
    if ( NdisPartyHandle )
    {
      *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
      ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v14, v15);
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v11 + 368) + 232LL));
    v17 = (char *)NdisVcHandle + 32;
    v18 = v16;
    v19 = *((_QWORD *)NdisVcHandle + 4);
    if ( *(NDIS_HANDLE *)(v19 + 8) != (char *)NdisVcHandle + 32
      || (v20 = (_QWORD *)*((_QWORD *)NdisVcHandle + 5), (_QWORD *)*v20 != v17)
      || (*v20 = v19,
          *(_QWORD *)(v19 + 8) = v20,
          v21 = *(_QWORD *)(v11 + 368) + 1104LL,
          v22 = *(_QWORD *)v21,
          *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21) )
    {
      __fastfail(3u);
    }
    *v17 = v22;
    *((_QWORD *)NdisVcHandle + 5) = v21;
    *(_QWORD *)(v22 + 8) = v17;
    *(_QWORD *)v21 = v17;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v11 + 368) + 232LL), v18);
  }
  v23 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v11 + 280))(
      (unsigned int)Status,
      v23,
      NdisPartyHandle,
      CallParameters);
  else
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v11 + 128))(
      (unsigned int)Status,
      v23,
      NdisPartyHandle,
      CallParameters);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      19,
      12,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids);
  }
}
