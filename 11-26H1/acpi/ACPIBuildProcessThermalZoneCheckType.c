/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x140052970 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  ULONG_PTR v4; // rbp
  __int64 v5; // rcx
  const char **v6; // r15
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rcx
  const char *v10; // r8
  const char *v11; // rdx
  unsigned int v12; // ebx
  __int64 *v13; // rbx
  char v14; // bl
  char *Pool2; // rax
  __int64 v16; // rax
  const char *v17; // rdx
  const char *v18; // rcx
  unsigned __int16 v19; // r9
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  const char *v26; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_140075A82;
  v4 = 0LL;
  v5 = *(_QWORD *)(v1 + 1008);
  v6 = (const char **)(v1 + 608);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && (v5 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v7 = ACPIVerifyAndCopyFirmwareDependencies(*(__int64 **)(v1 + 760), a1 + 80, (__int64 *)(v1 + 648));
    dword_14008ED38 = 0;
    pszDest = 0;
    v8 = v7;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v8 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
      *(_DWORD *)(a1 + 20) |= 0x20u;
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = byte_140075A82;
      v11 = byte_140075A82;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *v6;
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x4Cu,
          (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
          v8,
          v1,
          v10,
          v11);
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildThermalZoneList);
  }
  v13 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145653343);
  if ( v13 )
  {
    v22 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145656671);
    v23 = *(_QWORD *)(a1 + 56);
    v4 = (ULONG_PTR)v22;
    if ( v22 )
    {
      *(_DWORD *)(a1 + 32) = 6;
      if ( v23 )
        AMLIDereferenceHandleEx(v23);
      *(_QWORD *)(a1 + 56) = v4;
      AMLIReferenceHandleEx(v4);
      v24 = ACPIGet(v1, 1145656671, 671613062, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 616, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 7;
      if ( v23 )
        AMLIDereferenceHandleEx(v23);
      *(_QWORD *)(a1 + 56) = v13;
      AMLIReferenceHandleEx((__int64)v13);
      v4 = (ULONG_PTR)v13;
      v24 = ACPIGet(v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
    }
    v12 = v24;
    goto LABEL_38;
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x20000uLL);
  v14 = 17;
  Pool2 = (char *)ExAllocatePool2(64LL, 17LL, 1399874369LL);
  *v6 = Pool2;
  if ( !Pool2 )
  {
    v16 = *(_QWORD *)(v1 + 8);
    v17 = byte_140075A82;
    v18 = byte_140075A82;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v17 = 0LL;
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v19 = 77;
LABEL_21:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      v19,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v14,
      v1,
      v17,
      v18);
LABEL_22:
    v12 = -1073741670;
    goto LABEL_38;
  }
  v14 = 5;
  strcpy(Pool2, "ACPI\\ThermalZone");
  v20 = (_DWORD *)ExAllocatePool2(64LL, 5LL, 1399874369LL);
  *(_QWORD *)(v1 + 616) = v20;
  if ( !v20 )
  {
    v21 = *(_QWORD *)(v1 + 8);
    v17 = byte_140075A82;
    v18 = byte_140075A82;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v17 = *v6;
      if ( (v21 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v19 = 78;
    goto LABEL_21;
  }
  *v20 = *(_DWORD *)(**(_QWORD **)(v1 + 760) + 40LL);
  *(_BYTE *)(*(_QWORD *)(v1 + 616) + 4LL) = 0;
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x1E00000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v12 = 0;
LABEL_38:
  v25 = *(_QWORD *)(v1 + 8);
  v26 = byte_140075A82;
  if ( (v25 & 0x200000000000LL) != 0 )
  {
    v2 = *v6;
    if ( (v25 & 0x400000000000LL) != 0 )
      v26 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x4Fu,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v12,
      v1,
      v2,
      v26);
  if ( v12 == 259 )
    v12 = 0;
  else
    ACPIBuildCompleteMustSucceed(v4, v12, 0LL, a1);
  if ( v4 )
    AMLIDereferenceHandleEx(v4);
  return v12;
}
