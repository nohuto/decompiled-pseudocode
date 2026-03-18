/*
 * XREFs of sub_1407A9FD8 @ 0x1407A9FD8
 * Callers:
 *     sub_1404AEFE0 @ 0x1404AEFE0 (sub_1404AEFE0.c)
 * Callees:
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall sub_1407A9FD8(__int64 a1, const void *a2, _DWORD *a3, void *a4, unsigned int a5, _DWORD *a6)
{
  void *v8; // rax
  unsigned __int16 *v10; // rdx

  v8 = bsearch(
         a2,
         (const void *)(a1 + 24),
         *(unsigned int *)(a1 + 46824),
         0x10uLL,
         (int (__cdecl *)(const void *, const void *))sub_1407A9880);
  if ( v8 )
  {
    v10 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a6 = v10[3];
    if ( a3 )
      *a3 = v10[2];
    if ( v10[3] <= a5 )
    {
      if ( a4 )
        memmove(a4, (char *)v10 + v10[1] + 16, v10[3]);
      return 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
