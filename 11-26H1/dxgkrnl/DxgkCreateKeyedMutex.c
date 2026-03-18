/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1401FEF00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403DBBA8 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(DXGKEYEDMUTEX *Src)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rcx
  DXGGLOBAL *Global; // rax
  int v6; // r14d
  _DWORD *v7; // rcx
  DXGKEYEDMUTEX *v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // [rsp+50h] [rbp-68h] BYREF
  int v15; // [rsp+58h] [rbp-60h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  char v17; // [rsp+68h] [rbp-50h]
  DXGKEYEDMUTEX *v18[3]; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v19[2]; // [rsp+88h] [rbp-30h] BYREF

  v18[1] = Src;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2051);
  Current = DXGPROCESS::GetCurrent();
  v18[2] = Current;
  if ( Current )
  {
    *(_OWORD *)v19 = 0LL;
    RtlCopyFromUser(v19, Src, 0x10uLL);
    v14 = 0;
    v18[0] = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v19[0], v18, &v14, 0LL, 0, 0);
    if ( v6 < 0 )
    {
      if ( v14 )
        DXGKEYEDMUTEX::DestroyHandle(v14);
    }
    else
    {
      RtlWriteULongToUser((_DWORD *)Src + 3, v14);
      v7 = (_DWORD *)((char *)Src + 8);
      v8 = v18[0];
      RtlWriteULongToUser(v7, *((_DWORD *)v18[0] + 8));
      DXGKEYEDMUTEX::ReleaseReference(v8);
      v9 = v14;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v10 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v10 < *((_DWORD *)Current + 74) )
      {
        v11 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
          && (*(_DWORD *)(v11 + 16 * v10 + 8) & 0x1F) != 0 )
        {
          v12 = 16 * ((v9 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v12 + v11 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(v12 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3506;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
