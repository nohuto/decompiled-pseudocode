/*
 * XREFs of ViSetIoBuildRequestFlag @ 0x140642A10
 * Callers:
 *     ViIovIoBuildDeviceIoControlRequest_Exit @ 0x140642960 (ViIovIoBuildDeviceIoControlRequest_Exit.c)
 *     ViIovIoBuildSynchronousFsdRequest_Exit @ 0x140642980 (ViIovIoBuildSynchronousFsdRequest_Exit.c)
 *     ViIovIoBuildAsynchronousFsdRequest_Exit @ 0x140C2B0F0 (ViIovIoBuildAsynchronousFsdRequest_Exit.c)
 * Callees:
 *     VfPacketReleaseLock @ 0x140C393E4 (VfPacketReleaseLock.c)
 *     VfPacketFindAndLock @ 0x140C45AD8 (VfPacketFindAndLock.c)
 */

__int64 __fastcall ViSetIoBuildRequestFlag(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  char v5; // al

  result = VfPacketFindAndLock();
  v3 = result;
  if ( result )
  {
    *(_DWORD *)(result + 56) |= 0x1000u;
    if ( (*(_BYTE *)(a1 + 16) & 0x70) == 0x70 )
    {
      v4 = *(_QWORD *)(a1 + 184);
      v5 = *(_BYTE *)(v4 - 72);
      if ( v5 == 14 || v5 == 15 )
      {
        *(_QWORD *)(v3 + 200) = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v3 + 208) = *(_DWORD *)(v4 - 64);
      }
    }
    return VfPacketReleaseLock(v3);
  }
  return result;
}
