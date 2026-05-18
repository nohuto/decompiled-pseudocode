/*
 * XREFs of sub_1800D47E0 @ 0x1800D47E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180025EA0 @ 0x180025EA0 (sub_180025EA0.c)
 *     sub_1800D2A48 @ 0x1800D2A48 (sub_1800D2A48.c)
 *     sub_1800D45E8 @ 0x1800D45E8 (sub_1800D45E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D47E0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  char v3; // si
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  sub_1800D45E8((__int64 *)&v10);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180012AC4(a1 + 8);
  v3 = *(_BYTE *)(a1 + 112);
  *(_BYTE *)(a1 + 112) = 1;
  v4 = a1 + 96;
  if ( &v10 != (_QWORD **)v4 )
  {
    v5 = v10;
    v10 = *(_QWORD **)v4;
    *(_QWORD *)v4 = v5;
    v6 = v11;
    v11 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = v6;
  }
  Mtx_unlock(v2);
  if ( !v3 )
  {
    v7 = *v10;
    v12 = *v10;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      sub_180025EA0(v7 + 40);
      sub_18001D6F4(&v12, v8);
      v7 = v12;
    }
  }
  return sub_1800D2A48((void **)&v10);
}
