/*
 * XREFs of ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401F6364
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  char *v6; // rbx
  char v7; // [rsp+28h] [rbp-40h]
  char v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+38h] [rbp-30h]
  char v10; // [rsp+50h] [rbp-18h]
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF

  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  if ( !RenderAdapterInfo )
  {
    if ( (int)DXGADAPTER::CreateHandle(*((DXGADAPTER **)a2 + 2), this, &v11) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3191;
      return 0LL;
    }
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  }
  v6 = (char *)RenderAdapterInfo + 72;
  if ( !*((_QWORD *)RenderAdapterInfo + 9) )
  {
    v10 = 1;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    if ( (int)ADAPTER_RENDER::CreateDevice(
                *((_QWORD *)RenderAdapterInfo + 10),
                (char *)RenderAdapterInfo + 72,
                0LL,
                3LL,
                0LL,
                v7,
                v8,
                v9,
                0LL,
                0LL,
                v10) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3213;
      return 0LL;
    }
  }
  return *(struct DXGDEVICE **)v6;
}
