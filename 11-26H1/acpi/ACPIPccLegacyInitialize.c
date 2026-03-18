/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1400B2490
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIAmliEvaluatePcch @ 0x1400ACDE4 (ACPIAmliEvaluatePcch.c)
 *     AcpiPccInitTypeLegacySubspace @ 0x1400B2738 (AcpiPccInitTypeLegacySubspace.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rdi
  int v2; // r8d
  int inited; // edi
  __int64 v4; // rcx
  __int64 Pool2; // rax
  int v6; // edx
  __int64 v7; // rbx
  __int64 v9; // rcx
  int v10[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[44]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-4h]
  int v13; // [rsp+90h] [rbp+20h] BYREF
  int v14; // [rsp+94h] [rbp+24h]
  int v15; // [rsp+98h] [rbp+28h] BYREF
  int v16; // [rsp+9Ch] [rbp+2Ch]

  v14 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v13 = 1;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v13);
  if ( v13 == 2 )
    return (unsigned int)-1073741823;
  v15 = 0;
  v16 = 1;
  v4 = *(_QWORD *)(v1 + 760);
  *(_OWORD *)v10 = SB_OSC_PCC_UUID;
  ACPIAmliEvaluateOsc(v4, (int)v10, v2, 2, &v15);
  Pool2 = ExAllocatePool2(64LL, 824LL, 1299211073LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        21,
        10,
        (__int64)&WPP_cc72d47764df3397336cff0a641bfca0_Traceguids);
    }
    return (unsigned int)inited;
  }
  *(_BYTE *)Pool2 = -1;
  *(_DWORD *)(Pool2 + 4) = -1;
  inited = ACPIAmliEvaluatePcch(
             *(__int64 **)(v1 + 760),
             (__int64)v11,
             Pool2 + 104,
             (_QWORD *)(Pool2 + 88),
             (_QWORD *)(Pool2 + 80));
  if ( inited < 0 )
  {
    *(_DWORD *)(v7 + 816) = 9;
LABEL_8:
    ExFreePoolWithTag((PVOID)v7, 0x4D706341u);
    return (unsigned int)inited;
  }
  if ( v11[3] || (v11[4] & 4) == 0 || (v11[4] & 8) == 0 || (v11[5] & 1) == 0 )
  {
    *(_DWORD *)(v7 + 816) = 2;
    inited = -1073741823;
    goto LABEL_8;
  }
  *(_DWORD *)(v7 + 128) = *(_DWORD *)&v11[38];
  *(_QWORD *)(v7 + 120) = *(_QWORD *)&v11[14];
  inited = AcpiPccInitTypeLegacySubspace((PVOID)v7);
  if ( inited < 0 )
    goto LABEL_8;
  v9 = *(_QWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 48) = *(_DWORD *)(v7 + 128);
  *(_QWORD *)(v7 + 40) = v9;
  *(_QWORD *)(v7 + 64) = v9 + 12;
  *(_QWORD *)(v7 + 72) = v9 + 14;
  *(_DWORD *)(v7 + 8) = *(_DWORD *)(v7 + 8) & 0xFFFFFFE1 | 4;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
    *(_DWORD *)(v7 + 12) = 1;
  *(_DWORD *)(v7 + 16) = 1;
  AcpiPccLegacySubspace = v7;
  return (unsigned int)inited;
}
