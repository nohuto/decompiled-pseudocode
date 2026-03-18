/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     IsCurrentModeAdvancedColor @ 0x1402AC768 (IsCurrentModeAdvancedColor.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14034741C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        _QWORD *a1,
        int a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  __int64 v8; // rdi
  VIDPN_MGR *v9; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct DMMVIDPN *v11; // rdi
  char *v12; // r8
  char *v13; // rdx
  const struct DMMVIDPN *v14; // rcx
  DMMVIDPNTARGET *v15; // rcx
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  __int64 v17; // rcx
  __int64 result; // rax
  char *v19; // rax
  unsigned int v20; // ebx
  const struct DMMVIDPN *v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15428;
    return 3223191554LL;
  }
  v8 = a1[395];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15443;
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 15457;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, (__int64)v9);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
  v21 = ClientCommittedVidPnRef;
  v11 = ClientCommittedVidPnRef;
  if ( !ClientCommittedVidPnRef )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15474;
    v20 = -1071774884;
    goto LABEL_24;
  }
  v12 = (char *)ClientCommittedVidPnRef + 120;
  v13 = 0LL;
  v14 = (const struct DMMVIDPN *)*((_QWORD *)ClientCommittedVidPnRef + 15);
  if ( v14 != (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 120) )
    v13 = (char *)v14 - 8;
  if ( !v13 )
    goto LABEL_22;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) == a2 && *(_DWORD *)(*((_QWORD *)v13 + 12) + 24LL) == a3 )
      break;
    v19 = (char *)*((_QWORD *)v13 + 1);
    v13 = v19 - 8;
    if ( v19 == v12 )
      v13 = 0LL;
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_22:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15487;
LABEL_23:
    v20 = -1071774971;
LABEL_24:
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v21, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
    return v20;
  }
  v15 = (DMMVIDPNTARGET *)*((_QWORD *)v13 + 12);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15494;
    goto LABEL_23;
  }
  v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v15);
  if ( !*((_QWORD *)v16 + 18) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15503;
  }
  v17 = *((_QWORD *)v16 + 18);
  a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v17 + 132);
  *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v17 + 136);
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
  ReferenceCounted::Release((const struct DMMVIDPN *)((char *)v11 + 24));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
  return 0LL;
}
