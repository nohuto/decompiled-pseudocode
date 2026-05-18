/*
 * XREFs of sub_180029E54 @ 0x180029E54
 * Callers:
 *     sub_18002D5DC @ 0x18002D5DC (sub_18002D5DC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18004016C @ 0x18004016C (sub_18004016C.c)
 *     sub_1800401E4 @ 0x1800401E4 (sub_1800401E4.c)
 *     sub_180040308 @ 0x180040308 (sub_180040308.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_180040F4C @ 0x180040F4C (sub_180040F4C.c)
 *     sub_18005EDBC @ 0x18005EDBC (sub_18005EDBC.c)
 *     sub_18005EEF8 @ 0x18005EEF8 (sub_18005EEF8.c)
 *     sub_18005F034 @ 0x18005F034 (sub_18005F034.c)
 *     sub_18005F170 @ 0x18005F170 (sub_18005F170.c)
 *     sub_18005F2AC @ 0x18005F2AC (sub_18005F2AC.c)
 *     sub_18005F3E8 @ 0x18005F3E8 (sub_18005F3E8.c)
 *     sub_180063580 @ 0x180063580 (sub_180063580.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180029E54(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 && !(unsigned __int8)sub_18002A070(a1, 0LL) )
  {
    LOBYTE(v2) = 1;
    if ( !(unsigned __int8)sub_18002A070(a1, v2) )
    {
      sub_180011CC4(
        v6,
        "Lockable::VerifyReadAccess() -- SHARED OR EXCLUSIVE LOCK REQUIRED\n"
        "The requested operation requires that the current thread holds this lockable object's mutex lock for exclusive ("
        "read/write) or shared (read-only) access.\n");
      v3 = sub_180011CC4(
             v5,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
      sub_180029A30(pExceptionObject, (__int64)v3, v4, (__int64)v6);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
