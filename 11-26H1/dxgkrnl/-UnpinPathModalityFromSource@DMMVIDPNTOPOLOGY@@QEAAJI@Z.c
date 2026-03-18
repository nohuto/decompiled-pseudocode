/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x14026574C
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025D854 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140053E18 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140058868 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14005E5B0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140061458 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 i; // rbp
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  DMMVIDPNTARGET **Path; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD *v15; // rax
  DMMVIDPNSOURCEMODESET *v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    LODWORD(v16) = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v2, i, (unsigned int *)&v16);
    v8 = v5;
    if ( v5 < 0 )
      break;
    if ( (_DWORD)v16 == -1 )
      return 0LL;
    Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(this, v2, (int)v16);
    if ( !Path )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1211;
    }
    v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[11]);
    DMMVIDPNSOURCEMODESET::UnpinMode(v16, v10);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v16, 0LL);
    v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
    DMMVIDPNTARGETMODESET::UnpinMode(v16, v11);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v16, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)Path, v12);
    DMMVIDPNPRESENTPATH::UnpinContentRotation((DMMVIDPNPRESENTPATH *)Path, v13);
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v15[3] = i;
  v15[4] = v2;
  v15[5] = this;
  v15[6] = v8;
  result = (unsigned int)v8;
  WdLogGlobalForLineNumber = 1191;
  return result;
}
