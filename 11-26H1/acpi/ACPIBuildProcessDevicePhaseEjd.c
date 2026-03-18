/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x140034B80
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildDockExtension @ 0x1400579E0 (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // r8
  const char *v5; // rax
  const char *v6; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  const char *v11; // rax
  const char *v12; // rdx
  __int64 v13; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = (*(_BYTE *)(v1 + 8) & 2) != 0 ? 16 : 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs(a1 + 80, 1u);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v8 = (_QWORD *)qword_140090EE8;
    v9 = (_QWORD *)(v1 + 848);
    if ( *(__int64 **)qword_140090EE8 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 856) = qword_140090EE8;
    *v9 = &AcpiUnresolvedEjectList;
    *v8 = v9;
    qword_140090EE8 = v1 + 848;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v10 = *(_QWORD *)(v1 + 8);
      v11 = byte_140075A82;
      v12 = byte_140075A82;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(v1 + 608);
        if ( (v10 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = (__int64)v12;
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v12,
          6,
          38,
          (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
          v1,
          (__int64)v11,
          v13);
      }
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v3 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 760));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = byte_140075A82;
  v6 = byte_140075A82;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x27u,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v3,
      v1,
      v5,
      v6);
  ACPIBuildCompleteGeneric(0LL, v3, 0LL, a1);
  return v3;
}
