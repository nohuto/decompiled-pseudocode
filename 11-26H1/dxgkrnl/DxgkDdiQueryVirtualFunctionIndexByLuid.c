/*
 * XREFs of DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x140217BB8
 * Callers:
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x140093090 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     DpiIovGetBackingResource @ 0x14024FC80 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x14024FE20 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x14024FF20 (DpiIovGetMmioRanges.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionIndexByLuid(_QWORD *a1, int a2, struct _LUID *a3, _WORD *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v8; // ebx
  LONG HighPart; // [rsp+30h] [rbp-18h]
  DWORD LowPart; // [rsp+38h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[396], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v8 = 0;
    *a4 = *((_WORD *)VirtualGpuByLuid + 12);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1790;
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkDdiQueryVirtualFunctionIndexByLuid", (wchar_t *)L"%d %d %d\n", a4, HighPart, LowPart);
  }
  return v8;
}
