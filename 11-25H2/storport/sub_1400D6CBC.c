/*
 * XREFs of sub_1400D6CBC @ 0x1400D6CBC
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_140012A84 @ 0x140012A84 (sub_140012A84.c)
 *     sub_140012ABC @ 0x140012ABC (sub_140012ABC.c)
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400CA2AC @ 0x1400CA2AC (sub_1400CA2AC.c)
 *     sub_1400CB8F4 @ 0x1400CB8F4 (sub_1400CB8F4.c)
 *     sub_1400D40DC @ 0x1400D40DC (sub_1400D40DC.c)
 *     sub_1400D6FE0 @ 0x1400D6FE0 (sub_1400D6FE0.c)
 *     sub_1400DAC3C @ 0x1400DAC3C (sub_1400DAC3C.c)
 *     sub_1400E7EF0 @ 0x1400E7EF0 (sub_1400E7EF0.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_14017BAE8 @ 0x14017BAE8 (sub_14017BAE8.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 */

__int64 __fastcall sub_1400D6CBC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  signed int v5; // esi
  __int64 v6; // rax
  __int64 *v7; // rdi
  char v8; // r15
  int v9; // r8d
  __int64 v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  KIRQL v16; // bp
  __int64 v17; // rcx
  char v18; // al

  if ( !a2 )
    return 3221225486LL;
  result = sub_14017BAE8(a1 + 168, a2, a3, (*(_QWORD *)(a1 + 584) + 88LL) & -(__int64)(*(_QWORD *)(a1 + 584) != 0LL));
  v5 = result;
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 6;
    return result;
  }
  if ( byte_140168448 && !*(_QWORD *)(a1 + 992) )
    sub_1400D6FE0(a1);
  v6 = *(_QWORD *)(a1 + 400);
  v7 = (__int64 *)(a1 + 144);
  *(_QWORD *)(a1 + 144) |= 0x1000uLL;
  if ( (*(_DWORD *)(v6 + 184) & 0x40000000) != 0 )
  {
    v8 = 1;
    if ( !(unsigned int)sub_1400C93A0() || (*(_DWORD *)v7 & 0x200LL) == 0 )
    {
      LOBYTE(v9) = 1;
      v5 = sub_140194600(a1, 0, v9, 0, a1 + 1136);
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
    result = sub_1400EA590(*(PVOID *)(a1 + 1136));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 376) |= 2u;
    v7 = (__int64 *)(a1 + 144);
  }
  else
  {
    v8 = 0;
  }
  result = sub_140012ABC((char **)(a1 + 168), *(void **)(a1 + 896));
  v10 = *v7 | 0x40;
  *v7 = v10;
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 7;
    return result;
  }
  v11 = *(_BYTE *)(a1 + 372);
  v12 = v10 & 0xFFFFFFFFFFFFEFFFuLL | -(__int64)(v11 == 0) & 0x1000;
  *v7 = v12;
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 336);
    v14 = *(_QWORD *)(a1 + 584);
    *v7 = v12 & 0xFFFFFFFFFFFFFF7FuLL;
    *(_DWORD *)(v14 + 104) = v13;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 584) + 104LL) )
    {
      *v7 |= 0x400uLL;
      v15 = (__int64 *)(a1 + 144);
    }
    else
    {
      v15 = v7;
    }
    result = sub_1400CB8F4(a1);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 8;
      return result;
    }
    result = sub_1400DAC3C(a1);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 9;
      return result;
    }
    v16 = sub_1400CA2AC(a1);
    v17 = *v7 | 0x80;
    v7 = v15;
    *v15 = v17;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    *(_WORD *)(a1 + 500) = 1;
    *(_DWORD *)(a1 + 496) = 48;
    *(_QWORD *)(a1 + 512) = sub_140071AF0;
    result = sub_140071930(a1 + 168);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 1012) = 15;
      return result;
    }
  }
  *v7 |= 0x20uLL;
  v5 = sub_140012A84(a1 + 168);
  if ( v5 >= 0 )
    *v7 |= 2uLL;
  if ( (*(_DWORD *)v7 & 0x1000LL) != 0 )
    sub_1400D40DC(a1, v16);
  if ( v5 < 0 )
  {
    *(_DWORD *)(a1 + 1012) = 10;
    return (unsigned int)v5;
  }
  if ( !*(_QWORD *)(a1 + 968) )
  {
LABEL_42:
    *(_QWORD *)(a1 + 144) &= ~0x20uLL;
    sub_140071930(a1 + 168);
    return (unsigned int)v5;
  }
  if ( !v8 || (result = sub_1400E7EF0(*(PVOID *)(a1 + 1136)), (int)result >= 0) )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(a1 + 968))(*(_QWORD *)(a1 + 408) + 16LL);
    v5 = v18 == 0 ? 0xC0000001 : 0;
    if ( !v18 )
    {
      *(_DWORD *)(a1 + 1012) = 11;
      return (unsigned int)v5;
    }
    goto LABEL_42;
  }
  return result;
}
