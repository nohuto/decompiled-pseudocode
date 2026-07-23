/*
 * XREFs of WheaPrmTranslateDimmAddress @ 0x1406DB630
 * Callers:
 *     <none>
 * Callees:
 *     WheapPrmTranslateDimmAddressAmd @ 0x1406DB824 (WheapPrmTranslateDimmAddressAmd.c)
 *     WheapPrmTranslateDimmAddressIntel @ 0x1406DB8D0 (WheapPrmTranslateDimmAddressIntel.c)
 */

__int64 __fastcall WheaPrmTranslateDimmAddress(__int64 a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CpuVendor; // cl

  result = 3221225659LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 3221225473LL;
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 2 )
    return WheapPrmTranslateDimmAddressIntel(a1);
  if ( CpuVendor == 1 )
    return WheapPrmTranslateDimmAddressAmd(a1);
  return result;
}
