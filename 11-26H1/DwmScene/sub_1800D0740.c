/*
 * XREFs of sub_1800D0740 @ 0x1800D0740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 *     sub_1800D060C @ 0x1800D060C (sub_1800D060C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D0740(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v10[4]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+50h] [rbp+17h] BYREF

  if ( !*(_QWORD *)(a3 + 16) )
  {
    sub_180011CC4(v10, "IConfigurationManager::GetDomain() -- empty string is not a valid property name");
    sub_18001E5F8(pExceptionObject, (__int64)v10);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  if ( *(_WORD *)sub_1800141BC(a3) == 47 )
  {
    v6 = sub_1800141BC(v5);
    v8 = sub_1800D060C(v6, v7);
    if ( v8 == -1 )
    {
      sub_180011CC4(
        v10,
        "IConfigurationManager::GetDomain() -- property domain must begin and end with a slash, e.g. /CustomDomain/Category.Value");
      sub_18001E5F8(pExceptionObject, (__int64)v10);
      throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
    }
    sub_18001FC54(a3, (__int64)v10, 1uLL, v8 - 1);
    sub_18001F348((__int64)a2);
    sub_180014244((__int64)v10);
  }
  else
  {
    sub_180013440(a2, (__int64)&unk_1801CD980);
  }
  return a2;
}
