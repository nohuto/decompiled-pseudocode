/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140317F38
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1403418DC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, const struct _LUID *a2, char a3, unsigned int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v20; // rax
  struct DXGADAPTER *v22; // [rsp+30h] [rbp-91h] BYREF
  __int64 v23; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v24[144]; // [rsp+50h] [rbp-71h] BYREF

  v22 = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v22, a2) )
  {
    v9 = v22;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v22, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
      return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
    if ( (unsigned int)PsGetCurrentProcessSessionId(v14, v13, v15, v16) == ServerSiloServiceSessionId )
      goto LABEL_8;
    v23 = 0LL;
    Current = DXGPROCESS::GetCurrent(v17);
    if ( Current )
    {
      v20 = *((_QWORD *)Current + 11);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v20 + 240))(0LL, &v23, 0LL);
    }
    if ( v23 == *(_QWORD *)((char *)v9 + 4876) )
    {
LABEL_8:
      LOBYTE(v18) = a3;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v9,
                                                   v18,
                                                   a4,
                                                   a5,
                                                   0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
      if ( v9 )
        DXGADAPTER::ReleaseReference(v9);
      return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
    }
    WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
    WdLogGlobalForLineNumber = 6466;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    DXGADAPTER::ReleaseReference(v9);
    return 3223191554LL;
  }
  else
  {
    if ( v22 )
      DXGADAPTER::ReleaseReference(v22);
    return 3221225486LL;
  }
}
