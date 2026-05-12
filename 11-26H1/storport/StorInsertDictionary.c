/*
 * XREFs of StorInsertDictionary @ 0x1400383C0
 * Callers:
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0 (NvmeControllerAddNvmeNamespaceToList.c)
 *     StorAdjustDictionarySize @ 0x14012F72C (StorAdjustDictionarySize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorInsertDictionary(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v2)(__int64 *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  unsigned int (__fastcall *v5)(__int64); // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *i; // r14
  __int64 **v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax

  v2 = *(__int64 (__fastcall **)(__int64 *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v5 = *(unsigned int (__fastcall **)(__int64))(a1 + 40);
  v7 = *(_DWORD *)(a1 + 4);
  v8 = v2(a2);
  v9 = 16LL * (v5(v8) % v7) + *(_QWORD *)(a1 + 16);
  for ( i = *(__int64 **)v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      ++*(_DWORD *)a1;
      v11 = *(__int64 ***)(v9 + 8);
      if ( *v11 != (__int64 *)v9 )
        __fastfail(3u);
      *a2 = v9;
      a2[1] = (__int64)v11;
      *v11 = a2;
      *(_QWORD *)(v9 + 8) = a2;
      return 0LL;
    }
    v13 = v2(a2);
    v14 = v2(i);
    v15 = v4(v14, v13);
    if ( !v15 )
      break;
    if ( v15 < 0 )
    {
      *a2 = (__int64)i;
      a2[1] = i[1];
      i[1] = (__int64)a2;
      *(_QWORD *)a2[1] = a2;
      ++*(_DWORD *)a1;
      return 0LL;
    }
  }
  return 3221226026LL;
}
