/*
 * XREFs of sub_1800CCEE0 @ 0x1800CCEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800BF218 @ 0x1800BF218 (sub_1800BF218.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CCEE0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+28h]
  _QWORD *v14; // [rsp+70h] [rbp+30h]

  v14 = a3;
  v13 = a2;
  v6 = _RTDynamicCast(
         *a3,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    *(_QWORD *)&v11 = v6;
    *((_QWORD *)&v11 + 1) = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  sub_180011F5C((_QWORD *)(a1 + 120), (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_180010EC8(*((__int64 *)&v11 + 1));
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v7 = sub_1800BF218(&v11, a2);
    sub_180011F5C((_QWORD *)(a1 + 104), v7);
    if ( *((_QWORD *)&v11 + 1) )
      sub_180010EC8(*((__int64 *)&v11 + 1));
  }
  sub_1800C5C48(*(_QWORD *)(a1 + 104), &v12);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 224LL))(v12, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  result = sub_18000F938(&v12);
  v9 = a2[1];
  if ( v9 )
    result = sub_180010EC8(v9);
  v10 = a3[1];
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
