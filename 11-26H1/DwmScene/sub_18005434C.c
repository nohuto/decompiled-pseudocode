/*
 * XREFs of sub_18005434C @ 0x18005434C
 * Callers:
 *     sub_180028640 @ 0x180028640 (sub_180028640.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005434C(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  int v4; // xmm0_4
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // r8d
  __int64 v10; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v10 = a2;
  if ( *(float *)&a2 < 0.0 || (v4 = HIDWORD(v10), *((float *)&v10 + 1) < 0.0) )
  {
    sub_180011CC4(v12, "Attempted to set an active size with a negative component");
    v8 = (unsigned int)sub_180011CC4(
                         v11,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v8, v9, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v4;
  v5 = *(__int64 **)(a1 + 112);
  v6 = *v5;
  v10 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    sub_180054298(*(_QWORD *)(v6 + 40), a2);
    result = sub_18001D6F4(&v10, v7);
    v6 = v10;
  }
  return result;
}
