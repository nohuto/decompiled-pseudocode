/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025D854
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x140363614 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x14026574C (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 Container; // rbp
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3234;
  }
  if ( (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3235;
  }
  v6 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v9 = v6;
  if ( v6 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v16 = -1LL;
    LOBYTE(v13) = 1;
    v14 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 11LL, v13, &v16);
    v15 = v14;
    if ( v14 >= 0 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, Container & -(__int64)(Container != -88), v14);
      result = v15;
      WdLogGlobalForLineNumber = 3268;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = v3;
    v10[4] = a2;
    v10[5] = v9;
    result = (unsigned int)v9;
    WdLogGlobalForLineNumber = 3245;
  }
  return result;
}
