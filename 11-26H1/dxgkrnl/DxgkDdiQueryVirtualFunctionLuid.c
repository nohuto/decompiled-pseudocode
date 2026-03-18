/*
 * XREFs of DxgkDdiQueryVirtualFunctionLuid @ 0x140217C6C
 * Callers:
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x140093120 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x14023A418 (DpiMitigatedRangeUpdate.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x140215878 (-QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUAL.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionLuid(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int VirtualFunctionLuid; // ebx
  unsigned int v9; // [rsp+28h] [rbp-20h]
  unsigned int v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v10[0] = a3;
  v10[1] = 0;
  v6 = a1[396];
  v11 = a4;
  VirtualFunctionLuid = ADAPTER_RENDER::QueryVirtualFunctionLuid(v6, a2, v10);
  if ( bTracingEnabled )
  {
    v9 = a3;
    VgpuTrace(1, VirtualFunctionLuid, a1, L"DxgkDdiQueryVirtualFunctionLuid", (wchar_t *)L"%d", v9);
  }
  return VirtualFunctionLuid;
}
