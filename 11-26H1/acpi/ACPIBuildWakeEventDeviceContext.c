/*
 * XREFs of ACPIBuildWakeEventDeviceContext @ 0x140059AB8
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_sqss @ 0x140040DCC (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_sLqss @ 0x14005A398 (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildWakeEventDeviceContext(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rdi
  char v4; // dl
  const char *v6; // rax
  const char *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v10; // r14
  int v11; // eax
  int v12; // edx
  unsigned int v13; // r10d
  const char *v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  const char *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-38h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  v4 = 0;
  if ( *(_DWORD *)v2 >= 2u )
  {
    v10 = BugCheckParameter2 + 968;
    v11 = AMLIGetNameSpaceObject(*(_BYTE **)(v2 + 40), 0LL, (_QWORD *)(BugCheckParameter2 + 968), 0);
    v12 = 0;
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = byte_140075A82;
      if ( BugCheckParameter2 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 + 8);
        v12 = BugCheckParameter2;
        if ( (v15 & 0x200000000000LL) != 0 && (v15 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v12, (_DWORD)v14, 18);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    if ( *(_WORD *)(**(_QWORD **)v10 + 66LL) != 6 )
    {
      v16 = byte_140075A82;
      v17 = byte_140075A82;
      if ( BugCheckParameter2 )
      {
        v18 = *(_QWORD *)(BugCheckParameter2 + 8);
        LOBYTE(v12) = BugCheckParameter2;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v16 = *(const char **)(BugCheckParameter2 + 608);
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(BugCheckParameter2 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          10LL,
          0x13u,
          BugCheckParameter4,
          *(const char **)(v2 + 40),
          v12,
          v16,
          v17);
      KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    v19 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( *(_WORD *)(v19 + 50) != 1 )
      KeBugCheckEx(0xA5u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(unsigned __int16 *)(v19 + 50));
    *(_DWORD *)(BugCheckParameter2 + 976) = *(_DWORD *)(v19 + 64);
    _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 1008), 0x4000000000uLL);
    return v13;
  }
  else
  {
    v6 = byte_140075A82;
    v7 = byte_140075A82;
    if ( BugCheckParameter2 )
    {
      v8 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x11u,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        13,
        v4,
        v6,
        v7);
    return 3221225485LL;
  }
}
