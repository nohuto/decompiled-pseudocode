/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1402674FC
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1402DD7D8 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x14006D424 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1401B1E4C (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  ADAPTER_DISPLAY *v4; // rdi
  D3DDDI_VIDEO_PRESENT_TARGET_ID v5; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v4 = *(ADAPTER_DISPLAY **)(v3 + 8);
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 576;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 216LL) + 64LL) + 40LL) + 28LL) < 0x700Au )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 577;
  }
  if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v4, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v10.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v6 = *((_DWORD *)this + 43);
  v10.TargetId = v5;
  v10.CopyProtectionType = v6;
  if ( v6 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v10.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v10.APSTriggerBits = 0;
  v7 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection(v4, &v10);
  v8 = v7;
  if ( v7 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 603;
    return result;
  }
  if ( v7 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v7);
  result = v8;
  WdLogGlobalForLineNumber = 609;
  return result;
}
