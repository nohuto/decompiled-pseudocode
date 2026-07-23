/*
 * XREFs of DbgkpTriageDumpSnapData @ 0x1405B7010
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     DbgkpTriageDumpCheckPresentHashTable @ 0x1405B6F88 (DbgkpTriageDumpCheckPresentHashTable.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall DbgkpTriageDumpSnapData(__int64 a1, _QWORD *a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  size_t v10; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rdx
  ULONG v18; // r10d
  _QWORD *v19; // rax
  int v20; // esi
  int v21; // esi
  int v22; // esi
  __int64 v23; // rax
  ULONG pulResult; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  v7 = -1LL;
  v8 = *(_QWORD *)a1;
  v10 = a3;
  v25 = -1LL;
  pulResult = 0;
  if ( a6 )
    *a6 = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a4 == 1 && !a5 && (*(_DWORD *)(v8 + 4152) & 1) == 0 )
  {
    memmove((void *)(v8 + 840), a2, a3);
    *(_DWORD *)(v8 + 4152) |= 1u;
    return 0LL;
  }
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    if ( DbgkpTriageDumpCheckPresentHashTable(a1, (unsigned __int64)a2, a3, &v25) )
    {
      if ( !v6 )
        return 0LL;
      v15 = *(_QWORD *)(v14 + 8 * v25);
LABEL_14:
      *v6 = *(_QWORD *)a1 + *(unsigned int *)(v15 + 8);
      return 0LL;
    }
    v7 = v25;
  }
  v16 = (v10 + 7) & 0xFFFFFFF8;
  if ( v16 + 16 >= v16 && RtlULongSub(*(_DWORD *)(v8 + 8312), *(_DWORD *)(a1 + 24), &pulResult) >= 0 && v18 <= pulResult )
  {
    memmove((void *)(v8 + v17), a2, v10);
    *(_DWORD *)(v8 + 4152) |= 0x800u;
    *(_DWORD *)(v8 + 8312) -= 16;
    ++*(_DWORD *)(v8 + 8316);
    v19 = a5;
    v15 = v8 + *(unsigned int *)(v8 + 8312);
    if ( !a5 )
      v19 = a2;
    *(_QWORD *)v15 = v19;
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v15 + 12) = v10;
    *(_DWORD *)(a1 + 24) += v16;
    v20 = a4 - 2;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 && !*(_DWORD *)(v8 + 8232) )
          {
            *(_DWORD *)(v8 + 8232) = *(_DWORD *)(v15 + 8);
            *(_DWORD *)(v8 + 8236) = *(_DWORD *)(v15 + 12);
            *(_QWORD *)(v8 + 8264) = a2;
            *(_DWORD *)(v8 + 4152) |= 0x20u;
          }
        }
        else if ( !*(_DWORD *)(v8 + 8224) )
        {
          *(_DWORD *)(v8 + 8224) = *(_DWORD *)(v15 + 8);
          *(_DWORD *)(v8 + 4152) |= 8u;
          *(_QWORD *)(v8 + 16) = a2[5] & 0xFFFFFFFFFFFFF000uLL;
        }
      }
      else if ( !*(_DWORD *)(v8 + 8228) )
      {
        *(_DWORD *)(v8 + 8228) = *(_DWORD *)(v15 + 8);
        *(_DWORD *)(v8 + 4152) |= 0x10u;
      }
    }
    else if ( !*(_DWORD *)(v8 + 8220) )
    {
      *(_DWORD *)(v8 + 8220) = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(v8 + 4152) |= 4u;
    }
    v23 = *(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      if ( *(_DWORD *)(a1 + 40) < 0x6F9u )
      {
        *(_QWORD *)(v23 + 8 * v7) = v15;
        ++*(_DWORD *)(a1 + 40);
      }
    }
    if ( !v6 )
      return 0LL;
    goto LABEL_14;
  }
  return 3221225626LL;
}
