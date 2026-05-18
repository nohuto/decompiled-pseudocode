/*
 * XREFs of sub_18005BBE8 @ 0x18005BBE8
 * Callers:
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 * Callees:
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_18004BBF0 @ 0x18004BBF0 (sub_18004BBF0.c)
 *     sub_18005BFE4 @ 0x18005BFE4 (sub_18005BFE4.c)
 *     sub_18005CCD0 @ 0x18005CCD0 (sub_18005CCD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005BBE8(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 i; // rax
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v11 = a1;
  v12 = a1;
  v4 = sub_18004BBF0();
  *a1 = v4;
  *(_QWORD *)(*a1 + 8) = sub_18005BFE4(a1, *(_QWORD *)(*a2 + 8LL), v4);
  a1[1] = a2[1];
  v5 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v6 = sub_18001DEF0((_QWORD *)v5);
    *v7 = v6;
    v8 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v8 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v8 = i;
    *(_QWORD *)(*a1 + 16) = v8;
  }
  v12 = 0LL;
  sub_18005CCD0(&v11);
  return a1;
}
