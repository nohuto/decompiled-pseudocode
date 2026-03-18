/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x140027750
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x140038FA8 (WPP_RECORDER_SF_qLdqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v4; // ebp
  __int64 *v5; // r14
  __int64 v6; // rdx
  const char *v7; // r8
  __int64 result; // rax
  int v9; // r8d
  const char *v10; // rdx
  __int64 v11; // r9

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(int *)(a1 + 104);
  v4 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  v5 = *(__int64 **)(v1 + 8 * v2 + 456);
  if ( !v5 )
  {
    v9 = 0;
    v10 = byte_140075A82;
    if ( v1 )
    {
      v11 = *(_QWORD *)(v1 + 8);
      v9 = v1;
      if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v10, v9, 58);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  v7 = byte_140075A82;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    if ( (v6 & 0x200000000000LL) != 0 && (v6 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, v6, (_DWORD)v7, 57);
  result = 259LL;
  if ( v4 != 259 )
  {
LABEL_12:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
