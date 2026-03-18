/*
 * XREFs of ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x18021F19C
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801AA88C (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDevice::NotifyNoSequencePresent(CD3DDevice *this, struct _LUID a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *((_QWORD *)this + 154);
  v4 = *((_QWORD *)this + 155);
  while ( v3 != v4 )
  {
    if ( *(_QWORD *)(v3 + 8) == a2 && *(_DWORD *)(v3 + 16) == a3 )
      ++*(_DWORD *)(v3 + 20);
    v3 += 24LL;
  }
}
