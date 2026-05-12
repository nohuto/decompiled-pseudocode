/*
 * XREFs of sub_1400C62AC @ 0x1400C62AC
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C62AC(_BYTE **SystemArgument2, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 result; // rax
  _BYTE *v10; // rcx
  _BYTE *v11; // rcx
  unsigned __int8 v12; // dl
  char v13; // al
  _BYTE *v14; // rax
  int v15; // edx
  _BYTE *v16; // r8
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  v4 = sub_1401225EC(SystemArgument2);
  if ( !v4 )
    goto LABEL_4;
  if ( (int)sub_1400E736C(SystemArgument2, 4096LL, v5, &v17, (char *)&v17 + 8, 0) < 0 )
    goto LABEL_4;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
  *(_OWORD *)(*(_QWORD *)v4 + 4160LL) = v17;
  *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 4096;
  *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400C65C0;
  *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
  v6 = *(_QWORD *)v4;
  v7 = *((_QWORD *)&v17 + 1);
  *(_BYTE *)(v6 + 4096) = 10;
  *(_QWORD *)(v6 + 4120) = v7;
  *(_BYTE *)(v6 + 4136) = -48;
  if ( (int)sub_1400BD378(SystemArgument2, v4) < 0 )
LABEL_4:
    *SystemArgument2[217] = 0;
  sub_140122C20(SystemArgument2, v4);
  result = sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v8, v17, *((__int64 *)&v17 + 1));
  v10 = SystemArgument2[217];
  if ( !*v10 )
  {
    result = (__int64)SystemArgument2[131];
    if ( *(_BYTE *)(result + 32) )
      *v10 = 1;
  }
  v11 = SystemArgument2[217];
  if ( *v11 )
  {
    v12 = v11[20];
    if ( v12 )
    {
      v13 = v11[20];
      if ( v12 > 0x64u )
        v13 = 100;
    }
    else
    {
      v13 = SystemArgument2[131][32];
    }
    v11[4] = v13;
    v14 = SystemArgument2[217];
    v15 = *((_DWORD *)v14 + 6);
    if ( !v15 )
      v15 = *((_DWORD *)SystemArgument2[131] + 11);
    *((_DWORD *)v14 + 2) = v15;
    v16 = SystemArgument2[217];
    result = *((unsigned int *)v16 + 7);
    if ( (result & 1) != 0 )
    {
      *((_DWORD *)v16 + 3) = result;
    }
    else
    {
      *((_DWORD *)v16 + 3) ^= ((unsigned __int8)*((_DWORD *)v16 + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131]
                                                                                         + 19) >> 1)) & 2;
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131] + 19) >> 1)) & 4;
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131] + 19) >> 1)) & 8;
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131] + 19) >> 1)) & 0x10;
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131] + 19) >> 1)) & 0x20;
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*((_DWORD *)SystemArgument2[131] + 19) >> 1)) & 0x40;
      result = (__int64)SystemArgument2[131];
      *((_DWORD *)SystemArgument2[217] + 3) ^= ((unsigned __int8)*((_DWORD *)SystemArgument2[217] + 3) ^ (unsigned __int8)(*(_DWORD *)(result + 76) >> 1)) & 0x80;
    }
  }
  return result;
}
