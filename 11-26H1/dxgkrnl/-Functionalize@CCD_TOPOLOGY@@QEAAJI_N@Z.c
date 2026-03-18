/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1401D4640 (DxgkFunctionalizePathsModality.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140268B94 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1402690D4 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140317748 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1403195B8 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, bool a3)
{
  int active; // ebx
  unsigned __int16 v8; // cx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int16 v12; // dx
  __int16 v13; // cx
  int v14; // [rsp+28h] [rbp-29h] BYREF
  __int128 v15; // [rsp+30h] [rbp-21h]
  __int64 v16; // [rsp+40h] [rbp-11h]
  __int16 v17; // [rsp+48h] [rbp-9h]
  __int128 v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+60h] [rbp+Fh]
  __int64 v20; // [rsp+68h] [rbp+17h]
  char v21; // [rsp+70h] [rbp+1Fh]
  int v22; // [rsp+74h] [rbp+23h]
  int v23; // [rsp+78h] [rbp+27h]
  __int64 v24; // [rsp+7Ch] [rbp+2Bh]
  __int64 v25; // [rsp+88h] [rbp+37h]
  unsigned __int8 v26; // [rsp+D0h] [rbp+7Fh] BYREF

  v21 = 1;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v23 = 1;
  v24 = 0LL;
  v25 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v14, 8LL);
  if ( (unsigned int)DxgIsRemoteSession() || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_3;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v14, a3);
  if ( active < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1389;
    goto LABEL_4;
  }
  if ( active == 255 )
  {
LABEL_3:
    active = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, a3);
  }
  else
  {
    if ( v20 )
      v8 = *(_WORD *)(v20 + 20);
    else
      v8 = 0;
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      v10 = *(_WORD *)(v9 + 20);
    else
      v10 = 0;
    if ( v8 <= v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1414;
    }
    active = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)&v14, a2, a3);
    if ( active >= 0 )
    {
      v26 = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v14, &v26);
      if ( !v26 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1432;
      }
      v11 = *((_QWORD *)this + 8);
      if ( v11 )
        v12 = *(_WORD *)(v11 + 20);
      else
        v12 = 0;
      if ( v20 )
        v13 = *(_WORD *)(v20 + 20);
      else
        v13 = 0;
      if ( v12 != v13 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1433;
      }
      active = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v14);
      if ( active >= 0 )
      {
        active = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1443;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1419;
    }
  }
LABEL_4:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v14);
  return (unsigned int)active;
}
