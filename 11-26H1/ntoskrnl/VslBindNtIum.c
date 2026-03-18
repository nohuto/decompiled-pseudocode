/*
 * XREFs of VslBindNtIum @ 0x140CB97F0
 * Callers:
 *     HvlEnableVsmCalls @ 0x140CB972C (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslBindNtIum()
{
  __int16 v0; // sp
  __int64 result; // rax
  _QWORD BaseAddress[21]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v4[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v5; // [rsp+E8h] [rbp-18h]
  __int64 v6; // [rsp+F0h] [rbp-10h]
  LONGLONG v7; // [rsp+F8h] [rbp-8h]
  LONGLONG v8; // [rsp+100h] [rbp+0h]

  v3 = 0x8000LL;
  memset_0(v4, 0, 0x68uLL);
  BaseAddress[0] = 53376LL;
  BaseAddress[1] = 384LL;
  BaseAddress[2] = 0LL;
  BaseAddress[3] = 52992LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 37928LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 68LL;
  BaseAddress[10] = 1808LL;
  BaseAddress[11] = 39968LL;
  BaseAddress[12] = 5LL;
  BaseAddress[13] = 1944LL;
  BaseAddress[14] = 0LL;
  BaseAddress[15] = 1216LL;
  BaseAddress[16] = 484LL;
  BaseAddress[17] = 486LL;
  BaseAddress[18] = 152LL;
  BaseAddress[19] = 796LL;
  BaseAddress[20] = 120LL;
  v7 = MmGetPhysicalAddress(BaseAddress).QuadPart >> 12;
  v5 = BaseAddress;
  v6 = 176LL;
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 176 > 0x1000 )
    v8 = MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12;
  result = VslpEnterIumSecureMode(2u, 0x10Fu, 0, (__int64)v4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x6Fu, (int)result, 0xFFuLL, 0LL, 0LL);
  return result;
}
