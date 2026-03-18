/*
 * XREFs of ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ @ 0x1801816E4
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 * Callees:
 *     ?SimulateDeviceLost@CD3DDevice@@AEAAXXZ @ 0x180298238 (-SimulateDeviceLost@CD3DDevice@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::CheckForDeviceLost(CD3DDevice *this)
{
  int v2; // eax

  if ( !*((_DWORD *)this + 281) )
  {
    if ( g_simulateDeviceLost )
      CD3DDevice::SimulateDeviceLost(this);
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 68) + 312LL))(*((_QWORD *)this + 68));
    if ( v2 < 0 && !*((_DWORD *)this + 281) )
      *((_DWORD *)this + 281) = v2;
  }
}
