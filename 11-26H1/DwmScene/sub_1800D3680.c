/*
 * XREFs of sub_1800D3680 @ 0x1800D3680
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_1800D3680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-30h] BYREF

  pExceptionObject[1] = a3;
  pExceptionObject[3] = a4;
  v4 = 0LL;
  v5 = (_QWORD *)sub_18001C514(56LL);
  pExceptionObject[2] = v5;
  if ( v5 )
  {
    sub_180011CC4(v7, "Serializing configuration to JSON string is not supported");
    v4 = sub_18001C72C(v5, (__int64)v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
