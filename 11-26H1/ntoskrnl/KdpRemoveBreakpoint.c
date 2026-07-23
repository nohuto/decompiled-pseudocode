/*
 * XREFs of KdpRemoveBreakpoint @ 0x140C1C9CC
 * Callers:
 *     KdpLowWriteContent @ 0x140C1C8F8 (KdpLowWriteContent.c)
 *     KdpSetOwedBreakpoints @ 0x140C1D5F0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1405E6E84 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x140C1C104 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpRemoveBreakpoint(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  int v4; // r10d
  int v5; // r8d
  int v7; // edx

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(v3 & ~*(unsigned __int8 *)(a1 + 37), v4, *(unsigned __int8 *)(a1 + 36), 5);
  if ( v5 < 0 )
    return 0LL;
  v7 = (*(_DWORD *)(a1 + 32) & 4) != 0 ? *(_DWORD *)(a1 + 32) | 5 : 0;
  *(_DWORD *)(a1 + 32) = v7;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) = v7 | 9;
  return 1LL;
}
