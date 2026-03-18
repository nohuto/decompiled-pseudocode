/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1400355E0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // r8
  const char *v7; // rax
  const char *v8; // rcx
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)(a1 + 80) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 1008) & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      AMLIDereferenceHandleEx(v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1346716767);
    *(_QWORD *)(a1 + 56) = v5;
    if ( v5 )
      v2 = AMLIAsyncEvalObject(v5, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
  }
  v6 = 0;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    v6 = v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Fu,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v2,
      v6,
      v7,
      v8);
  if ( v2 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v2, 0LL, a1);
  return v2;
}
