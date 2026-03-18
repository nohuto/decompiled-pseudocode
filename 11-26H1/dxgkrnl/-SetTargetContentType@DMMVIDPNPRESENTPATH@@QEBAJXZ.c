/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1402676AC
 * Callers:
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14025C238 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1401B20D4 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  ADAPTER_DISPLAY *v4; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  _DXGKARG_SETTARGETCONTENTTYPE v9; // [rsp+30h] [rbp+8h] BYREF

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
    WdLogGlobalForLineNumber = 536;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 216LL) + 64LL) + 40LL) + 28LL) < 0x700Au )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 537;
  }
  if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v4, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v5 = *((_DWORD *)this + 41);
  v9.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v9.ContentType = v5;
  v6 = ADAPTER_DISPLAY::DdiSetTargetContentType(v4, &v9);
  v7 = v6;
  if ( v6 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 552;
    return result;
  }
  if ( v6 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v6);
  result = v7;
  WdLogGlobalForLineNumber = 558;
  return result;
}
