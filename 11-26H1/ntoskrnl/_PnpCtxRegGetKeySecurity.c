/*
 * XREFs of _PnpCtxRegGetKeySecurity @ 0x14089C388
 * Callers:
 *     PnpRegCopyKeySecurity @ 0x1407A7418 (PnpRegCopyKeySecurity.c)
 * Callees:
 *     _RegRtlGetKeySecurity @ 0x1408A3D08 (_RegRtlGetKeySecurity.c)
 */

__int64 __fastcall PnpCtxRegGetKeySecurity(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return RegRtlGetKeySecurity(a2, a3, a4, a5);
}
