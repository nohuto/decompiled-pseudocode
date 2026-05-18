/*
 * XREFs of sub_1800D35F0 @ 0x1800D35F0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn sub_1800D35F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  pExceptionObject[2] = a3;
  v3 = 0LL;
  v4 = (_QWORD *)sub_18001C514(56LL);
  pExceptionObject[1] = v4;
  if ( v4 )
  {
    sub_180011CC4(v6, "Serializing configuration to JSON string is not supported");
    v3 = sub_18001C72C(v4, (__int64)v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
