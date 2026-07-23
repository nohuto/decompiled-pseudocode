/*
 * XREFs of _PnpCtxRegQueryKeyPathName @ 0x14089C3B4
 * Callers:
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 * Callees:
 *     _RegRtlQueryKeyPathName @ 0x1408A3D28 (_RegRtlQueryKeyPathName.c)
 */

__int64 __fastcall PnpCtxRegQueryKeyPathName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RegRtlQueryKeyPathName(a2, a3, a4);
}
