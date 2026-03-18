/*
 * XREFs of IopExceptionFilter @ 0x1405CA834
 * Callers:
 *     IopProcessBufferedIoCompletion @ 0x1404111D0 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x1404DCF60 (NtSubmitIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x1407981A4 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140798550 (IopIoRingDispatchRegisterFiles.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x1407992C0 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x1407993C0 (NtSetInformationIoRing.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x140AE2060 (NtCopyFileChunk.c)
 *     IopIoRingGetBuffer @ 0x140B00FAC (IopIoRingGetBuffer.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 )
  {
    if ( (unsigned int)(*a1)[6] < 3 )
      return 1LL;
    v2 = (*a1)[12];
    *a2 = v2;
  }
  if ( v2 == -2147483646 )
    *a2 = -1073741115;
  return 1LL;
}
