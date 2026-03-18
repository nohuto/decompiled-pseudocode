/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1401EBF60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(char *Src)
{
  NTSTATUS v2; // eax
  unsigned int v3; // edi
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  PVOID v9; // r12
  int v10; // eax
  __int64 v11; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  struct DXGPROCESS *Current; // r15
  unsigned __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-78h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v24[16]; // [rsp+98h] [rbp-60h] BYREF
  int v25; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-48h]
  char v27; // [rsp+B8h] [rbp-40h]
  unsigned int Srca; // [rsp+108h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v29; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2086);
  HandleInformation = 0LL;
  *(_OWORD *)Handle = 0LL;
  RtlCopyFromUser(Handle, Src, 0x10uLL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v3 = v2;
  v4 = -1073741788;
  if ( v2 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1526;
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v4;
  }
  if ( v2 >= 0 )
  {
    Srca = 0;
    v29 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v24);
    v9 = Object;
    v10 = *(_DWORD *)(*(_QWORD *)Object + 420LL);
    if ( v10 == 5 || v10 == 6 )
    {
      v4 = -1073741811;
    }
    else
    {
      v4 = DXGSYNCOBJECT::Open(
             *(DXGSYNCOBJECT **)Object,
             0LL,
             0LL,
             0LL,
             &Srca,
             0LL,
             0LL,
             0,
             &v29,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0,
             0LL,
             0LL,
             0,
             0,
             0);
      if ( v4 >= 0 )
      {
        if ( bTracingEnabled )
        {
          if ( v29 ? *((_QWORD *)v29 + 4) : 0LL )
          {
            v14 = v29 ? *((_QWORD *)v29 + 4) : 0LL;
            v13 = *(_QWORD *)(v14 + 16);
          }
          else
          {
            v13 = 0LL;
          }
          v15 = v29 ? *((_QWORD *)v29 + 4) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pppp_EtwWriteTransfer(v13, &EventOpenSyncObject, v11, v15, Srca, 0LL, v13);
        }
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24);
        RtlCopyToUser(Src + 8, &Srca, 4uLL);
        Current = DXGPROCESS::GetCurrent();
        v17 = Srca;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
        v18 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
        if ( v18 < *((_DWORD *)Current + 74) )
        {
          v19 = *((_QWORD *)Current + 35);
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
          if ( (((unsigned int)v17 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x1F) != 0 )
          {
            v21 = 16 * ((v17 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v21 + v19 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)Current + 35) + v21 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_43;
      }
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24);
LABEL_43:
    ObfDereferenceObject(v9);
    goto LABEL_7;
  }
  WdLogSingleEntry2(3LL, Handle[0], v2);
  WdLogGlobalForLineNumber = 1533;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
  return v3;
}
