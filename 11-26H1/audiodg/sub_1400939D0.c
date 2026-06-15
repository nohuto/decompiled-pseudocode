/*
 * XREFs of sub_1400939D0 @ 0x1400939D0
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 *     sub_140093960 @ 0x140093960 (sub_140093960.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_140093ED0 @ 0x140093ED0 (sub_140093ED0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400939D0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  sub_140093ED0(a1 + 16, &v11, &v12);
  if ( v11 != *(_QWORD *)(a1 + 24) )
  {
    v7 = *(_QWORD *)(v11 + 24);
    v8 = *(_QWORD *)(v11 + 32);
    while ( v7 != v8 )
    {
      if ( *(_DWORD *)v7 == a3 )
      {
        v11 = 0LL;
        sub_140026F50(*(_QWORD *)(v7 + 8), (__int64)&xmmword_1400C94C0, &v11);
        v9 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          *a4 = v9;
          sub_140003238(&v11);
          return 0LL;
        }
        sub_140003238(&v11);
      }
      v7 += 16LL;
    }
  }
  return 2147943568LL;
}
