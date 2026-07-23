/*
 * XREFs of _PnpCtxRegSetKeySecurity @ 0x14089C3D8
 * Callers:
 *     PnpRegCopyKeySecurity @ 0x1407A7418 (PnpRegCopyKeySecurity.c)
 * Callees:
 *     _RegRtlSetKeySecurity @ 0x1408A3F2C (_RegRtlSetKeySecurity.c)
 */

__int64 __fastcall PnpCtxRegSetKeySecurity(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return RegRtlSetKeySecurity(a2, a3, a4);
}
