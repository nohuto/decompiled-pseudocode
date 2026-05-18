/*
 * XREFs of sub_1800D5CA0 @ 0x1800D5CA0
 * Callers:
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800D60D8 @ 0x1800D60D8 (sub_1800D60D8.c)
 *     sub_1800D64F4 @ 0x1800D64F4 (sub_1800D64F4.c)
 *     sub_1800D72F8 @ 0x1800D72F8 (sub_1800D72F8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5CA0(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r10d
  _QWORD *v13; // r9
  __int64 v14; // r11
  unsigned __int8 v15; // si
  __int64 v16; // rbx
  unsigned int v17; // r13d
  __int64 result; // rax
  unsigned int v19; // ebp
  unsigned int v20; // eax
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  char v23; // di
  int v24; // ecx
  unsigned int v25; // [rsp+40h] [rbp-D8h]
  int v26; // [rsp+44h] [rbp-D4h]
  __int64 v28; // [rsp+70h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v28 = a3;
  v12 = a5;
  v13 = a7;
  v14 = a9;
  if ( a6 == 1 )
  {
    v15 = 1;
    v26 = 1;
  }
  else
  {
    v15 = 0;
    v26 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  result = 2 * (unsigned int)v15;
  v19 = a4 - result;
  while ( (unsigned int)v16 < v19 )
  {
    v20 = *(unsigned __int16 *)(a3 + 2 * v16);
    v25 = v20;
    if ( v20 >= a2
      || (v21 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v16 + 1)), v21 >= a2)
      || (v22 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v16 + 2)), v22 >= a2) )
    {
      sub_180011CC4(v29, "Index out of range while computing tangents and normals");
      sub_1800D60D8(pExceptionObject, v29);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v12 = a5;
        v14 = a9;
      }
      v20 = v25;
    }
    v23 = v15 && (v16 & 1) != 0;
    sub_1800D72F8(a1, v12, v20, v21, v22, v23, v14, a10);
    result = sub_1800D64F4(v24, v25, v21, v22, v23, a8);
    v16 = (unsigned int)(v26 + v16);
    ++v17;
    a3 = v28;
    v13 = a7;
    v12 = a5;
    v14 = a9;
  }
  return result;
}
