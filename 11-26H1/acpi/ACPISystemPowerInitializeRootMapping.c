/*
 * XREFs of ACPISystemPowerInitializeRootMapping @ 0x14004EBB0
 * Callers:
 *     ACPIRootIrpQueryCapabilities @ 0x1400BA050 (ACPIRootIrpQueryCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1400BA7F0 (ACPISystemPowerProcessRootMapping.c)
 *     ACPISystemPowerProcessSxD @ 0x1400BA8F4 (ACPISystemPowerProcessSxD.c)
 */

__int64 __fastcall ACPISystemPowerInitializeRootMapping(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  _DWORD *v7; // rax
  int v8; // ecx
  int v9; // edi
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  const char *v17; // rcx
  const char *v18; // rdx
  KIRQL v19; // al
  int v20; // edx
  __int64 v21; // xmm1_8
  char v22[8]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]

  v22[0] = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0x400000000000000LL) != 0 || (v4 = *(_DWORD *)(a1 + 368), v4 != 2) && v4 != 3 )
  {
LABEL_24:
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 508);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 524);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 532);
    return 0LL;
  }
  v5 = 5LL;
  v6 = *(_OWORD *)(a1 + 508);
  v25 = *(_DWORD *)(a1 + 532);
  v7 = (_DWORD *)&v23 + 2;
  v24 = *(_QWORD *)(a1 + 524);
  v23 = v6;
  DWORD1(v23) = 1;
  do
  {
    v8 = *(_DWORD *)((char *)v7 + a2 - ((_QWORD)&v23 + 8) + 24);
    if ( v8 )
      *v7 = v8;
    ++v7;
    --v5;
  }
  while ( v5 );
  v9 = ACPISystemPowerProcessSxD(a1, &v23, v22);
  if ( v9 >= 0 )
  {
    v14 = v25;
    if ( !v25 )
      v14 = 4;
    v25 = v14;
    v15 = ACPISystemPowerProcessRootMapping(a1, &v23);
    if ( v15 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x400000000000000uLL);
      v19 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v20 = v25;
      v21 = v24;
      *(_OWORD *)(a1 + 508) = v23;
      *(_QWORD *)(a1 + 524) = v21;
      *(_DWORD *)(a1 + 532) = v20;
      KeReleaseSpinLock(&AcpiPowerLock, v19);
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = byte_140075A82;
      v18 = byte_140075A82;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(const char **)(a1 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0xFu,
          (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
          v15,
          a1,
          v17,
          v18);
    }
    goto LABEL_24;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = byte_140075A82;
  v12 = byte_140075A82;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(a1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0xEu,
      (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
      v9,
      a1,
      v11,
      v12);
  return (unsigned int)v9;
}
