/*
 * XREFs of ParseLoad @ 0x140052DE0
 * Callers:
 *     <none>
 * Callees:
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     PushCall @ 0x140003230 (PushCall.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     AMLIApplyNamespaceOverride @ 0x14006DA88 (AMLIApplyNamespaceOverride.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseLoad(_QWORD *a1, __int64 a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD *v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  int v17; // eax

  v3 = (_DWORD *)(a2 + 16);
  v6 = *(unsigned int *)(a2 + 16);
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 16);
  v9 = (_DWORD *)(a2 + 16);
  v10 = v8 & 0xF;
  if ( !v10 )
  {
    *v3 = v6 + 1;
    v7 = NewObjOwner((_QWORD *)gpheapGlobal, (struct _EX_RUNDOWN_REF **)(a2 + 40));
    if ( v7 )
    {
      v17 = *v3 | 0x10000;
      *(_QWORD *)(a2 + 40) = 0LL;
      *v3 = v17 + 2;
      return v7;
    }
    v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))ghLoadTable)(18LL, 1LL, a1);
    if ( v7 == 259 )
      return 32772;
LABEL_20:
    ++*v3;
    if ( !a1[12] )
      v7 = PushCall(a1, 0LL, (__int64)(a1 + 16));
    if ( !v7 )
    {
      qword_14008EC50 = *(_QWORD *)(a2 + 56) + 36LL;
      qword_14008EC58 = *(_QWORD *)(a2 + 56) + *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4LL);
      return (unsigned int)PushScope(
                             a1,
                             *(_QWORD *)(a2 + 56) + 36LL,
                             *(_QWORD *)(a2 + 56) + *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4LL),
                             a1[15],
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(a2 + 40),
                             gpheapGlobal,
                             (__int64)(a1 + 16));
    }
    return v7;
  }
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11 - 1;
  if ( !v12 )
  {
    *v3 = v6 + 1;
    if ( a3 >= 0 )
      AMLIApplyNamespaceOverride(v6, v9);
    else
      *v3 = (v6 + 1) | 0x10000;
    v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))ghLoadTable)(18LL, 2LL, a1);
    if ( v7 != 259 )
    {
      v9 = (_DWORD *)(a2 + 16);
LABEL_12:
      v14 = (++*v3 & 0x10000) == 0;
      v3 = v9;
      v15 = *(_QWORD *)(a2 + 48);
      if ( v14 )
      {
        *(_WORD *)(v15 + 2) = 15;
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(a2 + 40);
      }
      else
      {
        *(_WORD *)(v15 + 2) = 1;
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
      }
      goto LABEL_15;
    }
    return 32772;
  }
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_12;
  if ( v13 == 1 )
  {
LABEL_15:
    ++*v3;
    v16 = (_QWORD *)a1[52];
    a1[52] = v16[1];
    HeapFree(v16);
  }
  return v7;
}
