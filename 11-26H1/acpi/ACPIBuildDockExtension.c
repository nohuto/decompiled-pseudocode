/*
 * XREFs of ACPIBuildDockExtension @ 0x1400579E0
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildDockExtension(_QWORD *a1)
{
  PVOID v2; // rbp
  __int64 result; // rax
  __int64 v4; // rbx
  char *Pool2; // rax
  int v6; // edx
  const char *v7; // rsi
  char *v8; // r12
  int v9; // r14d
  __int64 v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rcx
  const char *v16; // rsi
  const char *v17; // rax
  PVOID v18; // [rsp+98h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v19);
  if ( (int)result >= 0 )
  {
    v4 = v19;
    if ( v19 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 21LL, 1399874369LL);
      v7 = byte_140075A82;
      v8 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0x15uLL, "ACPI\\DockDevice");
        *(_QWORD *)(v4 + 608) = v8;
        v9 = ACPIAmliBuildObjectPathname(a1, &v18, 0);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v4 + 616) = v18;
          *(_QWORD *)(v4 + 184) = *(_QWORD *)(*a1 + 104LL);
          *(_DWORD *)(v4 + 192) = 4;
          *(_DWORD *)(v4 + 200) = 0;
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x209E00000020008uLL);
          v15 = *(_QWORD *)(v4 + 8);
          v16 = byte_140075A82;
          v17 = byte_140075A82;
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v16 = *(const char **)(v4 + 608);
            if ( (v15 & 0x400000000000LL) != 0 )
              v17 = *(const char **)(v4 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
              v9,
              v4,
              v16,
              v17);
          return (unsigned int)v9;
        }
        v10 = *(_QWORD *)(v4 + 8);
        v11 = byte_140075A82;
        v12 = byte_140075A82;
        if ( (v10 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v4 + 608);
          if ( (v10 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v4 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0x53u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            v9,
            v4,
            v11,
            v12);
        v2 = v18;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            21,
            82,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            21);
        }
        v9 = -1073741670;
      }
      v13 = *(_QWORD *)(v4 + 8);
      v14 = byte_140075A82;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v7 = *(const char **)(v4 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
          v9,
          v4,
          v7,
          v14);
      if ( v2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v2, 0);
        *(_QWORD *)(v4 + 616) = 0LL;
      }
      if ( v8 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v4 + 608) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x2000000000000uLL);
      return (unsigned int)v9;
    }
  }
  return result;
}
