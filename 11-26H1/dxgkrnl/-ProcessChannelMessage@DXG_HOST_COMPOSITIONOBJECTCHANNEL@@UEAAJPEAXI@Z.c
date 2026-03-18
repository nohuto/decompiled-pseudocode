/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401BFD70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401BDF5C (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401BE634 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1401BEB78 (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1401C02E0 (-QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTAT.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1401C04B4 (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401C133C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  struct _KPROCESS *v7; // rdx
  DXGPROCESS *v8; // rax
  DXGPROCESS *v9; // rsi
  __int64 v10; // r8
  int *v11; // rdx
  struct _KPROCESS *v12; // rdx
  int v13; // eax
  struct _KPROCESS *v14; // rdx
  struct _KPROCESS *v15; // rdx
  DXGPROCESS *v16; // rax
  DXGPROCESS *v17; // rsi
  int CompositionSurfaceCallback; // eax
  struct _KPROCESS *v19; // rdx
  struct _KPROCESS *v20; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v22; // rdx
  _BYTE v23[16]; // [rsp+20h] [rbp-99h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-89h] BYREF
  char v25; // [rsp+60h] [rbp-59h]
  int v26; // [rsp+68h] [rbp-51h] BYREF
  int v27; // [rsp+6Ch] [rbp-4Dh]
  __int64 v28; // [rsp+70h] [rbp-49h]
  int v29; // [rsp+78h] [rbp-41h] BYREF
  int v30; // [rsp+7Ch] [rbp-3Dh]
  __int64 v31; // [rsp+80h] [rbp-39h]
  __int64 v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+90h] [rbp-29h] BYREF
  int StatsCallback; // [rsp+94h] [rbp-25h]
  int v35; // [rsp+98h] [rbp-21h]
  _BYTE v36[84]; // [rsp+9Ch] [rbp-1Dh] BYREF

  if ( a3 < 0xC )
  {
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 77;
    return 3221225485LL;
  }
  v6 = *((int *)a2 + 2);
  switch ( (_DWORD)v6 )
  {
    case 1:
      if ( a3 != 16 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 91;
        return 3221225485LL;
      }
      v20 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v30 = *((_DWORD *)a2 + 1);
      v29 = 1886220131;
      v31 = 2LL;
      v32 = 0LL;
      v25 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v20);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v26);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
      ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v17 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
        DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
      if ( !v17 )
        goto LABEL_46;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGPROCESS *)((char *)v17 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      if ( *((_DWORD *)v17 + 10) != 1 )
      {
LABEL_45:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
        DXGPROCESS::ReleaseReference(v17);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
LABEL_46:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
        CPROCESSATTACHHELPER::Detach(&ApcState);
        v11 = &v29;
        v10 = 24LL;
        goto LABEL_47;
      }
      CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                     this,
                                     v22,
                                     (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v29);
LABEL_44:
      v30 = CompositionSurfaceCallback;
      goto LABEL_45;
    case 3:
      if ( a3 != 16 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 100;
        return 3221225485LL;
      }
      v19 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v27 = *((_DWORD *)a2 + 1);
      v28 = 4LL;
      v26 = 1886220131;
      v25 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v19);
      v13 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v26);
LABEL_23:
      v27 = v13;
      CPROCESSATTACHHELPER::Detach(&ApcState);
      v10 = 16LL;
      v11 = &v26;
      goto LABEL_47;
    case 5:
      if ( a3 != 1344 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 109;
        return 3221225485LL;
      }
      v15 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v30 = *((_DWORD *)a2 + 1);
      v31 = 6LL;
      v29 = 1886220131;
      v32 = 0LL;
      v25 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v15);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v26);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
      v16 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v17 = v16;
      if ( v16 )
        DXGPROCESS::AcquireReference(v16);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
      if ( !v17 )
        goto LABEL_46;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGPROCESS *)((char *)v17 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      if ( *((_DWORD *)v17 + 10) != 1 )
        goto LABEL_45;
      CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                     this,
                                     a2,
                                     (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v29);
      goto LABEL_44;
    case 7:
      if ( a3 != 24 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 118;
        return 3221225485LL;
      }
      v14 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v27 = *((_DWORD *)a2 + 1);
      v28 = 8LL;
      v26 = 1886220131;
      v25 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v14);
      v13 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v26);
      goto LABEL_23;
    case 9:
      if ( a3 != 488 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 127;
        return 3221225485LL;
      }
      v12 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v27 = *((_DWORD *)a2 + 1);
      v28 = 10LL;
      v26 = 1886220131;
      v25 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v12);
      v13 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v26);
      goto LABEL_23;
  }
  if ( (_DWORD)v6 != 11 )
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 143;
    return 3221225485LL;
  }
  if ( a3 != 16 )
  {
    WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 136;
    return 3221225485LL;
  }
  memset(v36, 0, sizeof(v36));
  v33 = 1886220131;
  v35 = 12;
  memset(&v36[4], 0, 0x50uLL);
  v7 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  StatsCallback = *((_DWORD *)a2 + 1);
  v25 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v7);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v26);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
  v8 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
  v9 = v8;
  if ( v8 )
    DXGPROCESS::AcquireReference(v8);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
  if ( v9 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGPROCESS *)((char *)v9 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    if ( *((_DWORD *)v9 + 10) == 1 )
      StatsCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
                        this,
                        a2,
                        (struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *)&v33);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
    DXGPROCESS::ReleaseReference(v9);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  v10 = 96LL;
  v11 = &v33;
LABEL_47:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v11, v10);
  return 0LL;
}
