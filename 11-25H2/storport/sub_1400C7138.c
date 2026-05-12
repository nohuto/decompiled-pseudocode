/*
 * XREFs of sub_1400C7138 @ 0x1400C7138
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C7138(_QWORD *SystemArgument2, char a2)
{
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax

  v4 = SystemArgument2[74];
  v5 = 0;
  v6 = SystemArgument2[131];
  if ( !v6 || (v7 = *(_BYTE *)(v6 + 14), v7 == 0xFF) )
  {
    v5 = *(_BYTE *)(v4 + 72);
  }
  else
  {
    if ( v7 <= 1u )
      goto LABEL_9;
    do
    {
      v7 >>= 1;
      ++v5;
    }
    while ( v7 > 1u );
  }
  if ( (unsigned __int8)v5 >= 7u )
    v5 = 7;
LABEL_9:
  v8 = sub_1401225EC(SystemArgument2);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v8 + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)v8 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v8 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)v8 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v8 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v8 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v8 + 4200LL) = v8;
    *(_QWORD *)(*(_QWORD *)v8 + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v8 + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v8 + 4248LL) = 0;
    v11 = *(_QWORD *)v8;
    v12 = *(_DWORD *)(*(_QWORD *)v8 + 4140LL);
    *(_BYTE *)(v11 + 4096) = 9;
    *(_BYTE *)(v11 + 4136) = 1;
    *(_DWORD *)(v11 + 4140) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)v5) & 7;
    v10 = sub_1400BD378(SystemArgument2, v9);
  }
  else
  {
    v10 = -1073741670;
  }
  sub_140122C20(SystemArgument2, v9);
  return v10;
}
