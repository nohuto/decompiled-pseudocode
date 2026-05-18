/*
 * XREFs of sub_1800C7B60 @ 0x1800C7B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180052608 @ 0x180052608 (sub_180052608.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800C7B60(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbx
  int v12; // edi
  int v13; // edi
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v17 = 0LL;
  if ( *a3 )
  {
    sub_180052608(*a3, &v14, *(_DWORD *)(a1 + 88));
    v8 = _RTDynamicCast(
           v14,
           0LL,
           &Spectre::Engine::DeviceSampler `RTTI Type Descriptor',
           &Spectre::Engine::D3D11::SamplerD3D11 `RTTI Type Descriptor',
           0);
    v9 = v15;
    if ( v8 )
    {
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v10 = v9;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = *(_QWORD *)(v8 + 184);
    v14 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v17 = v11;
    result = (_UNKNOWN **)sub_18000F938(&v14);
    if ( v10 )
      result = (_UNKNOWN **)sub_180010EC8(v10);
    if ( v9 )
      result = (_UNKNOWN **)sub_180010EC8(v9);
  }
  v12 = a2 - 1;
  if ( !v12 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v17);
  v13 = v12 - 3;
  if ( !v13 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v17);
  if ( v13 == 1 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v17);
  return result;
}
