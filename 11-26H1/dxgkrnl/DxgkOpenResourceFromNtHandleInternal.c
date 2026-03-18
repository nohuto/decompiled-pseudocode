/*
 * XREFs of DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140228E80 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x140353BC0 (DxgkOpenResourceFromNtHandle.c)
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
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14005A380 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035450C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403B75BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandleInternal(_OWORD *Src, unsigned int a2)
{
  char CurrentThreadPreviousMode; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  NTSTATUS v7; // eax
  int v8; // r15d
  DXGKEYEDMUTEX **v9; // r14
  DXGKEYEDMUTEX *v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *v13; // r12
  DXGPUSHLOCK *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  struct DXGGLOBAL *Global; // rax
  unsigned int v27; // edx
  unsigned int v28; // r8d
  PVOID v30; // rcx
  PVOID v31; // rcx
  unsigned int v32; // esi
  PERESOURCE *v33; // rax
  unsigned int v34; // [rsp+80h] [rbp-108h] BYREF
  int v35; // [rsp+88h] [rbp-100h] BYREF
  __int64 v36; // [rsp+90h] [rbp-F8h]
  char v37; // [rsp+98h] [rbp-F0h]
  PVOID Object; // [rsp+A0h] [rbp-E8h] BYREF
  char v39; // [rsp+A8h] [rbp-E0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp-D8h] BYREF
  PVOID v41; // [rsp+B8h] [rbp-D0h]
  _BYTE v42[16]; // [rsp+C0h] [rbp-C8h] BYREF
  struct DXGPROCESS *v43; // [rsp+D0h] [rbp-B8h]
  _DWORD *v44; // [rsp+D8h] [rbp-B0h]
  HANDLE Handle[21]; // [rsp+E0h] [rbp-A8h] BYREF
  char v46; // [rsp+1A0h] [rbp+18h]
  unsigned int v47; // [rsp+1A8h] [rbp+20h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2076);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v46 = CurrentThreadPreviousMode;
  HandleInformation = 0LL;
  memset(Handle, 0, 0x68uLL);
  Current = DXGPROCESS::GetCurrent(v5);
  v43 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11875;
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( CurrentThreadPreviousMode == 1 )
  {
    RtlCopyFromUser(Handle, Src, 0x68uLL);
  }
  else
  {
    *(_OWORD *)Handle = *Src;
    *(_OWORD *)&Handle[2] = Src[1];
    *(_OWORD *)&Handle[4] = Src[2];
    *(_OWORD *)&Handle[6] = Src[3];
    *(_OWORD *)&Handle[8] = Src[4];
    *(_OWORD *)&Handle[10] = Src[5];
    Handle[12] = *((HANDLE *)Src + 12);
  }
  v44 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v25 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&Object,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v27 = (a2 >> 6) & 0xFFFFFF;
    if ( v27 < *(_DWORD *)(v25 + 16) )
    {
      v28 = *(_DWORD *)(*(_QWORD *)v25 + 16LL * v27 + 8);
      if ( a2 >> 30 == ((v28 >> 5) & 3) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v25 + 16LL * v27 + 8) & 0x1F) == 4 )
        {
          v9 = *(DXGKEYEDMUTEX ***)(*(_QWORD *)v25 + 16LL * v27);
LABEL_60:
          v41 = v9;
          if ( v9 )
          {
            if ( v39 )
            {
              v30 = Object;
              _InterlockedDecrement((volatile signed __int32 *)Object + 4);
              ExReleasePushLockSharedEx(v30, 0LL);
              KeLeaveCriticalRegion();
            }
            goto LABEL_11;
          }
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 11914;
          if ( v39 )
          {
            v31 = Object;
            _InterlockedDecrement((volatile signed __int32 *)Object + 4);
            ExReleasePushLockSharedEx(v31, 0LL);
            KeLeaveCriticalRegion();
          }
          goto LABEL_39;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v9 = 0LL;
    goto LABEL_60;
  }
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         CurrentThreadPreviousMode == 1,
         &Object,
         &HandleInformation);
  v8 = v7;
  v9 = (DXGKEYEDMUTEX **)Object;
  v41 = Object;
  if ( v7 != -1073741788 )
  {
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[1], v7);
      WdLogGlobalForLineNumber = 11951;
LABEL_19:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v8;
    }
LABEL_11:
    v47 = 0;
    v34 = 0;
    v10 = v9[3];
    if ( v10 )
    {
      v8 = DXGKEYEDMUTEX::Open(v10, &v47, Handle[11], (unsigned int)Handle[12], 1);
      if ( v8 < 0 )
        goto LABEL_16;
    }
    if ( v9[4] )
    {
      v23 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, v23, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
      v8 = DXGSYNCOBJECT::Open(
             v9[4],
             0LL,
             0LL,
             0LL,
             &v34,
             0LL,
             0LL,
             0,
             0LL,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0,
             0LL,
             0LL,
             0,
             0,
             0);
      if ( v8 < 0 )
      {
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42);
LABEL_16:
        if ( v8 < 0 )
        {
          if ( v47 )
            DXGKEYEDMUTEX::DestroyLocal(v47);
          v32 = v34;
          if ( v34 )
          {
            v33 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
            DXGGLOBAL::DestroySyncObject(v33, v9[4], v32, 0);
          }
        }
        if ( (*v44 & 0x10) == 0 )
          ObfDereferenceObject(v9);
        goto LABEL_19;
      }
      if ( v42[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
    }
    if ( v46 == 1 )
    {
      RtlWriteULongToUser((_DWORD *)Src + 21, v47);
      RtlWriteULongToUser((_DWORD *)Src + 25, v34);
    }
    else
    {
      *((_DWORD *)Src + 21) = v47;
      *((_DWORD *)Src + 25) = v34;
    }
    v8 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(Src);
    if ( v8 >= 0 )
    {
      v13 = v43;
      v14 = (struct DXGPROCESS *)((char *)v43 + 248);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v43 + 248));
      v15 = (v34 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)v13 + 74) )
      {
        v16 = *((_QWORD *)v13 + 35);
        if ( ((v34 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v17 = 16 * (((unsigned __int64)v34 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + v17 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(v17 + *((_QWORD *)v13 + 35) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v14 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      v18 = v47;
      if ( v47 )
      {
        DXGPUSHLOCK::AcquireExclusive(v14);
        v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v19 < *((_DWORD *)v13 + 74) )
        {
          v20 = *((_QWORD *)v13 + 35);
          if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
            && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
          {
            v21 = 16 * ((v18 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v20 + v21 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)v13 + 35) + v21 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v13 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    goto LABEL_16;
  }
  WdLogSingleEntry2(3LL, Handle[1], -1073741788LL);
  WdLogGlobalForLineNumber = 11944;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return 3221225508LL;
}
