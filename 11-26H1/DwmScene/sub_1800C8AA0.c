/*
 * XREFs of sub_1800C8AA0 @ 0x1800C8AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18007F6A4 @ 0x18007F6A4 (sub_18007F6A4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C8AA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rsi
  __int128 *v7; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  __int64 v20; // [rsp+88h] [rbp+28h] BYREF

  LODWORD(v19) = 0;
  v3 = *a2;
  if ( *a2 )
  {
    LODWORD(v19) = *(_DWORD *)(a1 + 88);
    sub_18007F6A4((__int64 *)(v3 + 144), (__int64)&v20, &v19);
    v4 = v20;
    if ( v20 == *(_QWORD *)(v3 + 144) )
    {
      *((_QWORD *)&v14 + 1) = 0LL;
      v6 = 0LL;
    }
    else
    {
      v5 = *(_QWORD *)(v20 + 48);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      *((_QWORD *)&v14 + 1) = *(_QWORD *)(v4 + 48);
      v6 = *(_QWORD *)(v4 + 40);
    }
    v7 = &v14;
    v8 = 1;
  }
  else
  {
    v16 = 0LL;
    v7 = (__int128 *)&v15;
    v8 = 2;
    v6 = 0LL;
  }
  v17 = v6;
  v9 = *((_QWORD *)v7 + 1);
  v18 = v9;
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)v7 + 1) = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v16 )
      sub_180010EC8(v16);
  }
  if ( (v8 & 1) != 0 && *((_QWORD *)&v14 + 1) )
    sub_180010EC8(*((__int64 *)&v14 + 1));
  v10 = _RTDynamicCast(
          v6,
          0LL,
          &Spectre::Engine::DeviceVertexLayout `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::VertexLayoutD3D11 `RTTI Type Descriptor',
          0);
  if ( v10 )
  {
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *(_QWORD *)&v14 = v10;
    v11 = v9;
    *((_QWORD *)&v14 + 1) = v9;
  }
  else
  {
    v14 = 0LL;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v10 = 0LL;
  }
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 144);
    v19 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    sub_18000F938(&v19);
  }
  else
  {
    v12 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v12);
  if ( v11 )
    result = sub_180010EC8(v11);
  if ( v9 )
    return sub_180010EC8(v9);
  return result;
}
