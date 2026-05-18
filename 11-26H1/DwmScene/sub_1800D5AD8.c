/*
 * XREFs of sub_1800D5AD8 @ 0x1800D5AD8
 * Callers:
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800D60D8 @ 0x1800D60D8 (sub_1800D60D8.c)
 *     sub_1800D72F8 @ 0x1800D72F8 (sub_1800D72F8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5AD8(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r9
  int v12; // r11d
  _QWORD *v13; // r10
  unsigned __int8 v14; // di
  int v15; // r14d
  __int64 v16; // rbx
  unsigned int v17; // r15d
  __int64 result; // rax
  unsigned int v19; // esi
  unsigned int v20; // r8d
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  char v23; // al
  unsigned int v24; // [rsp+40h] [rbp-D8h]
  _QWORD v27[4]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+98h] [rbp-80h] BYREF

  v10 = a3;
  v12 = a1;
  v13 = a7;
  if ( a6 == 1 )
  {
    v14 = 1;
    v15 = 1;
  }
  else
  {
    v14 = 0;
    v15 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  result = 2 * (unsigned int)v14;
  v19 = a4 - result;
  while ( (unsigned int)v16 < v19 )
  {
    v20 = *(_DWORD *)(v10 + 4 * v16);
    v24 = v20;
    v21 = *(_DWORD *)(v10 + 4LL * (unsigned int)(v16 + 1));
    v22 = *(_DWORD *)(v10 + 4LL * (unsigned int)(v16 + 2));
    if ( v20 >= a2 || v21 >= a2 || v22 >= a2 )
    {
      sub_180011CC4(v27, "Index out of range while computing tangents");
      sub_1800D60D8(pExceptionObject, v27);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v12 = a1;
      }
      v20 = v24;
    }
    v23 = v14 && (v16 & 1) != 0;
    result = sub_1800D72F8(v12, a5, v20, v21, v22, v23, a8, a9);
    v16 = (unsigned int)(v15 + v16);
    ++v17;
    v10 = a3;
    v13 = a7;
    v12 = a1;
  }
  return result;
}
