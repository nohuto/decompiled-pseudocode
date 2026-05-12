/*
 * XREFs of sub_1400C7D1C @ 0x1400C7D1C
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400C6D30 @ 0x1400C6D30 (sub_1400C6D30.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C7D1C(_WORD *SystemArgument2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  char v7; // dl
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // di
  __int64 v10; // rcx
  unsigned __int16 v11; // dx
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax

  v6 = sub_1400C6D30((__int64)SystemArgument2);
  if ( v7 )
  {
    v8 = *(_WORD *)(v5 + 22);
    v9 = *(_WORD *)(v5 + 26);
  }
  else
  {
    v8 = *((_WORD *)qword_140168E40 + 4);
    if ( v6 <= 1 )
      v9 = 1;
    else
      v9 = v6 - 1;
    v10 = *(_QWORD *)(v5 + 1048);
    if ( v10 )
    {
      if ( *(_WORD *)(v10 + 8) )
      {
        v8 = *(_WORD *)(v10 + 8);
      }
      else if ( (*(_DWORD *)(v10 + 24) & 0x400000) != 0 )
      {
        v8 *= 2;
      }
      v11 = *(_WORD *)(v10 + 10);
      if ( !v11 )
        v11 = v9;
      v9 = v11;
      if ( *(_DWORD *)(v10 + 92) )
      {
        v12 = *(_WORD *)(v10 + 92);
        v8 += v12;
        v9 = v11 + v12;
      }
    }
    if ( v8 <= v9 )
      v8 = v9;
  }
  v13 = sub_1401225EC(SystemArgument2);
  v14 = v13;
  if ( !v13 )
  {
    v15 = -1073741670;
LABEL_20:
    SystemArgument2[11] = 0;
    SystemArgument2[13] = 0;
    goto LABEL_21;
  }
  SystemArgument2[11] = v8;
  SystemArgument2[13] = v9;
  *(_DWORD *)(*(_QWORD *)v13 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v13 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v13 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v13 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v13 + 4256LL) ^ (unsigned __int8)(a3 << 6)) & 0x40;
  v16 = v13;
  *(_WORD *)(*(_QWORD *)v13 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v13 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v13 + 4192LL) = sub_1400C7F10;
  *(_QWORD *)(*(_QWORD *)v13 + 4200LL) = v13;
  *(_QWORD *)(*(_QWORD *)v13 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v13 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v13 + 4248LL) = 0;
  v17 = *(_QWORD *)v13;
  *(_BYTE *)(v17 + 4096) = 9;
  *(_BYTE *)(v17 + 4136) = 7;
  *(_WORD *)(v17 + 4140) = v8 - 1;
  *(_WORD *)(v17 + 4142) = v9 - 1;
  v15 = sub_1400BD378(SystemArgument2, v16);
  if ( v15 < 0 )
    goto LABEL_20;
LABEL_21:
  sub_140122C20(SystemArgument2, v14);
  return (unsigned int)v15;
}
