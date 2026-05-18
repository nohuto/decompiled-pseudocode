/*
 * XREFs of sub_18007F9A0 @ 0x18007F9A0
 * Callers:
 *     sub_18007FFA8 @ 0x18007FFA8 (sub_18007FFA8.c)
 * Callees:
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 *     sub_18007FBC4 @ 0x18007FBC4 (sub_18007FBC4.c)
 *     sub_180080018 @ 0x180080018 (sub_180080018.c)
 *     sub_18008155C @ 0x18008155C (sub_18008155C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007F9A0(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 i; // rdi
  __int64 result; // rax
  __int64 *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x555555555555555LL )
      std::_Xlength_error("vector too long");
    sub_18008155C();
    v12 = a1;
    v8 = *a1;
    v9 = *a4;
    for ( i = *a3; i != v9; i += 48LL )
    {
      sub_18007FBC4(v7, v8, i);
      v8 += 48LL;
    }
    sub_180076340(v8, v8);
    a1[1] = v8;
    v12 = 0LL;
    return sub_180080018(&v12);
  }
  return result;
}
