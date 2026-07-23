/*
 * XREFs of PfpFileBuildReadList @ 0x140A58708
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfpFileBuildReadList(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int *v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rcx
  _QWORD *Pool2; // rax

  if ( (*(_DWORD *)a2 & 1) != 0 && !a3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 1LL;
      Pool2[2] = 0LL;
      *a4 = (__int64)Pool2;
      return 0LL;
    }
    return 3221225626LL;
  }
  v7 = (_DWORD *)(a2 + 16);
  v8 = 0LL;
  v9 = *(_DWORD *)(a2 + 16);
  if ( v9 )
  {
    v10 = v9;
    v11 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
    do
    {
      v12 = *v11 >> 12;
      v11 += 4;
      v8 = (unsigned int)(v12 + v8 + 2);
      --v10;
    }
    while ( v10 );
    v13 = (unsigned int *)(a2 + 16);
  }
  else
  {
    v13 = (unsigned int *)(a2 + 16);
  }
  if ( (unsigned __int64)(8 * v8 + 16) <= 0xFFFFFFFF )
  {
    v14 = ExAllocatePool2(0x100uLL);
    if ( v14 )
    {
      *(_OWORD *)v14 = 0LL;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)(v14 + 12) = 1;
      v15 = 0;
      if ( *v7 )
      {
        do
        {
          v16 = *(_QWORD *)(a2 + 24);
          v17 = *(_QWORD *)(v16 + 16LL * v15) & 0xFFFFFFFFFFFFF000uLL;
          if ( (*(_BYTE *)(*(_QWORD *)a1 + 80LL) & 2) == 0 )
            v17 = *(_QWORD *)(v16 + 16LL * v15);
          v18 = *(_QWORD *)(v16 + 16LL * v15) + *(unsigned int *)(v16 + 16LL * v15 + 8);
          while ( v17 < v18 )
          {
            *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 8))++ + 16) = v17;
            v17 += 4096LL;
          }
          ++v15;
        }
        while ( v15 < *v13 );
      }
      *a4 = v14;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225621LL;
}
