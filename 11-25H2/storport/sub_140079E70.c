/*
 * XREFs of sub_140079E70 @ 0x140079E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400762A8 @ 0x1400762A8 (sub_1400762A8.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 *     sub_14007A040 @ 0x14007A040 (sub_14007A040.c)
 */

__int64 __fastcall sub_140079E70(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD **)(Context + 4960);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5328) )
  {
    if ( (*((_DWORD *)*v3 + 5) & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5248);
      v4[667] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1328);
      if ( !v4[665] )
        v4[665] = v4[652];
    }
    v4[666] = 0LL;
  }
  ++*((_DWORD *)v4 + 1326);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    v6 = *((_DWORD *)v4 + 14);
    sub_1400762A8(Context, &stru_14014A998, a3, **v3, v6);
  }
  *((_DWORD *)*v3 + 5) |= 2u;
  if ( sub_140020090((__int64)(v4 + 47), 7) )
    sub_140077BF8((__int64)v4);
  return sub_14007A040(v4);
}
