/*
 * XREFs of HalpQueryDeviceRelations @ 0x140B1CC04
 * Callers:
 *     HalpDispatchPnp @ 0x140B1CA40 (HalpDispatchPnp.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryDeviceRelations(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *Pool2; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  void *v15; // rcx

  v3 = a1[8];
  if ( *(_DWORD *)v3 == 193 )
    v6 = *(_QWORD *)(v3 + 8);
  else
    v6 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
    if ( !v6 )
      return 3221225659LL;
    v11 = v6;
    do
    {
      v11 = *(_QWORD *)(v11 + 8);
      ++v7;
    }
    while ( v11 );
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v7;
      v14 = 0LL;
      do
      {
        v15 = *(void **)(v6 + 16);
        *(_QWORD *)&v13[2 * v14 + 2] = v15;
        PsReferenceSiloContext(v15);
        v6 = *(_QWORD *)(v6 + 8);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( v6 );
      *a3 = (__int64)v13;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( a2 != 4 )
    return 3221225659LL;
  v9 = ExAllocatePool2(0x100uLL);
  v10 = v9;
  if ( !v9 )
    return 3221225626LL;
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = a1;
  PsReferenceSiloContext(a1);
  *a3 = v10;
  return 0LL;
}
