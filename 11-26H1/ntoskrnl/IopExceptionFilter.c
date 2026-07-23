/*
 * XREFs of IopExceptionFilter @ 0x1405CD104
 * Callers:
 *     IopProcessBufferedIoCompletion @ 0x1404108F0 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x1404D6640 (NtSubmitIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14079ACD4 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x14079B080 (IopIoRingDispatchRegisterFiles.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x14079BDF0 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x14079BEF0 (NtSetInformationIoRing.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     IopIoRingGetBuffer @ 0x140B02CDC (IopIoRingGetBuffer.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
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
