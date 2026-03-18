/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18013557C
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180134D3C (--1CD3DDevice@@MEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x18029972C (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801355B0 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18013686C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD3DDevice *this)
{
  CD2DContext::DestroyDeviceResources((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyDeviceResources((CD3DDevice *)((char *)this + 1136));
  CD3DDevice::Trim(this);
}
