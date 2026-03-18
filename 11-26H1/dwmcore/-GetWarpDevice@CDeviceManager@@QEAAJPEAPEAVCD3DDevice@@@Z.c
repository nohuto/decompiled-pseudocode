/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180295580
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180127FC4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C (-Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180295768 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetWarpDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rcx
  __int64 i; // rax
  struct _LUID *WarpAdapterLuid; // rax
  int Device; // eax
  int v8; // edi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v10 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  for ( i = qword_1803DE688; i != (_QWORD)xmmword_1803DE690; i += 16LL )
  {
    v4 = *(_QWORD **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 1124LL) && v4[70] )
    {
      *a2 = (struct CD3DDevice *)v4;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 1));
      goto LABEL_10;
    }
  }
  WarpAdapterLuid = (struct _LUID *)CDisplayManager::GetWarpAdapterLuid((CDisplayManager *)v4);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *WarpAdapterLuid, a2);
  v8 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A2520, 2u, Device, 0x154u, 0LL);
  v2 = v8;
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v2;
}
