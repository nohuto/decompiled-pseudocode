/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025E388
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14025CABC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x140265170 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        DMMVIDPN *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  DMMVIDPNTARGET *SourceFromId; // rax
  __int64 result; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  struct DMMVIDPNSOURCEMODESET *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  int v18; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNSOURCEMODESET *v20; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4180;
  }
  if ( (_DWORD)v5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4181;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4182;
  }
  SourceFromId = DMMVIDPN::GetSourceFromId(a2, v5);
  if ( !SourceFromId )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 4195;
    return result;
  }
  v20 = 0LL;
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4207;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, (__int64)v11);
  v12 = v20;
  v13 = VIDPN_MGR::PinVidPnSourceMode(this, v20, a4);
  v16 = v13;
  if ( v13 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v17[3] = a4;
    v17[4] = v12;
    v17[5] = v16;
    WdLogGlobalForLineNumber = 4220;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, 0LL);
    return (unsigned int)v16;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, 0LL);
  v18 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPN *)((char *)a2 + 96), v5);
  v16 = v18;
  if ( v18 < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry3(2LL, v5, ContainingAdapter, v16);
    WdLogGlobalForLineNumber = 4238;
    return (unsigned int)v16;
  }
  return 0LL;
}
