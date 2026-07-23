/*
 * XREFs of KeSetBitGroupMask @ 0x1404D3960
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     KiConfigureProcessorBlock @ 0x140BF9A10 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetBitGroupMask(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = a2 & 7;
  *(_BYTE *)(((unsigned __int64)a2 >> 3) + a1) |= 1 << result;
  return result;
}
