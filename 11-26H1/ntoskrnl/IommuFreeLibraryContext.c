/*
 * XREFs of IommuFreeLibraryContext @ 0x14059EB3C
 * Callers:
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     IommupFreeSystemContext @ 0x14059F584 (IommupFreeSystemContext.c)
 */

__int64 __fastcall IommuFreeLibraryContext(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 *i; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v1 = a1[1];
  v3 = *a1;
  v4 = (__int64 *)(v1 + 40);
  for ( i = *(__int64 **)(v1 + 40); i != v4; i = (__int64 *)*i )
  {
    if ( (__int64 *)i[3] != i + 3 )
      return 3221225473LL;
  }
  while ( 1 )
  {
    v7 = *v4;
    if ( *(__int64 **)(*v4 + 8) != v4 || (v8 = *(_QWORD *)v7, *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v4 = v8;
    *(_QWORD *)(v8 + 8) = v4;
    if ( (__int64 *)v7 == v4 )
      break;
    HalpMmAllocCtxFree((__int64)a1, v7);
  }
  HalpMmAllocCtxFree((__int64)a1, v1);
  *a1 = 0LL;
  IommupFreeSystemContext(v3);
  HalpMmAllocCtxFree(v9, (__int64)a1);
  return 0LL;
}
