/*
 * XREFs of sub_14001B3C8 @ 0x14001B3C8
 * Callers:
 *     sub_14001B16C @ 0x14001B16C (sub_14001B16C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140076334 @ 0x140076334 (sub_140076334.c)
 *     sub_14007732C @ 0x14007732C (sub_14007732C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14001B3C8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 (__fastcall *v7)(); // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v7 = sub_140045B10;
  v8 = 0;
  v11 = a1;
  v2 = sub_14007732C(&v9, &v11, &v7);
  sub_140076334(&v11, v2);
  v3 = v11;
  v4 = sub_1400B6010(*(_QWORD *)(a1 + 104));
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_BYTE *)(a1 + 128) = 1;
    if ( v3 )
      sub_1400B6010(v3);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 524, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v4);
    if ( v3 )
      sub_1400B6010(v3);
    return v5;
  }
}
