/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGetD3Policy @ 0x1400393C4 (ACPIGetD3Policy.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiCheckSecureDevice @ 0x1400C1820 (AcpiCheckSecureDevice.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  char v5; // di
  char v7; // r15
  __int64 DeviceExtension; // rax
  const char *v10; // rcx
  ULONG_PTR v11; // rsi
  __int64 *v12; // r15
  _DWORD *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // r14
  int DeviceCapabilities; // r14d
  const char *v17; // rbx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  char *IrpText; // rax
  const char *v24; // r8
  __int64 v25; // r10
  unsigned int v26; // edx
  unsigned __int16 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  const char *v30; // rdx
  __int64 v31; // rax
  bool v32; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int8 v33; // [rsp+61h] [rbp-48h]
  int v34; // [rsp+64h] [rbp-45h] BYREF
  __int64 v35; // [rsp+68h] [rbp-41h]
  __int64 v36; // [rsp+70h] [rbp-39h] BYREF
  __int128 *v37; // [rsp+78h] [rbp-31h] BYREF
  __int64 v38; // [rsp+80h] [rbp-29h] BYREF
  __int64 v39; // [rsp+88h] [rbp-21h] BYREF
  __int64 v40; // [rsp+90h] [rbp-19h] BYREF
  __int128 v41; // [rsp+98h] [rbp-11h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-1h] BYREF
  int v43; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v40 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v34 = 0;
  v7 = a2;
  v41 = 0LL;
  v37 = 0LL;
  v43 = 0;
  v33 = *(_BYTE *)(v4 + 1);
  v35 = a2;
  v32 = 0;
  v42 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v11 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v17 = byte_140075A82;
    DeviceCapabilities = -1073741823;
    goto LABEL_50;
  }
  v12 = *(__int64 **)(DeviceExtension + 760);
  if ( (*(_DWORD *)(DeviceExtension + 1008) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v32) >= 0 && v32 )
    *(_QWORD *)(v11 + 8) &= ~0x800uLL;
  v13 = *(_DWORD **)(v4 + 8);
  if ( !_bittest64((const signed __int64 *)(v11 + 8), 0x27u) )
  {
    v14 = AMLIGetNamedChild(v12, 1447907935);
    v15 = (__int64)v14;
    if ( v14 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
      {
        if ( (int)ACPIGet(v11, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL) < 0 )
          v13[1] |= 0x10u;
        else
          v13[1] = (v36 != 0 ? 0x10 : 0) | v13[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v15);
      }
      else
      {
        v13[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v12, 810173791) )
      {
        v28 = v13[1];
        if ( (v28 & 0x10) == 0 )
          v28 |= 0x40000u;
        v13[1] = v28 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v12, 826951007)
        || AMLIIsNamedChildPresent(v12, 843728223)
        || AMLIIsNamedChildPresent(v12, 860505439)
        || AMLIIsNamedChildPresent(v12, 877282655) )
      {
        v18 = v13[1];
        if ( (v18 & 0x10) == 0 )
          v18 |= 0x40000u;
        v13[1] = v18 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v12, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  DeviceCapabilities = ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v38, 0LL);
  if ( DeviceCapabilities < 0 )
    goto LABEL_30;
  *(_QWORD *)&v41 = v11;
  v37 = &v41;
  DWORD2(v41) = 8;
  if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v37, 1LL, &v34) >= 0 && v34 == 2 )
    goto LABEL_16;
  if ( _bittest64((const signed __int64 *)(v11 + 8), 0x36u) )
  {
    if ( !a4 )
    {
      v19 = v13[1];
      if ( (AcpiOverrideAttributes & 2) != 0 )
        v20 = v19 | 0x4000;
      else
        v20 = v19 & 0xFFFFBFFF;
      v13[1] = v20;
    }
  }
  else if ( !AMLIIsNamedChildPresent(v12, 1397900127) || AMLIIsNamedChildPresent(v12, 1397904223) )
  {
    if ( a4 )
LABEL_16:
      v13[1] &= ~0x4000u;
  }
  else
  {
    v13[1] |= 0x4000u;
  }
  if ( (v38 & 4) == 0 )
    v13[1] |= 0x20000u;
  if ( AMLIIsNamedChildPresent(v12, 1314214751)
    && (int)ACPIGet(v11, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL) >= 0 )
  {
    v13[3] = v39;
  }
  if ( AMLIIsNamedChildPresent(v12, 1380204895) )
  {
    DeviceCapabilities = ACPIGet(v11, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v40, 0LL);
    if ( DeviceCapabilities < 0 )
    {
      v29 = *(_QWORD *)(v11 + 8);
      v17 = byte_140075A82;
      v30 = byte_140075A82;
      v10 = byte_140075A82;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v30 = *(const char **)(v11 + 608);
        if ( (v29 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(v11 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v27 = 13;
LABEL_64:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        v27,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        DeviceCapabilities,
        v11,
        v30,
        v10);
      goto LABEL_49;
    }
    v13[2] = v40;
  }
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v11);
  if ( DeviceCapabilities < 0 )
  {
    v31 = *(_QWORD *)(v11 + 8);
    v17 = byte_140075A82;
    v30 = byte_140075A82;
    v10 = byte_140075A82;
    if ( (v31 & 0x200000000000LL) != 0 )
    {
      v30 = *(const char **)(v11 + 608);
      if ( (v31 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v11 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v27 = 14;
    goto LABEL_64;
  }
  if ( (unsigned __int8)AcpiCheckSecureDevice(v11) )
    v13[1] |= 0x100000u;
  if ( !a4 )
  {
    v13[1] |= 0x80u;
    v26 = v13[1] & 0xFFFFFEFF | (*(_DWORD *)(v11 + 8) >> 9) & 0x100;
    v13[1] = v26;
    v13[1] = v26 & 0xFFFFFFBF | (*(_QWORD *)(v11 + 616) != 0LL ? 0x40 : 0);
  }
  if ( (int)ACPIProcessPhysicalDeviceLocation(v11, &v42, 0LL) >= 0 && (v42 & 0x7F) != 0 )
  {
    if ( (BYTE8(v42) & 1) == 0 )
      v13[1] |= 0x40000u;
    if ( SDWORD2(v42) < 0 )
      v13[1] |= 0x40000u;
  }
  DeviceCapabilities = 0;
LABEL_30:
  v17 = byte_140075A82;
LABEL_49:
  v21 = *(_QWORD *)(v11 + 8);
  v7 = v35;
  v5 = v11;
  if ( (v21 & 0x200000000000LL) != 0 && (v21 & 0x400000000000LL) != 0 )
    v17 = *(const char **)(v11 + 616);
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText((__int64)v10, v33);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      v25,
      v7,
      IrpText,
      DeviceCapabilities,
      v5,
      v24,
      v17);
  }
  return (unsigned int)DeviceCapabilities;
}
