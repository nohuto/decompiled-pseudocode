/*
 * XREFs of sub_140008C34 @ 0x140008C34
 * Callers:
 *     sub_140008CC0 @ 0x140008CC0 (sub_140008CC0.c)
 *     sub_140040120 @ 0x140040120 (sub_140040120.c)
 * Callees:
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_140009440 @ 0x140009440 (sub_140009440.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140008C34(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  sub_140009440(a1, a2, 0LL);
  sub_140006060(a2);
  v5 = sub_140008528(a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8(retaddr, 1268LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", (unsigned int)v5);
    return v6;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 152);
    if ( v7 )
    {
      if ( a2 != -152 )
      {
        sub_1400B6010(v7);
        *(_QWORD *)(a2 + 152) = 0LL;
      }
    }
    return 0LL;
  }
}
