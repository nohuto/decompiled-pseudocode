/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1402DD7D8
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402DD6F0 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x140064CE4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x140065040 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1402674FC (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140385038 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  _QWORD *v19; // rax
  int v20; // eax
  bool v21; // zf
  int updated; // eax
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h] BYREF
  DMMVIDPNTOPOLOGY *v25; // [rsp+60h] [rbp-10h]
  unsigned int v26; // [rsp+A0h] [rbp+30h] BYREF
  int v27; // [rsp+B8h] [rbp+48h]

  v27 = a4;
  v4 = a3;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12064;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12072;
  }
  v7 = *((_QWORD *)a1 + 395);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12077;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12091;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, *(_QWORD *)(v7 + 104));
  v23 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
  auto_rc<DMMVIDPN const>::reset(&v23, (__int64)ClientCommittedVidPnRef);
  if ( !v23 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12110;
    LODWORD(v15) = -1071774884;
    goto LABEL_26;
  }
  v10 = (DMMVIDPNTOPOLOGY *)(v23 + 96);
  v11 = 0LL;
  v25 = (DMMVIDPNTOPOLOGY *)(v23 + 96);
  while ( 1 )
  {
    v26 = -1;
    v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, v6, v11, &v26);
    v15 = v12;
    if ( v12 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v19[3] = v11;
      v19[4] = v6;
      v19[5] = v10;
      v19[6] = v15;
      WdLogGlobalForLineNumber = 12137;
      goto LABEL_26;
    }
    if ( v26 == -1 )
    {
      auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
      return 0LL;
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v10, v6, v26);
    if ( !Path )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12157;
    }
    v17 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12166;
    }
    if ( (_DWORD)v4 == 1 )
    {
      if ( *((_DWORD *)Path + 43) != 2 )
        goto LABEL_16;
    }
    else if ( (_DWORD)v4 != 2
           || !*(_BYTE *)(v17 + 108)
           && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
    {
      goto LABEL_16;
    }
    if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
            Path,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v4) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12205;
LABEL_24:
      LODWORD(v15) = -1071774970;
      goto LABEL_26;
    }
    v20 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v4);
    LODWORD(v15) = v20;
    if ( v20 == -1071774970 )
    {
      WdLogSingleEntry4(7LL, v4, v6, v26, a1);
      WdLogGlobalForLineNumber = 12220;
      goto LABEL_24;
    }
    if ( v20 < 0 )
      break;
    v21 = *((_BYTE *)Path + 110) == 0;
    *((_DWORD *)Path + 44) = v27;
    if ( v21 )
      updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
    else
      updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
    LODWORD(v15) = updated;
    if ( updated < 0 )
      goto LABEL_26;
LABEL_16:
    v10 = v25;
    ++v11;
  }
  WdLogSingleEntry4(2LL, v4, v6, v26, v20);
  WdLogGlobalForLineNumber = 12227;
LABEL_26:
  auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
  return (unsigned int)v15;
}
