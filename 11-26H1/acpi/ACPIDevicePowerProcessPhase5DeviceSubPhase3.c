/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  unsigned int v3; // esi
  __int64 *v4; // r15
  __int64 v5; // r8
  const char *v7; // rdx
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // ebp
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_140075A82;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (__int64)v7;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      79,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v5,
      v17,
      (__int64)v8);
  }
  v10 = *(_DWORD *)(a1 + 56);
  v11 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v11 = 6;
  *(_DWORD *)(a1 + 212) = v11;
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u) )
    goto LABEL_12;
  v4 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1262701663LL, v5);
  if ( !v4 )
  {
    if ( (v10 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0x80uLL);
    }
    else if ( (v10 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_12;
  }
  WORD1(v18) = 1;
  if ( (v10 & 4) != 0 )
  {
    v13 = 1LL;
  }
  else
  {
    if ( (v10 & 8) == 0 )
    {
LABEL_12:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v13 = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v19 = v13;
  if ( v13 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v14 + 1008), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 1008), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1, (__int64)&v18, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v4);
  v15 = *(_QWORD *)(v1 + 8);
  v4 = 0LL;
  v16 = byte_140075A82;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x50u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v3,
      v1,
      v2,
      v16);
  if ( v3 != 259 )
    goto LABEL_12;
  return 0LL;
}
