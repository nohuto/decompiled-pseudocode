/*
 * XREFs of ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x14006E200
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::Invalidate(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rcx
  char *v4; // rax
  struct DMMVIDPNTARGETMODESET *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 24;
  *((_BYTE *)this + 192) = 0;
  v2 = 0LL;
  v3 = (char *)*((_QWORD *)this + 3);
  if ( v3 != v1 )
    v2 = v3 - 8;
  while ( v2 )
  {
    v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v2 + 11));
    *((_BYTE *)v5 + 136) = 0;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
    v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v2 + 12));
    *((_BYTE *)v5 + 136) = 0;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v5, 0LL);
    v4 = (char *)*((_QWORD *)v2 + 1);
    v2 = v4 - 8;
    if ( v4 == v1 )
      v2 = 0LL;
  }
}
