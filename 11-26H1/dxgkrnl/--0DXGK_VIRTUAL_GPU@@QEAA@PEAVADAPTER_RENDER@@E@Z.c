/*
 * XREFs of ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x14018B640
 * Callers:
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x14018B568 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(
        DXGK_VIRTUAL_GPU *this,
        struct ADAPTER_RENDER *a2,
        __int64 a3)
{
  __int64 VirtualGpuManager; // rax
  __int64 v4; // r9
  DXGK_VIRTUAL_GPU *result; // rax
  char v6; // r8

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 29;
  *((_DWORD *)this + 20) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(*((_QWORD *)this + 1), (_BYTE)a3 != 0, a3, this);
  *(_QWORD *)(v4 + 112) = VirtualGpuManager;
  result = (DXGK_VIRTUAL_GPU *)v4;
  *(_BYTE *)(v4 + 152) = v6;
  *(_BYTE *)(v4 + 156) = 1;
  return result;
}
