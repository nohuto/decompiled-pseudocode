/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140358108 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14036EF20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B09C (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  __int64 v3; // rbx
  int v4; // r10d
  int v5; // edx
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  int *result; // rax
  bool v10; // zf

  v3 = *((_QWORD *)this + 396);
  v4 = 0;
  if ( *((int *)this + 694) >= 8704
    && *((_DWORD *)this + 580) >= 0x7007u
    && *((_QWORD *)this + 145)
    && (!v3 || *((_QWORD *)this + 129)) )
  {
    v4 = 512;
  }
  v5 = (v4 | (v3 != 0) | (*((_QWORD *)this + 395) != 0LL ? 2 : 0) | *((_DWORD *)this + 111) & 4 | (8
                                                                                                 * (*((_DWORD *)this + 111) & 1)) | (*((_DWORD *)this + 111) >> 2) & 0x40 | (*((_BYTE *)this + 209) != 0 ? 0x80 : 0) | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0)) ^ (32 * ((16 * (*((_DWORD *)this + 754) & 2)) ^ *((_BYTE *)this + 2988) & 1));
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(16 * *((_BYTE *)this + 2983))) & 0x10;
  v7 = *((_DWORD *)this + 754) >> 3;
  v8 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(32 * *((_DWORD *)this + 754))) & 0x4000 ^ ((unsigned __int16)(v6 ^ (v6 ^ (32 * *((_DWORD *)this + 754))) & 0x4000) ^ (unsigned __int16)(*((_WORD *)this + 2550) << 15)) & 0x8000;
  *a2 = v8;
  if ( (v7 & 1) == 0 )
    return a2;
  *a2 = v8 | 0x800;
  if ( (*((_DWORD *)this + 627) & 0x80u) != 0 )
    return a2;
  v10 = DXGADAPTER::IsGpuVirtualAddressingSupported(this) == 0;
  result = a2;
  if ( v10 )
    *a2 |= 0x1000u;
  return result;
}
