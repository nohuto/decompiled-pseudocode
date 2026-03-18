/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x140027C50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // si
  unsigned int v4; // edi
  const char *v5; // rax
  const char *v6; // rcx
  __int64 v7; // rdx
  _UNKNOWN **v8; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 88) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v4 = 0;
  if ( (*(_BYTE *)(v1 + 1008) & 0x20) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 )
    {
      AMLIDereferenceHandleEx(v10);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v11 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1346716767);
    *(_QWORD *)(a1 + 56) = v11;
    if ( v11 )
    {
      v4 = AMLIAsyncEvalObject(v11, a1 + 88, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v5 = byte_140075A82;
  v6 = byte_140075A82;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v2 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      6,
      61,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v4,
      v2,
      (__int64)v5,
      (__int64)v6);
  }
  if ( v4 != 259 )
    ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
