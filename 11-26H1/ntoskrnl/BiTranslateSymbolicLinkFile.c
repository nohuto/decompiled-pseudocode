/*
 * XREFs of BiTranslateSymbolicLinkFile @ 0x140898FAC
 * Callers:
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140B1E470 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 * Callees:
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiTranslateSymbolicLink @ 0x140B244E4 (BiTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiTranslateSymbolicLinkFile(wchar_t *P, wchar_t **a2)
{
  wchar_t *v4; // rsi
  wchar_t *v5; // r14
  char v6; // bp
  wchar_t *v7; // rax
  wchar_t *v8; // rbx
  __int64 v9; // rax
  size_t v10; // r14
  __int64 v11; // rax
  wchar_t *Pool2; // rax
  wchar_t *v13; // r13
  unsigned int Size; // [rsp+60h] [rbp+8h]

  if ( P && a2 )
  {
    *a2 = 0LL;
    v4 = P;
    v5 = 0LL;
    v6 = 0;
    while ( 1 )
    {
      v7 = wcsrchr(v4, 0x5Cu);
      v8 = v7;
      if ( v5 )
        *v5 = 92;
      if ( !v7 )
        break;
      *v7 = 0;
      if ( (int)BiTranslateSymbolicLink(v4) >= 0 )
      {
        *v8 = 92;
        v9 = -1LL;
        v6 = 1;
        do
          ++v9;
        while ( *(_WORD *)(2 * v9) );
        v10 = (unsigned int)(2 * v9);
        v11 = -1LL;
        do
          ++v11;
        while ( v8[v11] );
        Size = 2 * v11 + 2;
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
        *a2 = Pool2;
        v13 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memmove(Pool2, 0LL, v10);
        memmove((char *)v13 + v10, v8, Size);
        if ( v4 != P )
          ExFreePoolWithTag(v4, 0x4B444342u);
        v4 = *a2;
        v8 = (wchar_t *)((char *)*a2 + v10);
        *v8 = 0;
      }
      v5 = v8;
    }
    return v6 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
