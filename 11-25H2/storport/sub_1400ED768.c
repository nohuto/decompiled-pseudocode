/*
 * XREFs of sub_1400ED768 @ 0x1400ED768
 * Callers:
 *     sub_1400E7EF0 @ 0x1400E7EF0 (sub_1400E7EF0.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 * Callees:
 *     sub_1400C52E4 @ 0x1400C52E4 (sub_1400C52E4.c)
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C5A64 @ 0x1400C5A64 (sub_1400C5A64.c)
 *     sub_1400C5CF4 @ 0x1400C5CF4 (sub_1400C5CF4.c)
 *     sub_1400C5FA8 @ 0x1400C5FA8 (sub_1400C5FA8.c)
 *     sub_1400C6798 @ 0x1400C6798 (sub_1400C6798.c)
 *     sub_1400C6900 @ 0x1400C6900 (sub_1400C6900.c)
 *     sub_1400C6D60 @ 0x1400C6D60 (sub_1400C6D60.c)
 *     sub_1400C757C @ 0x1400C757C (sub_1400C757C.c)
 *     sub_1400C772C @ 0x1400C772C (sub_1400C772C.c)
 *     sub_1400C831C @ 0x1400C831C (sub_1400C831C.c)
 *     sub_1400C85F8 @ 0x1400C85F8 (sub_1400C85F8.c)
 *     sub_1400DB1F0 @ 0x1400DB1F0 (sub_1400DB1F0.c)
 *     sub_1400E8EB4 @ 0x1400E8EB4 (sub_1400E8EB4.c)
 *     sub_1400E96A0 @ 0x1400E96A0 (sub_1400E96A0.c)
 *     sub_1400F25C0 @ 0x1400F25C0 (sub_1400F25C0.c)
 */

__int64 __fastcall sub_1400ED768(_QWORD *SystemArgument2, char a2)
{
  _BYTE *v2; // rsi
  int v3; // ebp
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (_BYTE *)SystemArgument2[74];
  v3 = 0;
  if ( v2 )
  {
    sub_1400C5820(SystemArgument2, a2);
    sub_1400C5FA8(SystemArgument2, a2);
    sub_1400C5A64(SystemArgument2, a2);
    sub_1400E8EB4(SystemArgument2, a2);
    v6 = SystemArgument2[131];
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 24) & 0x2000) != 0 )
      {
        v7 = v2[76];
        if ( (v7 & 1) == 0 && (v7 & 6) == 2 && (v7 & 8) == 0 && (SystemArgument2[17] & 0x200000) == 0 )
          sub_1400C5CF4(SystemArgument2, a2);
      }
    }
    v8 = SystemArgument2[131];
    if ( v8 && (*(_DWORD *)(v8 + 24) & 4) == 0 )
      sub_1400C6D60(SystemArgument2, a2);
    if ( *((_BYTE *)SystemArgument2 + 1728) != 1 )
    {
      if ( !(unsigned int)sub_1400DB1F0() )
      {
        sub_1400C6798(SystemArgument2);
        if ( (int)sub_1400E96A0((__int64)SystemArgument2) >= 0 )
          sub_1400F25C0(SystemArgument2);
      }
      if ( (SystemArgument2[17] & 0x1000000) == 0 )
        sub_1400C52E4((PVOID *)SystemArgument2, a2);
      if ( (v2[261] & 0x48) == 0x48 )
        sub_1400C757C(SystemArgument2, a2);
      if ( (*(_BYTE *)(SystemArgument2[74] + 520LL) & 0x40) != 0 )
        sub_1400C85F8(SystemArgument2, a2);
      sub_1400C6900(SystemArgument2, a2);
      sub_1400C831C(SystemArgument2, a2);
      if ( (v2[520] & 0x20) != 0 )
        sub_1400C772C(SystemArgument2, a2);
      if ( (unsigned int)sub_1400DB1F0() )
      {
        sub_1400C6798(SystemArgument2);
        if ( (int)sub_1400E96A0((__int64)SystemArgument2) >= 0 )
          sub_1400F25C0(SystemArgument2);
      }
    }
    v9 = SystemArgument2[121];
    *((_DWORD *)SystemArgument2 + 294) = 0;
    SystemArgument2[121] = v9 | 1;
    SystemArgument2[121] &= ~0x20000uLL;
    SystemArgument2[121] &= ~0x200000uLL;
  }
  else
  {
    v3 = -1073741595;
  }
  v10 = SystemArgument2[159];
  if ( v10 )
  {
    if ( v3 < 0 )
      ++*(_DWORD *)(v10 + 28);
    else
      ++*(_DWORD *)(v10 + 24);
  }
  return (unsigned int)v3;
}
