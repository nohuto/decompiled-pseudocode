/*
 * XREFs of sub_18004F21C @ 0x18004F21C
 * Callers:
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_18001290C @ 0x18001290C (sub_18001290C.c)
 *     sub_18004F094 @ 0x18004F094 (sub_18004F094.c)
 */

char __fastcall sub_18004F21C(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v2) = sub_18001290C(a1);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 > 0xF )
    {
      v2 = v4 | 0xF;
      if ( v2 > 0x7FFFFFFFFFFFFFFFLL )
        v2 = 0x7FFFFFFFFFFFFFFFLL;
      v8 = v2;
      if ( v2 < *(_QWORD *)(a1 + 24) )
      {
        v5 = (void *)sub_1800117C4(0x7FFFFFFFFFFFFFFFLL, &v8);
        memcpy(v5, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
        sub_180012848(v6, *(void **)a1, *(_QWORD *)(a1 + 24));
        LOBYTE(v2) = v8;
        *(_QWORD *)(a1 + 24) = v8;
        *(_QWORD *)a1 = v5;
      }
    }
    else
    {
      LOBYTE(v2) = sub_18004F094((void **)v3);
    }
  }
  return v2;
}
