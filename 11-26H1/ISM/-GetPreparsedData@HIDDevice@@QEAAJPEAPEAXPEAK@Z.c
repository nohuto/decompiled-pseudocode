/*
 * XREFs of ?GetPreparsedData@HIDDevice@@QEAAJPEAPEAXPEAK@Z @ 0x1800DFEAC
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDevice::GetPreparsedData(HIDDevice *this, void **a2, unsigned int *a3)
{
  *a2 = (void *)*((_QWORD *)this + 6);
  if ( a3 )
    *a3 = *((_DWORD *)this + 14);
  return 0LL;
}
