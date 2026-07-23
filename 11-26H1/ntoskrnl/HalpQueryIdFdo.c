/*
 * XREFs of HalpQueryIdFdo @ 0x140784BC0
 * Callers:
 *     HalpDispatchPnp @ 0x140B1CA40 (HalpDispatchPnp.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryIdFdo(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // edx
  __int64 result; // rax
  __int64 *v6; // rbx
  unsigned int v7; // eax
  const wchar_t *v8; // rax
  size_t v9; // rdi
  char *Pool2; // rax
  char *v11; // rsi

  if ( a2 && (v4 = a2 - 1) != 0 )
  {
    if ( v4 != 2 )
      return 3221225659LL;
    v6 = &HalInstanceIdString;
    v7 = 4;
  }
  else
  {
    v6 = (__int64 *)L"acpiapic";
    v8 = L"acpiapic";
    do
      ++v8;
    while ( *v8 );
    v7 = (_DWORD)v8 - (unsigned int)L"acpiapic" + 2;
  }
  v9 = v7;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v6, v9);
  result = 0LL;
  *(_WORD *)&v11[v9 & 0xFFFFFFFFFFFFFFFEuLL] = 0;
  *a3 = v11;
  return result;
}
