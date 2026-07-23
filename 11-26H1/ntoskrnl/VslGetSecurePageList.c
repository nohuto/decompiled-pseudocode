/*
 * XREFs of VslGetSecurePageList @ 0x1405C583C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405C1894 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405C1A10 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1405C323C (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslGetSecurePageList(unsigned __int8 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+30h] [rbp-88h]
  int v12; // [rsp+38h] [rbp-80h]

  v5 = a1;
  memset_0(v9, 0, 0x68uLL);
  v10 = v5;
  v11 = a2;
  result = VslpEnterIumSecureMode(2u, 0x802u, 0, (__int64)v9);
  if ( (int)result >= 0 )
  {
    *a4 = v11;
    if ( a3 )
      *a3 = v12;
  }
  return result;
}
