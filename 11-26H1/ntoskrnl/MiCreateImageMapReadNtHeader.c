/*
 * XREFs of MiCreateImageMapReadNtHeader @ 0x140A632A0
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     MiAllocateEntireImageFileExtents @ 0x1408730F8 (MiAllocateEntireImageFileExtents.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 */

__int64 __fastcall MiCreateImageMapReadNtHeader(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  _QWORD *Mdl; // rax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rbx
  bool v17; // zf
  struct _FILE_OBJECT *v18; // r15
  _DWORD *v19; // r8
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(unsigned int *)(v1 + 60);
  if ( (int)v3 + 264 < (unsigned int)v3 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 42;
    return 3221225776LL;
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v3 + 264;
  if ( v3 + 264 > v4 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 43;
    return 3221225776LL;
  }
  if ( v5 <= *(_QWORD *)(a1 + 48) << 12 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v5 <= v6 )
    {
      v7 = v6 - (unsigned int)v3;
      v8 = (unsigned int)v3 + v1;
LABEL_6:
      *(_QWORD *)(a1 + 120) = v8;
      result = 0LL;
      *(_QWORD *)(a1 + 136) = v7;
      *(_DWORD *)(a1 + 128) = v3;
      return result;
    }
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 47;
    return 3221225776LL;
  }
  v10 = *(unsigned int *)(a1 + 24);
  v11 = 0x2000LL;
  v12 = (v4 - ((unsigned int)v3 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  if ( v12 < 0x2000 )
    v11 = v12;
  Mdl = (_QWORD *)MiCreateMdl(v13, v10, v11, 1LL, v21);
  v15 = Mdl;
  if ( !Mdl )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 44;
    return 3221225626LL;
  }
  v16 = (unsigned int)v3 & 0xFFFFF000;
  Mdl[2] = v16 >> 12;
  *Mdl = *(_QWORD *)(a1 + 72);
  v17 = (*(_DWORD *)(a1 + 8) & 0x20000) == 0;
  v18 = *(struct _FILE_OBJECT **)a1;
  *(_QWORD *)(a1 + 72) = Mdl;
  if ( !v17 )
  {
    v19 = *(_DWORD **)(a1 + 64);
    v22 = 0LL;
    *(_QWORD *)(a1 + 112) = v12;
    result = MiAllocateEntireImageFileExtents(v18, v12, v19, &v22);
    if ( (int)result < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 128;
      return result;
    }
    *(_QWORD *)(a1 + 64) = v22;
  }
  result = MiReadImageHeaders(v18, *(_QWORD *)(a1 + 64), v15, &v21);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)&v21 + 1) == (unsigned int)v11 || *((_QWORD *)&v21 + 1) >= (unsigned __int64)(v3 & 0xFFF) + 264 )
    {
      v20 = v3 & 0xFFF;
      v8 = v20 + v15[3];
      v7 = *((_QWORD *)&v21 + 1) - v20;
      *(_QWORD *)(a1 + 32) = *((_QWORD *)&v21 + 1) + (unsigned int)v16;
      goto LABEL_6;
    }
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 46;
    return 3221225776LL;
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 45;
  return result;
}
