/*
 * XREFs of sub_1800D0658 @ 0x1800D0658
 * Callers:
 *     sub_1800D0700 @ 0x1800D0700 (sub_1800D0700.c)
 *     sub_1800D2B44 @ 0x1800D2B44 (sub_1800D2B44.c)
 *     sub_1800E5118 @ 0x1800E5118 (sub_1800E5118.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_1800D0658(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rdi
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  v2 = *(_QWORD ***)(a1 + 48);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_180010F00(v4);
      sub_18000E26C(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  result = sub_18000E26C(*(void **)(a1 + 48), 0x20uLL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    result = sub_180010EC8(v7);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010F00(v8);
  return result;
}
