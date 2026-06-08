/*
 * XREFs of ValidatePStateCapability @ 0x140024310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000E620 (GetCpuIdInfo.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  bool v6; // zf
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  v5 = -1073741637;
  v9 = 0LL;
  GetCpuIdInfo(0x80000000, &v8);
  if ( (unsigned int)v8 < 7 || (GetCpuIdInfo(0x80000007, &v9), (SBYTE12(v9) & 0x80u) == 0) )
  {
    v6 = *a1 == 1;
  }
  else
  {
    if ( *a1 == 1 )
      return 0;
    v6 = *a1 == 127;
  }
  if ( !v6 )
  {
    *a3 |= 0x20u;
    return v5;
  }
  return 0;
}
