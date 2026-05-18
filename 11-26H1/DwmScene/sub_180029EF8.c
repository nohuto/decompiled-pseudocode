/*
 * XREFs of sub_180029EF8 @ 0x180029EF8
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180026AA0 @ 0x180026AA0 (sub_180026AA0.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_18002D748 @ 0x18002D748 (sub_18002D748.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 *     sub_18004025C @ 0x18004025C (sub_18004025C.c)
 *     sub_1800407E0 @ 0x1800407E0 (sub_1800407E0.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 *     sub_1800417BC @ 0x1800417BC (sub_1800417BC.c)
 *     sub_180042FF0 @ 0x180042FF0 (sub_180042FF0.c)
 *     sub_180049A20 @ 0x180049A20 (sub_180049A20.c)
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005D174 @ 0x18005D174 (sub_18005D174.c)
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18006F058 @ 0x18006F058 (sub_18006F058.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_1800823B4 @ 0x1800823B4 (sub_1800823B4.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 *     sub_1800BC140 @ 0x1800BC140 (sub_1800BC140.c)
 *     sub_1800BD1F0 @ 0x1800BD1F0 (sub_1800BD1F0.c)
 *     sub_1800BD230 @ 0x1800BD230 (sub_1800BD230.c)
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180029EF8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned __int8)sub_18002A070(a1, a2) )
    {
      sub_180011CC4(
        v5,
        "Lockable::VerifyWriteAccess() -- EXCLUSIVE LOCK REQUIRED\n"
        "The requested operation requires that the current thread holds this lockable object's mutex lock exclusive (read"
        "/write) access.\n"
        "To acquire exclusive lock from C++, call Lockable::GetExclusiveLock() and hold the lock via: auto lock(object->G"
        "etExclusiveLock()) { ... }\n"
        "To acquire exclusive lock from C#, call Lockable.GetExclusiveLock() and hold the lock via: using (object.GetExcl"
        "usiveLock()) { ... }\n");
      v2 = sub_180011CC4(
             v4,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
      sub_180029A30(pExceptionObject, (__int64)v2, v3, (__int64)v5);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
