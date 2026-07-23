/*
 * XREFs of HalpInsertProfileSource @ 0x14058297C
 * Callers:
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

char __fastcall HalpInsertProfileSource(__int64 a1, __int64 a2, int a3, __int64 **a4)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  int v7; // edi
  __int64 *v9; // rbp
  __int64 **v11; // rax
  __int64 **v12; // rcx

  v4 = (__int64 *)HalpProfileSourceDescriptorListHead;
  v5 = &HalpProfileSourceDescriptorListHead;
  *a4 = 0LL;
  v7 = a3 + 1;
  while ( v4 != &HalpProfileSourceDescriptorListHead )
  {
    v9 = v4 - 1;
    if ( !wcsncmp((const wchar_t *)v4[36], *(const wchar_t **)(a1 + 296), 0xFFuLL) )
    {
      *a4 = v9;
      return 0;
    }
    if ( v7 == *(_DWORD *)v9 )
    {
      v5 = (__int64 *)*v4;
      ++v7;
    }
    if ( !v7 )
      return 0;
    v4 = (__int64 *)*v4;
  }
  *(_DWORD *)a1 = v7;
  v11 = (__int64 **)(a1 + 8);
  v12 = (__int64 **)v5[1];
  if ( *v12 != v5 )
    __fastfail(3u);
  *v11 = v5;
  *(_QWORD *)(a1 + 16) = v12;
  *v12 = (__int64 *)v11;
  v5[1] = (__int64)v11;
  return 1;
}
