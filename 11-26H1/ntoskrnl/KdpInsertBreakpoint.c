/*
 * XREFs of KdpInsertBreakpoint @ 0x140C1C7DC
 * Callers:
 *     KdpAddBreakpoint @ 0x140C1C5CC (KdpAddBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140C1C840 (KdpLowRestoreBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140C1D5F0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1405E6E84 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x140C1C104 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpInsertBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  int v3; // r10d
  int v4; // r11d
  int v5; // ecx
  __int64 result; // rax

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(v3 & ~*(unsigned __int8 *)(v2 + 37), v4, *(unsigned __int8 *)(v2 + 36), 5);
  if ( v5 < 0 )
    return 0LL;
  result = 3LL;
  if ( v5 != 259 )
    return 1LL;
  return result;
}
