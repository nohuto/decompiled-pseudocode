/*
 * XREFs of sub_1800D2D30 @ 0x1800D2D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180057514 @ 0x180057514 (sub_180057514.c)
 *     sub_1800D20B4 @ 0x1800D20B4 (sub_1800D20B4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D2D30(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 *v5; // rcx
  __int64 *i; // rax
  __int64 *j; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v13 = a1 + 160;
  sub_180012AC4(a1 + 160);
  v12 = 0;
  v5 = *(__int64 **)(a1 + 240);
  i = (__int64 *)*v5;
  if ( v5 != (__int64 *)*v5 )
  {
    if ( *((_BYTE *)v5 + 25) )
    {
      i = (__int64 *)v5[2];
    }
    else if ( *((_BYTE *)i + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)*i; i = (__int64 *)i[1] )
        v5 = i;
      if ( *((_BYTE *)v5 + 25) )
        i = v5;
    }
    else
    {
      for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        i = j;
    }
    v12 = *((_DWORD *)i + 8) + 1;
  }
  v8 = (_QWORD *)sub_1800D20B4((__int64 *)(a1 + 240), (__int64)v14, &v12);
  sub_180057514(*v8 + 40LL, a2);
  v9 = v12;
  Mtx_unlock(v4);
  sub_180013494(a2, v10);
  return v9;
}
