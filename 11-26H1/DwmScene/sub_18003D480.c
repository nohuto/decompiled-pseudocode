/*
 * XREFs of sub_18003D480 @ 0x18003D480
 * Callers:
 *     sub_18003A5B8 @ 0x18003A5B8 (sub_18003A5B8.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D480(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003D758();
  result = sub_18001367C(a1, &v6);
  if ( v6 )
  {
    v3 = a1;
    if ( a1 )
    {
      do
      {
        sub_18003D718(v3);
        v4 = *(_QWORD **)(v3 + 384);
        for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v3 + 104) = 1;
        result = sub_18003B678(a1, v3);
        v3 = result;
      }
      while ( result );
    }
  }
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
