/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x140211790
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000CFBC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006B110 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1400A338C (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1400A3558 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401BE88C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  void *v4; // rdi
  struct DXGPROCESS *Current; // rbx
  const wchar_t *v6; // r9
  int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  struct CompositionSurfaceObject *v11; // r13
  struct _KPROCESS *v12; // r12
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  int v15; // eax
  unsigned __int8 v16; // r12
  CCompositionSurface *v17; // r15
  CPushLock *v18; // rbx
  struct IPairedSurfaceObject *v19; // r13
  int v20; // edi
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+50h] [rbp-C8h] BYREF
  int v25; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-B8h]
  char v27; // [rsp+68h] [rbp-B0h]
  PVOID Object; // [rsp+70h] [rbp-A8h] BYREF
  DxgkCompositionObject *v29; // [rsp+78h] [rbp-A0h] BYREF
  struct IPairedSurfaceObject *v30; // [rsp+80h] [rbp-98h] BYREF
  void *v31; // [rsp+88h] [rbp-90h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp-88h]
  _QWORD v33[2]; // [rsp+98h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF
  char v35; // [rsp+D8h] [rbp-40h]

  v2 = a2;
  v32 = a2;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2215);
  v29 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  if ( !a1 || !v2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1387;
    v6 = L"Invalid parameters. Returning 0x%I64x";
    goto LABEL_45;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1396;
    v6 = L"Invalid process context. Returning 0x%I64x";
LABEL_45:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v33, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  v7 = *((_DWORD *)Current + 102);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 125) && (v7 & 4) != 0 )
  {
    v24 = 0LL;
    LODWORD(v8) = DxgkGetSessionTokenManager(&v24);
    v9 = v24;
    if ( (int)v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
      LODWORD(v8) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v10, &v29);
      v11 = v29;
      if ( (int)v8 >= 0 )
      {
        v30 = 0LL;
        v12 = 0LL;
        Object = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 123));
        if ( SessionData )
        {
          LODWORD(v8) = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&Object);
          v12 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v8) = -1073741790;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1449;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Fail to reference Dwm process. Returning 0x%I64x",
            -1073741790LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v8 >= 0 )
        {
          v35 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v12);
          v15 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v11, &v30, &v31);
          v8 = v15;
          if ( v15 >= 0 )
          {
            v16 = 0;
            v17 = (struct CompositionSurfaceObject *)((char *)v11 + 40);
            v18 = (struct CompositionSurfaceObject *)((char *)v11 + 48);
            v33[0] = (char *)v11 + 48;
            v19 = v30;
            do
            {
              v20 = CPushLock::AcquireLockExclusive(v18);
              if ( v20 >= 0 )
              {
                v20 = CCompositionSurface::Pair(v17, v19);
                CPushLock::ReleaseLock(v18);
              }
              LODWORD(v8) = v20;
              if ( v20 == -1073740528 )
              {
                if ( v16 )
                {
                  LODWORD(v8) = -1073741823;
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 1491;
                }
                else
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 1480;
                  if ( (int)CPushLock::AcquireLockExclusive(v18) >= 0 )
                  {
                    CCompositionSurface::UnPair(v17);
                    CPushLock::ReleaseLock(v18);
                  }
                  v16 = 1;
                }
              }
              else if ( v20 < 0 )
              {
                WdLogSingleEntry2(2LL, v20, v16);
                WdLogGlobalForLineNumber = 1497;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v20,
                  v16,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v19 + 16LL))(v19);
                v18 = (CPushLock *)v33[0];
              }
            }
            while ( (_DWORD)v8 == -1073740528 );
            v9 = v24;
            v12 = (struct _KPROCESS *)Object;
            v11 = v29;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1467;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail on DxgkCreateRemoteCompositionSurfaceObjectForPairing. Returning 0x%I64x",
              v8,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          CPROCESSATTACHHELPER::Detach(&ApcState);
          v4 = v31;
        }
        if ( v12 )
          ObfDereferenceObject(v12);
        DxgkCompositionObject::Release(v11);
      }
    }
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    v2 = v32;
  }
  else
  {
    LODWORD(v8) = -1073741790;
  }
  RtlWriteULong64ToUser(v2, (__int64)v4);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
