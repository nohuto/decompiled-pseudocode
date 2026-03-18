/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x14042BAD8
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x14005E974 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int16 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(__int64 a1)
{
  char v2; // bl
  __int16 result; // ax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v8) = 0;
  v2 = 1;
  if ( (int)GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v8) >= 0 )
  {
    result = v8;
  }
  else
  {
    WdLogSingleEntry1(1LL);
    result = 0;
    WdLogGlobalForLineNumber = 839;
  }
  if ( !result )
  {
    Global = DXGGLOBAL::GetGlobal();
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v8);
    v6 = v5;
    if ( v5 )
    {
      v7 = *((_QWORD *)v5 + 395);
      if ( (!*(_BYTE *)(v7 + 289) || !*(_BYTE *)(v7 + 290))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v2 = 0;
      }
      DXGADAPTER::ReleaseReference(v6);
    }
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a1 + 28)) )
    {
      if ( !*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) )
        return 3;
      else
        return 4 - (v2 != 0);
    }
    else
    {
      return 4;
    }
  }
  return result;
}
