/*
 * XREFs of DxgkGetDeviceFamily @ 0x14041CFB4
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDeviceFamily(_DWORD *a1)
{
  if ( a1 )
    *a1 = dword_140169444;
  return (unsigned int)dword_140169440;
}
