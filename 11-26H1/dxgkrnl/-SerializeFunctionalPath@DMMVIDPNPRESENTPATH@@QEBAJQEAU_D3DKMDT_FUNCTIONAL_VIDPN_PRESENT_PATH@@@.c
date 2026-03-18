/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x14018E62C
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x14038452C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140065448 (-Serialize@DMMVIDPNTARGETMODE@@QEBAXQEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1400967B8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140386274 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNTARGET **this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  struct DMMVIDPNTARGETMODESET *v4; // rsi
  DMMVIDPNSOURCEMODE *v5; // rcx
  DMMVIDPNTARGETMODE *v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 429;
  }
  DMMVIDPNPRESENTPATH::Serialize((DMMVIDPNPRESENTPATH *)this, a2);
  v4 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
  v8 = v4;
  v5 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v4 + 18);
  if ( !v5 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this[11] + 6), this);
    WdLogGlobalForLineNumber = 446;
    if ( v4 )
      ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v4 + 88));
    return 1075708679LL;
  }
  DMMVIDPNSOURCEMODE::Serialize(v5, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v8, 0LL);
  v8 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v7 = (DMMVIDPNTARGETMODE *)*((_QWORD *)v8 + 18);
  if ( !v7 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this[12] + 6), this);
    WdLogGlobalForLineNumber = 464;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v8, 0LL);
    return 1075708679LL;
  }
  DMMVIDPNTARGETMODE::Serialize(
    v7,
    (struct _D3DKMDT_VIDPN_TARGET_MODE *const)&a2[1].VisibleFromActiveBROffset.cy,
    (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a2[1].CopyProtection.OEMCopyProtection[44],
    (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&a2[1].CopyProtection.OEMCopyProtection[48]);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v8, 0LL);
  *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[52] = *((_WORD *)this + 54);
  return 0LL;
}
