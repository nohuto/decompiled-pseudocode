/*
 * XREFs of sub_1401B7240 @ 0x1401B7240
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 */

__int64 __fastcall sub_1401B7240(__int64 a1, __int64 a2, int a3, int a4, ULONG_PTR a5, char a6)
{
  __int64 result; // rax

  result = StorPortGetDeviceBase(a1, a2, a3, a4, a5, a6);
  if ( !result )
    KeBugCheckEx(0xF1u, 0x2003uLL, 0LL, 0LL, 0LL);
  return result;
}
