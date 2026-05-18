/*
 * XREFs of sub_1800D3520 @ 0x1800D3520
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_1800D3520()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  v1 = sub_18001C514(56LL);
  try
  {
    v2 = (_QWORD *)v1;
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      sub_180011CC4(v4, "Parsing configuration from JSON string is not supported");
      v0 = sub_18001C72C(v2, (__int64)v4, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18001DCFC(&qword_1801BD608, 3);
    throw;
  }
}
