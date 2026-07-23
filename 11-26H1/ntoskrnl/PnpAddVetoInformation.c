/*
 * XREFs of PnpAddVetoInformation @ 0x140B2768C
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x140B27620 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(void *a1, char **a2, unsigned int a3)
{
  char *v3; // rax
  _QWORD *v4; // rbx
  void **v6; // rdi
  char **v7; // r14
  char v9; // r10
  void **v10; // rax
  char *v11; // rcx
  void **v12; // rcx
  _QWORD *v13; // rsi
  void ***v14; // rax
  void ***v15; // rcx
  __int64 Pool2; // rax
  char *v17; // rax
  char ***v18; // rcx

  v3 = *a2;
  v4 = 0LL;
  v6 = 0LL;
  v7 = a2;
  v9 = 1;
  while ( 1 )
  {
    v10 = (void **)(v3 - 24);
    if ( a2 == (char **)(v10 + 3) )
      break;
    if ( *((_DWORD *)v10 + 4) == a3 )
    {
      v11 = (char *)*v10;
      v6 = v10;
      v9 = 0;
      while ( 1 )
      {
        v12 = (void **)(v11 - 8);
        if ( v10 == v12 + 1 )
          break;
        if ( *v12 == a1 )
          return;
        if ( *v12 > a1 )
        {
          v6 = v12 + 1;
          break;
        }
        v11 = (char *)v12[1];
      }
    }
    else if ( *((_DWORD *)v10 + 4) > a3 )
    {
      v7 = (char **)(v10 + 3);
      break;
    }
    v3 = (char *)v10[3];
  }
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_18:
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4F706E50u);
      return;
    }
    *(_DWORD *)(Pool2 + 16) = a3;
    v17 = (char *)(Pool2 + 24);
    v18 = (char ***)v7[1];
    if ( *v18 != v7 )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)v17 = v7;
    v6 = (void **)v4;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = (char **)v17;
    v7[1] = v17;
    v4[1] = v4;
    *v4 = v4;
  }
  v13 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !v13 )
    goto LABEL_18;
  PsReferenceSiloContext(a1);
  *v13 = a1;
  v14 = (void ***)(v13 + 1);
  v15 = (void ***)v6[1];
  if ( *v15 != v6 )
    goto LABEL_13;
  *v14 = v6;
  v13[2] = v15;
  *v15 = (void **)v14;
  v6[1] = v14;
}
