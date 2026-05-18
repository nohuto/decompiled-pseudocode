/*
 * XREFs of sub_180055064 @ 0x180055064
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_180055064(_QWORD *a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  sub_180012AC4((__int64)(a1 + 16));
  v5 = a1[8];
  v6 = a1[9];
  while ( v5 != v6 )
  {
    v7 = *sub_1800382B8(v5, v13);
    v8 = *a2;
    if ( *((_QWORD *)&v13[0] + 1) )
      sub_180010EC8(*((__int64 *)&v13[0] + 1));
    if ( v7 == v8 )
      break;
    v5 += 16LL;
  }
  if ( v5 == a1[9] )
  {
    v13[0] = 0LL;
    v9 = a2[1];
    if ( v9 )
    {
      *(_QWORD *)&v13[0] = *a2;
      *((_QWORD *)&v13[0] + 1) = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    }
    v10 = a1[9];
    v11 = a1 + 8;
    if ( v10 == a1[10] )
      sub_180054650(v11, v10, v13);
    else
      sub_1800119A4((__int64)v11, v13);
    if ( *((_QWORD *)&v13[0] + 1) )
      sub_180010F00(*((volatile signed __int32 **)&v13[0] + 1));
  }
  return Mtx_unlock(v4);
}
