/*
 * XREFs of sub_18003608C @ 0x18003608C
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_18003608C(__int64 a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v7; // [rsp+C8h] [rbp-70h]
  __int64 v8; // [rsp+D0h] [rbp-68h]
  __int128 v9; // [rsp+D8h] [rbp-60h]
  __int128 v10; // [rsp+E8h] [rbp-50h]
  __int128 v11; // [rsp+F8h] [rbp-40h]
  __int64 v12; // [rsp+108h] [rbp-30h]
  __int64 v13; // [rsp+110h] [rbp-28h]
  __int64 v14; // [rsp+118h] [rbp-20h]
  __int64 v15; // [rsp+120h] [rbp-18h]
  int v16; // [rsp+128h] [rbp-10h]
  _BYTE v17[16]; // [rsp+138h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+18h] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(a1 + 496) )
  {
    result = (_UNKNOWN **)_RTDynamicCast(
                            *a2,
                            0LL,
                            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
                            0);
    if ( !result )
    {
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0;
      sub_180029DD4(*a2 + 24LL, (__int64)v17);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v6);
      sub_180029B0C((__int64)v17);
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
    }
    v5 = a2[1];
  }
  else
  {
    v5 = a2[1];
  }
  if ( v5 )
    return (_UNKNOWN **)sub_180010EC8(v5);
  return result;
}
