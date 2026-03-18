/*
 * XREFs of ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14004FBAC
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140097080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140387630 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x140387C28 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetScalingSupport(
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a2)
{
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 856;
  }
  this[30] = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 0x10) != 0 )
  {
    WdLogSingleEntry0(3LL);
    *(_DWORD *)&this[30] &= ~0x10u;
    WdLogGlobalForLineNumber = 869;
  }
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    *(_DWORD *)&this[30] &= ~8u;
    WdLogGlobalForLineNumber = 881;
  }
}
