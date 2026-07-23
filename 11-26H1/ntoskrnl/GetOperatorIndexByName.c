/*
 * XREFs of GetOperatorIndexByName @ 0x140A6FAC4
 * Callers:
 *     GetConditionToken @ 0x140A70D68 (GetConditionToken.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     wcstok_s @ 0x14053F224 (wcstok_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall GetOperatorIndexByName(wchar_t *Src)
{
  wchar_t *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v5; // ebp
  int v6; // r12d
  rsize_t v7; // rsi
  size_t v8; // rcx
  wchar_t *v10; // rax
  const wchar_t *v11; // r15
  __int64 v12; // rsi
  int *v13; // r14
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  wchar_t *Context; // [rsp+20h] [rbp-D8h] BYREF
  wchar_t Delim[12]; // [rsp+28h] [rbp-D0h] BYREF
  wchar_t Dst[64]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = Dst;
  v2 = -1;
  v3 = -1LL;
  wcscpy(Delim, L" (){}");
  Context = 0LL;
  v5 = 0;
  v6 = 0;
  do
    ++v3;
  while ( Src[v3] );
  v7 = (unsigned int)v3;
  v8 = 2LL * (unsigned int)v3;
  if ( v8 <= 0x80 || (v1 = (wchar_t *)SddlpAlloc(v8)) != 0LL )
  {
    wcsncpy_s(v1, v7, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = wcstok_s(v1, Delim, &Context);
    v11 = v10;
    if ( v10 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
      v13 = &dword_1400042C4;
      while ( v5 < 0x18 )
      {
        v14 = *(const wchar_t **)(v13 - 5);
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15] );
        if ( (unsigned int)v12 > (unsigned int)v15 )
        {
          LODWORD(v16) = v12;
        }
        else
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v14[v16] );
        }
        if ( !*(_BYTE *)v13 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v14[v16] );
        }
        if ( !wcsnicmp(v11, v14, (unsigned int)v16) )
        {
          v6 = 1;
          break;
        }
        ++v5;
        v13 += 6;
      }
    }
  }
  if ( v1 != Dst && v1 )
    SddlpFree(v1);
  if ( v6 )
    return v5;
  return v2;
}
