/*
 * XREFs of VslSetPlaceholderPages @ 0x14036B140
 * Callers:
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslSetPlaceholderPages(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]

  v5 = a3;
  v6 = a4;
  memset_0(v9, 0, 0x68uLL);
  v10 = a1;
  v11 = a2;
  v12 = v5;
  v13 = v6;
  return VslpEnterIumSecureMode(2u, 0x110u, 0, (__int64)v9);
}
