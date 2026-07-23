/*
 * XREFs of VslDebugProtectSecureProcessMemory @ 0x140B6D320
 * Callers:
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslDebugProtectSecureProcessMemory(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int64 v10; // rax
  __int64 result; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-90h]
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h]

  memset_0(v12, 0, 0x68uLL);
  v10 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
  v14 = a2;
  v13 = v10;
  v15 = *a3;
  v16 = *a4;
  v17 = a5;
  result = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v12);
  if ( (int)result >= 0 )
  {
    *a3 = v15;
    *a4 = v16;
    *a6 = v17;
  }
  return result;
}
