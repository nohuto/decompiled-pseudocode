/*
 * XREFs of sub_140046698 @ 0x140046698
 * Callers:
 *     sub_1400AE512 @ 0x1400AE512 (sub_1400AE512.c)
 * Callees:
 *     sub_140005E68 @ 0x140005E68 (sub_140005E68.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140028694 @ 0x140028694 (sub_140028694.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140046698(_BYTE *a1)
{
  _QWORD ***v1; // rax
  __int64 *v2; // rax
  _QWORD *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[16] )
  {
    a1[16] = 0;
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
    while ( v4 )
    {
      v1 = (_QWORD ***)sub_140028694((__int64)a1, &v4);
      a1 = *v1;
      v3 = **v1;
      while ( v3 )
      {
        v2 = sub_1400265D8((__int64)a1, &v3);
        sub_140005E68(*v2);
      }
    }
  }
}
