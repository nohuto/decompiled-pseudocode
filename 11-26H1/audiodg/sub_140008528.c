/*
 * XREFs of sub_140008528 @ 0x140008528
 * Callers:
 *     sub_1400085D0 @ 0x1400085D0 (sub_1400085D0.c)
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_140018E74 @ 0x140018E74 (sub_140018E74.c)
 *     sub_14006DF30 @ 0x14006DF30 (sub_14006DF30.c)
 *     sub_14006E320 @ 0x14006E320 (sub_14006E320.c)
 *     sub_14006E9C0 @ 0x14006E9C0 (sub_14006E9C0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000858C @ 0x14000858C (sub_14000858C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140008528(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD **)(a1 + 248);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v4 + 8) == a2 )
    {
      v5 = sub_14000858C(v4, *(_QWORD *)(v4 + 64));
      if ( v5 < 0 )
        sub_140007934((int)retaddr, 4665, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v5);
    }
  }
  return 0LL;
}
