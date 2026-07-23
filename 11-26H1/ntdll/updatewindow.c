/*
 * XREFs of updatewindow @ 0x1801541F8
 * Callers:
 *     inflate @ 0x1801530B0 (inflate.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall updatewindow(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  char *v6; // r9
  __int64 v7; // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  unsigned int v15; // eax

  v3 = *(_QWORD *)(a1 + 40);
  v5 = a3;
  v6 = *(char **)(v3 + 64);
  if ( !v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 48))(
           *(_QWORD *)(a1 + 64),
           (unsigned int)(1 << *(_DWORD *)(v3 + 48)),
           1LL);
    *(_QWORD *)(v3 + 64) = v7;
    v6 = (char *)v7;
    if ( !v7 )
      return 1LL;
  }
  v9 = *(_DWORD *)(v3 + 52);
  if ( !v9 )
  {
    v9 = 1 << *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 52) = v9;
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  if ( (unsigned int)v5 >= v9 )
  {
    memmove(v6, (const void *)(a2 - v9), v9);
    *(_DWORD *)(v3 + 60) = 0;
LABEL_8:
    v10 = *(_DWORD *)(v3 + 52);
    goto LABEL_17;
  }
  v11 = *(unsigned int *)(v3 + 60);
  v12 = v9 - v11;
  if ( v12 > (unsigned int)v5 )
    v12 = v5;
  memmove(&v6[v11], (const void *)(a2 - v5), v12);
  v13 = v5 - v12;
  if ( v13 )
  {
    memmove(*(void **)(v3 + 64), (const void *)(a2 - v13), v13);
    *(_DWORD *)(v3 + 60) = v13;
    goto LABEL_8;
  }
  v14 = v12 + *(_DWORD *)(v3 + 60);
  *(_DWORD *)(v3 + 60) = v14;
  if ( v14 == *(_DWORD *)(v3 + 52) )
    *(_DWORD *)(v3 + 60) = 0;
  v15 = *(_DWORD *)(v3 + 56);
  if ( v15 >= *(_DWORD *)(v3 + 52) )
    return 0LL;
  v10 = v12 + v15;
LABEL_17:
  *(_DWORD *)(v3 + 56) = v10;
  return 0LL;
}
