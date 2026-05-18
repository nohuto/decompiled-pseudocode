/*
 * XREFs of sub_1800552D0 @ 0x1800552D0
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 *     sub_180055C9C @ 0x180055C9C (sub_180055C9C.c)
 */

int __fastcall sub_1800552D0(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180012AC4(a1 + 128);
  v5 = *(__int64 **)(a1 + 48);
  v6 = *(__int64 **)(a1 + 40);
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = v6 + 2;
      if ( *v6 == *a2 )
        break;
      v6 += 2;
      if ( v7 == v5 )
        return Mtx_unlock(v2);
    }
    unknown_libname_7(v7, v5, v6);
    sub_180032460(*(_QWORD *)(a1 + 48) - 16LL);
    *(_QWORD *)(a1 + 48) -= 16LL;
    sub_1800162D0(&v9, a2);
    sub_180055C9C(a1 + 88, &v9);
    if ( v10 )
      sub_180010F00(v10);
  }
  return Mtx_unlock(v2);
}
