/*
 * XREFs of sub_1800CE5E0 @ 0x1800CE5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_180013268 @ 0x180013268 (sub_180013268.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CE5E0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 560);
  v9 = v4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_180013268(a2, (unsigned __int64 *)&v9);
  }
  v5 = **(_QWORD **)(a1 + 552);
  v9 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)a2[1];
    if ( v6 == (_QWORD *)a2[2] )
    {
      sub_18001310C(a2, a2[1], (_QWORD *)(v5 + 40));
    }
    else
    {
      sub_180013084(v6, (_QWORD *)(v5 + 40));
      a2[1] += 16LL;
    }
    sub_18001D6F4(&v9, v7);
    v5 = v9;
  }
  return a2;
}
