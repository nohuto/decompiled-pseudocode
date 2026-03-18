/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x1405C3BA4
 * Callers:
 *     PspCreateSecureSystemProcess @ 0x140CD803C (PspCreateSecureSystemProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  __int64 result; // rax
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]
  ULONG_PTR v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]

  v0 = PsSecureSystemProcess;
  memset_0(v2, 0, 0x68uLL);
  v3 = *(_QWORD *)(v0 + 464);
  v4 = v0;
  result = VslpEnterIumSecureMode(2u, 5u, 0, (__int64)v2);
  if ( (int)result >= 0 )
    *(_QWORD *)(v0 + 368) = v5 | 1;
  return result;
}
