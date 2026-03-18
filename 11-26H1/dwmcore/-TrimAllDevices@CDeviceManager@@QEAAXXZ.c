/*
 * XREFs of ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18021C2A0
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::TrimAllDevices(CDeviceManager *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx

  EnterCriticalSection(&CriticalSection);
  v1 = qword_1803DE688;
  v2 = xmmword_1803DE690;
  while ( v1 != v2 )
  {
    v3 = *(_QWORD *)v1;
    if ( !*(_DWORD *)(*(_QWORD *)v1 + 1124LL) && *(_BYTE *)(v3 + 1492) )
      CD3DDevice::Trim((union _SLIST_HEADER *)v3);
    v1 += 16LL;
  }
  LeaveCriticalSection(&CriticalSection);
}
