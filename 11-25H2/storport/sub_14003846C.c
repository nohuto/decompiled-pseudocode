/*
 * XREFs of sub_14003846C @ 0x14003846C
 * Callers:
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14003846C(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  char *v8; // rdi
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // r15
  __int64 Pool2; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = (char *)v4 + v4[3];
  if ( *(_BYTE *)(a2 + 64) || *(_DWORD *)v8 < 0x1Cu || *(_DWORD *)v8 > v4[4] || *((_DWORD *)v8 + 2) != 1 )
    goto LABEL_26;
  v9 = *(_QWORD *)(v8 + 12) - 0x4DB838FC0D0A64A1LL;
  if ( *(_QWORD *)(v8 + 12) == 0x4DB838FC0D0A64A1LL )
    v9 = *(_QWORD *)(v8 + 20) - 0x5C7CCD52433FE79FLL;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_9;
  }
  v14 = *(_QWORD *)(v8 + 12) - 0x4CF8B9A3B7624D64LL;
  if ( *(_QWORD *)(v8 + 12) == 0x4CF8B9A3B7624D64LL )
    v14 = *(_QWORD *)(v8 + 20) + 0x4818BF3679A4EE80LL;
  if ( !v14 )
  {
    v10 = 2;
    goto LABEL_9;
  }
  v15 = *(_QWORD *)(v8 + 12) - 0x4DBDD2A69D453EB7LL;
  if ( *(_QWORD *)(v8 + 12) == 0x4DBDD2A69D453EB7LL )
    v15 = *(_QWORD *)(v8 + 20) + 0x56F66E122F041C5ELL;
  if ( v15 )
  {
LABEL_26:
    v5 = -1073741637;
    goto LABEL_13;
  }
  v10 = 3;
LABEL_9:
  v7 = ((v4[6] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 76;
  if ( v7 > 0xFFFFFFFF )
  {
    v5 = -1073741811;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)v7, 1918067026LL);
    v6 = Pool2;
    if ( !Pool2 && v11 )
    {
      sub_14008D9B8(v11, 64, v7, 1918067026, 0x80000000);
      goto LABEL_25;
    }
    if ( !Pool2 )
    {
LABEL_25:
      v5 = -1073741670;
      goto LABEL_13;
    }
    *(_DWORD *)(Pool2 + 16) = 1771296;
    *(_DWORD *)Pool2 = 28;
    *(_DWORD *)(Pool2 + 24) = v7 - 28;
    *(_DWORD *)(Pool2 + 20) = 0;
    *(_QWORD *)(Pool2 + 4) = 0x2020204D5344504DLL;
    *(_DWORD *)(Pool2 + 28) = 48;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_DWORD *)(Pool2 + 36) = *((_DWORD *)v8 + 1);
    *(_DWORD *)(Pool2 + 40) = v10;
    *(_QWORD *)(Pool2 + 44) = 0LL;
    *(_DWORD *)(Pool2 + 52) = 0;
    *(_DWORD *)(Pool2 + 56) = v4[6] >> 4;
    memmove((void *)(Pool2 + 60), (char *)v4 + v4[5], v4[6]);
  }
LABEL_13:
  *a3 = v6;
  *a4 = v7;
  return v5;
}
