/*
 * XREFs of sub_180013300 @ 0x180013300
 * Callers:
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_180041FE0 @ 0x180041FE0 (sub_180041FE0.c)
 *     sub_180048A70 @ 0x180048A70 (sub_180048A70.c)
 *     sub_180049D60 @ 0x180049D60 (sub_180049D60.c)
 *     sub_18004FB60 @ 0x18004FB60 (sub_18004FB60.c)
 *     sub_180058650 @ 0x180058650 (sub_180058650.c)
 *     sub_18005E70C @ 0x18005E70C (sub_18005E70C.c)
 *     sub_18005E830 @ 0x18005E830 (sub_18005E830.c)
 *     sub_18005E954 @ 0x18005E954 (sub_18005E954.c)
 *     sub_18005EA78 @ 0x18005EA78 (sub_18005EA78.c)
 *     sub_18005EB9C @ 0x18005EB9C (sub_18005EB9C.c)
 *     sub_180086790 @ 0x180086790 (sub_180086790.c)
 *     sub_180087FE0 @ 0x180087FE0 (sub_180087FE0.c)
 *     sub_18008A780 @ 0x18008A780 (sub_18008A780.c)
 *     sub_18008E7C0 @ 0x18008E7C0 (sub_18008E7C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

void __fastcall sub_180013300(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
        v5 = a2;
        v6 = v4;
      }
      *(_QWORD *)(a2 + 8) = v5;
      v7 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v6;
      if ( v7 )
        sub_180010F00(v7);
      if ( v4 )
        sub_180010EC8(v4);
    }
  }
}
