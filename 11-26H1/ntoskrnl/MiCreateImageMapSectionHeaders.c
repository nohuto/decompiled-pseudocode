/*
 * XREFs of MiCreateImageMapSectionHeaders @ 0x140A630B4
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     MiAllocateEntireImageFileExtents @ 0x1408730F8 (MiAllocateEntireImageFileExtents.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 */

__int64 __fastcall MiCreateImageMapSectionHeaders(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned __int64 v8; // rcx
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  _QWORD *Mdl; // rax
  _QWORD *v16; // rsi
  bool v17; // zf
  _DWORD *v18; // r8
  struct _FILE_OBJECT *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1[18];
  v20 = 0LL;
  if ( !((*(_DWORD *)(v1 + 16) >> 12) + ((*(_DWORD *)(v1 + 16) & 0xFFF) != 0)) )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 49;
    return 3221225595LL;
  }
  v3 = a1[15];
  *(_OWORD *)(a1 + 19) = *(_OWORD *)(v3 + 4);
  v4 = *(_DWORD *)(v3 + 20);
  *((_DWORD *)a1 + 42) = v4;
  v5 = *((unsigned __int16 *)a1 + 77);
  v6 = *((_DWORD *)a1 + 32);
  v7 = (unsigned __int16)v4 + 24;
  if ( v7 + v6 + 40 * (_DWORD)v5 <= v6 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 50;
    return 3221225595LL;
  }
  v8 = *(unsigned int *)(v1 + 24);
  v9 = 5 * v5;
  v10 = v7 + v6 + 40 * v5;
  *((_DWORD *)a1 + 43) = v8;
  if ( v8 < v10 )
  {
    LODWORD(v8) = v10;
    *((_DWORD *)a1 + 43) = v10;
  }
  if ( (unsigned int)v8 > *(_DWORD *)(v1 + 16) )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 48;
    return 3221225595LL;
  }
  if ( v10 <= a1[4] )
  {
    v11 = v3 + v7;
LABEL_8:
    a1[22] = v11;
    return 0LL;
  }
  v13 = (((unsigned int)v3 + v7) & 0xFFFLL) + 8 * v9;
  if ( !v13 || (v14 = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, v13 > v14) )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 51;
    return 3221225595LL;
  }
  Mdl = (_QWORD *)MiCreateMdl(a1[2], *((unsigned int *)a1 + 6), (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL, v20);
  v16 = Mdl;
  if ( !Mdl )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 52;
    return 3221225626LL;
  }
  Mdl[2] = (unsigned __int64)(v7 + v6) >> 12;
  *Mdl = a1[9];
  v17 = (a1[1] & 0x20000) == 0;
  a1[9] = Mdl;
  if ( !v17 )
  {
    v18 = (_DWORD *)a1[8];
    v19 = (struct _FILE_OBJECT *)*a1;
    v21 = 0LL;
    a1[14] = v14;
    result = MiAllocateEntireImageFileExtents(v19, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, v18, &v21);
    if ( (int)result < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 129;
      return result;
    }
    a1[8] = v21;
  }
  result = MiReadImageHeaders(*a1, a1[8], v16, &v20);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)&v20 + 1) >= v13 )
    {
      v11 = v16[3] + ((v7 + v6) & 0xFFFLL);
      goto LABEL_8;
    }
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 54;
    return 3221225595LL;
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 53;
  return result;
}
