/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1401FF290
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
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403DBBA8 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(char *Src)
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
  int v14; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h]
  char v16; // [rsp+60h] [rbp-58h]
  unsigned __int64 v17[2]; // [rsp+68h] [rbp-50h] BYREF
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v18[4]; // [rsp+78h] [rbp-40h]
  unsigned int v19; // [rsp+C8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v20; // [rsp+D0h] [rbp+18h] BYREF
  struct DXGPROCESS *v21; // [rsp+D8h] [rbp+20h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2066);
  Current = DXGPROCESS::GetCurrent();
  v21 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3597;
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
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)&v18[0].0 = 0LL;
  RtlCopyFromUser(v17, Src, 0x20uLL);
  if ( (v18[3].Value & 0xFFFFFFFE) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3619;
    goto LABEL_9;
  }
  v19 = 0;
  v20 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v17[0], &v20, &v19, *(void **)&v18[0].0, v18[2].Value, v18[3]);
  if ( v6 < 0 )
  {
    if ( v19 )
      DXGKEYEDMUTEX::DestroyHandle(v19);
  }
  else
  {
    RtlWriteULongToUser((_DWORD *)Src + 3, v19);
    v7 = Src + 8;
    v8 = v20;
    RtlWriteULongToUser(v7, *((_DWORD *)v20 + 8));
    DXGKEYEDMUTEX::ReleaseReference(v8);
    v9 = v19;
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + v12 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return (unsigned int)v6;
}
