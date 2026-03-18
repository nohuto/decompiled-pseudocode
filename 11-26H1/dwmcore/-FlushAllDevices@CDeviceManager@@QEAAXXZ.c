/*
 * XREFs of ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1801C6B6C
 * Callers:
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801C6B10 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801C6C94 (-Flush@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::FlushAllDevices(CDeviceManager *this)
{
  CD3DDevice **v1; // rbx
  CD3DDevice **v2; // rdi

  EnterCriticalSection(&CriticalSection);
  v1 = (CD3DDevice **)qword_1803DE688;
  v2 = (CD3DDevice **)xmmword_1803DE690;
  while ( v1 != v2 )
  {
    if ( !*((_DWORD *)*v1 + 281) )
      CD3DDevice::Flush(*v1);
    v1 += 2;
  }
  LeaveCriticalSection(&CriticalSection);
}
