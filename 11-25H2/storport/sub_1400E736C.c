/*
 * XREFs of sub_1400E736C @ 0x1400E736C
 * Callers:
 *     sub_1400BCCF8 @ 0x1400BCCF8 (sub_1400BCCF8.c)
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400C52E4 @ 0x1400C52E4 (sub_1400C52E4.c)
 *     sub_1400C55C0 @ 0x1400C55C0 (sub_1400C55C0.c)
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C5A64 @ 0x1400C5A64 (sub_1400C5A64.c)
 *     sub_1400C5CF4 @ 0x1400C5CF4 (sub_1400C5CF4.c)
 *     sub_1400C5FA8 @ 0x1400C5FA8 (sub_1400C5FA8.c)
 *     sub_1400C62AC @ 0x1400C62AC (sub_1400C62AC.c)
 *     sub_1400C757C @ 0x1400C757C (sub_1400C757C.c)
 *     sub_1400C772C @ 0x1400C772C (sub_1400C772C.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 *     sub_1400C85F8 @ 0x1400C85F8 (sub_1400C85F8.c)
 *     sub_1400C880C @ 0x1400C880C (sub_1400C880C.c)
 *     sub_1400CF37C @ 0x1400CF37C (sub_1400CF37C.c)
 *     sub_1400D0158 @ 0x1400D0158 (sub_1400D0158.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400E8EB4 @ 0x1400E8EB4 (sub_1400E8EB4.c)
 *     sub_1400EB850 @ 0x1400EB850 (sub_1400EB850.c)
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 *     sub_1400ECAF8 @ 0x1400ECAF8 (sub_1400ECAF8.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 *     sub_1400F2CA8 @ 0x1400F2CA8 (sub_1400F2CA8.c)
 *     sub_1400F60E0 @ 0x1400F60E0 (sub_1400F60E0.c)
 *     sub_1400F6320 @ 0x1400F6320 (sub_1400F6320.c)
 *     sub_1400F6568 @ 0x1400F6568 (sub_1400F6568.c)
 *     sub_1400FBDFC @ 0x1400FBDFC (sub_1400FBDFC.c)
 *     sub_1400FC314 @ 0x1400FC314 (sub_1400FC314.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 *     sub_140108D10 @ 0x140108D10 (sub_140108D10.c)
 *     sub_140108F3C @ 0x140108F3C (sub_140108F3C.c)
 *     sub_140109194 @ 0x140109194 (sub_140109194.c)
 *     sub_1401093A0 @ 0x1401093A0 (sub_1401093A0.c)
 *     sub_140109588 @ 0x140109588 (sub_140109588.c)
 *     sub_14010F0B0 @ 0x14010F0B0 (sub_14010F0B0.c)
 *     sub_140124930 @ 0x140124930 (sub_140124930.c)
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 *     sub_140126494 @ 0x140126494 (sub_140126494.c)
 *     sub_140191238 @ 0x140191238 (sub_140191238.c)
 *     sub_140193330 @ 0x140193330 (sub_140193330.c)
 *     sub_14019FD80 @ 0x14019FD80 (sub_14019FD80.c)
 *     sub_1401A0D00 @ 0x1401A0D00 (sub_1401A0D00.c)
 * Callees:
 *     sub_140018C88 @ 0x140018C88 (sub_140018C88.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E736C(__int64 a1, unsigned int a2, __int64 a3, void **a4, _QWORD *a5, char a6)
{
  size_t v8; // r14
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]

  if ( a2 <= 0x1000 && !a6 && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 0) )
  {
    *a4 = *(void **)(a1 + 1112);
    v8 = a2;
    *a5 = *(_QWORD *)(a1 + 1120);
LABEL_5:
    memset_0(*a4, 0, v8);
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 8LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 1048);
    if ( !v11 || (*(_DWORD *)(v11 + 24) & 2) != 0 )
      v10 = 0x80000000;
    else
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1008LL);
  }
  v8 = a2;
  if ( !(unsigned int)sub_140018C88(*(_QWORD *)(a1 + 128), a2, 0LL, 0x7FFFFFFFFFFFFFFFLL, 0LL, 1, v10, a4, a5) )
    goto LABEL_5;
  if ( v10 != 0x80000000 )
  {
    LODWORD(v13) = 0x80000000;
    LODWORD(v12) = 1;
    if ( !(unsigned int)sub_140018C88(
                          *(_QWORD *)(a1 + 128),
                          (unsigned int)v8,
                          0LL,
                          0x7FFFFFFFFFFFFFFFLL,
                          0LL,
                          v12,
                          v13,
                          a4,
                          a5) )
      goto LABEL_5;
  }
  return 3221225626LL;
}
