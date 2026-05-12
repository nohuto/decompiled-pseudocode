/*
 * XREFs of sub_140039BC0 @ 0x140039BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140039CF8 @ 0x140039CF8 (sub_140039CF8.c)
 *     sub_14005A31C @ 0x14005A31C (sub_14005A31C.c)
 *     sub_1400762A8 @ 0x1400762A8 (sub_1400762A8.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 */

__int64 __fastcall sub_140039BC0(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  char *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx

  v3 = (char *)(Context + 4960);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5248) )
  {
    a2 = *(unsigned int *)(*(_QWORD *)v3 + 20LL);
    if ( (a2 & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5248);
      a2 = Context / 0x2710;
      v4[657] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1328);
      if ( !v4[655] )
        v4[655] = v4[652];
    }
    v4[656] = 0LL;
  }
  ++*((_DWORD *)v4 + 1326);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_1400762A8(Context, (unsigned int)&unk_14014A460, a3, **(_QWORD **)v3, *((_DWORD *)v4 + 14));
  if ( *((_DWORD *)v4 + 242) > 1u )
  {
    LOBYTE(a2) = 1;
    sub_14005A31C(v4, a2);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 20LL) |= 2u;
  if ( sub_140020090((__int64)(v4 + 47), 7) )
  {
    LOBYTE(v5) = 1;
    sub_140077BF8(v4, v5);
  }
  return sub_140039CF8(v4);
}
