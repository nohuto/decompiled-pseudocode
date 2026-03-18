/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x140350D18
 * Callers:
 *     DxgkOpenSynchronizationObject @ 0x140350150 (DxgkOpenSynchronizationObject.c)
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x140350D00 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1, int a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int ULongFromUser; // esi
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v8; // rax
  int v9; // esi
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v20; // rcx
  PERESOURCE *v21; // rax
  struct DXGADAPTERSYNCOBJECT *v22[2]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v23[16]; // [rsp+68h] [rbp-40h] BYREF
  int v24; // [rsp+78h] [rbp-30h] BYREF
  __int64 v25; // [rsp+80h] [rbp-28h]
  char v26; // [rsp+88h] [rbp-20h]
  unsigned int v27; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v28; // [rsp+C8h] [rbp+20h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2050);
  Current = DXGPROCESS::GetCurrent(v4);
  v22[1] = Current;
  if ( Current )
  {
    if ( a2 )
      ULongFromUser = RtlReadULongFromUser(&a1->hSharedHandle);
    else
      ULongFromUser = a1->hSharedHandle;
    v28 = 0LL;
    v22[0] = 0LL;
    v27 = 0;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
    v8 = DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::OpenSyncObject(v8, ULongFromUser, &v28, &v27, v22);
    if ( v23[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
    if ( v9 < 0 )
    {
      if ( v28 )
      {
        v21 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v21, v28, v27, 0);
      }
    }
    else
    {
      if ( a2 )
        RtlWriteULongToUser(&a1->hSyncObject, v27);
      else
        a1->hSyncObject = v27;
      if ( bTracingEnabled )
      {
        if ( v22[0] ? *((_QWORD *)v22[0] + 4) : 0LL )
        {
          v12 = v22[0] ? *((_QWORD *)v22[0] + 4) : 0LL;
          v13 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v13 = 0LL;
        }
        v14 = v22[0] ? *((_QWORD *)v22[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v13, &EventOpenSyncObject, v10, v14, v27, 0LL, v13);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v15 = (v27 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
      {
        v16 = *((_QWORD *)Current + 35);
        if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v17 = 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v17 + v16 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(v17 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 892;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
