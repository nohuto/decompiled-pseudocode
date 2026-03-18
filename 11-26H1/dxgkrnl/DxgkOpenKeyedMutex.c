/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1401FF7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403D0708 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(_DWORD *a1)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rcx
  DXGGLOBAL *v5; // rcx
  int v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // [rsp+58h] [rbp-40h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]
  char v14; // [rsp+68h] [rbp-30h]
  unsigned int v15; // [rsp+A8h] [rbp+10h] BYREF
  __int64 ULong64FromUser; // [rsp+B0h] [rbp+18h]
  struct DXGKEYEDMUTEX *v17; // [rsp+B8h] [rbp+20h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2052);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    ULong64FromUser = 0LL;
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v17 = 0LL;
    v15 = 0;
    DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::OpenKeyedMutex(v5, ULong64FromUser, &v17, &v15, 0LL, 0);
    if ( v6 < 0 )
    {
      if ( v15 )
        DXGKEYEDMUTEX::DestroyHandle(v15);
    }
    else
    {
      RtlWriteULongToUser(a1 + 1, v15);
      v7 = v15;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v8 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v8 < *((_DWORD *)Current + 74) )
      {
        v9 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60)
          && (*(_DWORD *)(v9 + 16 * v8 + 8) & 0x1F) != 0 )
        {
          v10 = 16 * ((v7 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v10 + v9 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)Current + 35) + v10 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3700;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
