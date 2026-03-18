/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1400345A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x140034A74 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     WPP_RECORDER_SF_DDqss @ 0x140044660 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r14d
  __int64 **v3; // rax
  int *v4; // r15
  const char *v5; // r12
  __int64 v6; // r13
  int v7; // edi
  __int64 v8; // rcx
  __int64 **v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  ULONG_PTR v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rcx
  const char *v16; // rax
  __int64 v18; // rax
  const char *v19; // r8
  const char *v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // [rsp+48h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 488) = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 861098079);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (__int64 **)(v1 + 416);
  v4 = (int *)(v1 + 516);
  v5 = byte_140075A82;
  v6 = 4LL;
  do
  {
    v7 = 1;
    v8 = 1LL;
    v9 = v3;
    while ( v8 <= 3 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        while ( *((_DWORD *)v10 + 4) >= v2 )
        {
          v10 = (__int64 *)*v10;
          if ( !v10 )
          {
            v18 = *(_QWORD *)(v1 + 8);
            v19 = byte_140075A82;
            v20 = byte_140075A82;
            if ( (v18 & 0x200000000000LL) != 0 )
            {
              v19 = *(const char **)(v1 + 608);
              if ( (v18 & 0x400000000000LL) != 0 )
                v20 = *(const char **)(v1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = (__int64)v20;
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_DDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v20,
                6,
                45,
                (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
                v7 - 1,
                v2 - 1,
                v1,
                (__int64)v19,
                v22);
            }
            *v4 = v7;
            goto LABEL_6;
          }
        }
      }
      ++v7;
      ++v8;
      ++v9;
    }
LABEL_6:
    ++v2;
    v3 = (__int64 **)(v1 + 416);
    ++v4;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(v1 + 540) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 536) + 508);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v11 = *(_QWORD *)(v1 + 8);
  v12 = 1;
  if ( (v11 & 0x80000000) != 0 )
  {
    v12 = 4;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v11 & 0x80000) != 0 )
      {
        dword_14008ED38 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
        *(_DWORD *)(v1 + 384) = 1;
      }
      else
      {
        if ( *(_WORD *)(a1 + 82) != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v13, *(unsigned __int16 *)(a1 + 82));
        v21 = *(_QWORD *)(a1 + 96);
        if ( v21 < 4 )
          v12 = DevicePowerStateTranslation[v21];
        else
          v12 = 0;
        dword_14008ED38 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
      }
    }
  }
  v14 = ACPIDeviceInternalDelayedDeviceRequest(v1, v12);
  v15 = *(_QWORD *)(v1 + 8);
  v16 = byte_140075A82;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Eu,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v14,
      v1,
      v5,
      v16);
  ACPIBuildCompleteGeneric(0LL, v14, 0LL, a1);
  return v14;
}
