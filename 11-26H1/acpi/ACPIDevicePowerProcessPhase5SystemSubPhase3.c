/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  int v4; // r14d
  __int64 *v5; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = *(unsigned int *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = byte_140075A82;
  v7 = 0;
  v8 = byte_140075A82;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v1 )
  {
    v12 = v1[1];
    v7 = (char)v1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[76];
      if ( (v12 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x56u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v7,
      v6,
      v8);
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_9;
  WORD1(v13) = 1;
  v9 = (__int64 *)AMLIGetParent(v1[95]);
  v5 = AMLIGetNamedChild(v9, 1398034527);
  AMLIDereferenceHandleEx((__int64)v9);
  if ( !v5 )
    goto LABEL_9;
  v10 = (unsigned int)v2 >= 7 ? 0xFFFFFFFFLL : AcpiSystemStateTranslation[v2];
  *(_QWORD *)&v14 = v10;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 1, (__int64)&v13, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v5);
  result = 259LL;
  v5 = 0LL;
  if ( v4 != 259 )
  {
LABEL_9:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
