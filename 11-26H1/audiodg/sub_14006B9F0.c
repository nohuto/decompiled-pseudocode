/*
 * XREFs of sub_14006B9F0 @ 0x14006B9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140039FC0 @ 0x140039FC0 (sub_140039FC0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 */

__int64 __fastcall sub_14006B9F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edx
  _BYTE v12[176]; // [rsp+20h] [rbp-1C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp-118h] BYREF
  _UNKNOWN *retaddr; // [rsp+1E8h] [rbp+0h]

  v6 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v6, "SrvProcessSubmix_Initialize", 0LL);
  memset(v12, 0, sizeof(v12));
  v8 = sub_140039FC0(a2, v7, (__int64)v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = sub_14006E6C0(a1 + 16, v12, a3, 0LL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 62;
  }
  else
  {
    v10 = 59;
  }
  sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp", v8);
LABEL_7:
  sub_1400066EC(&PerformanceCount);
  return v9;
}
