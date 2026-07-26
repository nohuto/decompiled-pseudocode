/*
 * XREFs of NdisCmCloseCallComplete @ 0x1400D4F30
 * Callers:
 *     NdisClCloseCall @ 0x1400D4B00 (NdisClCloseCall.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1400D54D0 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  unsigned int *v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // r14d
  KIRQL v9; // r8
  __int64 v10; // rax
  __int64 v11; // r12
  KSPIN_LOCK *v12; // rcx
  void (__fastcall *v13)(_QWORD, __int64, __int64); // r13
  int v14; // edx
  __int64 v15; // [rsp+98h] [rbp+10h]

  v6 = (unsigned int *)((char *)NdisVcHandle + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, (_DWORD)NdisPartyHandle, 15);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v8 = *v6;
  v9 = v7;
  v10 = *((_QWORD *)NdisVcHandle + 3);
  *v6 &= 0xFFFFFF9F;
  v15 = v10;
  if ( NdisPartyHandle )
    v11 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v11 = 0LL;
  v12 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  v13 = *(void (__fastcall **)(_QWORD, __int64, __int64))((-(__int64)(*(_DWORD *)(*((_QWORD *)NdisVcHandle + 8) + 396LL) < 6u) & 0xFFFFFFFFFFFFFF68uLL)
                                                        + *((_QWORD *)NdisVcHandle + 8)
                                                        + 296);
  if ( Status )
  {
    KeReleaseSpinLock(v12, v9);
  }
  else
  {
    *v6 = v8 & 0xFFFFFF97;
    KeReleaseSpinLock(v12, v9);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisVcHandle + 8));
    if ( (v8 & 8) != 0 )
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  }
  ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  v13((unsigned int)Status, v15, v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      19,
      16,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
      (char)NdisVcHandle);
  }
}
