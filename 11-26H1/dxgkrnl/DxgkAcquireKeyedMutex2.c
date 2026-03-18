/*
 * XREFs of DxgkAcquireKeyedMutex2 @ 0x1401FEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex2(void *Src)
{
  __int64 v2; // rcx
  union _LARGE_INTEGER *p_ULong64FromUser; // r9
  int v5; // esi
  __int64 v6; // rcx
  int v7; // [rsp+50h] [rbp-58h] BYREF
  __int64 v8; // [rsp+58h] [rbp-50h]
  char v9; // [rsp+60h] [rbp-48h]
  unsigned int v10[4]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v11; // [rsp+78h] [rbp-30h] BYREF
  void *v12[2]; // [rsp+88h] [rbp-20h]
  __int64 ULong64FromUser; // [rsp+B8h] [rbp+10h] BYREF

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2068;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2068);
  if ( DXGPROCESS::GetCurrent() )
  {
    *(_OWORD *)v10 = 0LL;
    v11 = 0LL;
    *(_OWORD *)v12 = 0LL;
    RtlCopyFromUser(v10, Src, 0x30uLL);
    p_ULong64FromUser = 0LL;
    ULong64FromUser = 0LL;
    if ( (_QWORD)v11 )
    {
      ULong64FromUser = RtlReadULong64FromUser((volatile void *)v11);
      p_ULong64FromUser = (union _LARGE_INTEGER *)&ULong64FromUser;
    }
    v5 = DXGKEYEDMUTEX::AcquireSync(
           v10[0],
           *(unsigned __int64 *)&v10[2],
           0,
           p_ULong64FromUser,
           (DXGKEYEDMUTEX *)((char *)&v11 + 8),
           v12[0],
           (unsigned int)v12[1],
           0LL,
           1);
    if ( v5 < 0 )
    {
      WdLogSingleEntry2(2LL, v10[0], v5);
      WdLogGlobalForLineNumber = 4056;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hDevice 0x%I64x failed to acquire hKeyedMutex 0x%I64x returning 0x%I64x",
        v10[0],
        v5,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      RtlWriteULong64ToUser((_QWORD *)Src + 3, *((__int64 *)&v11 + 1));
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3987;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
