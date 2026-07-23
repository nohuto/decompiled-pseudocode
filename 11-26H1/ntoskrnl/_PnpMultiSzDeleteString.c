/*
 * XREFs of _PnpMultiSzDeleteString @ 0x140A97E08
 * Callers:
 *     _CmGetDeviceSiblings @ 0x140A9794C (_CmGetDeviceSiblings.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _PnpMultiSzGetLen @ 0x1409536BC (_PnpMultiSzGetLen.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PnpMultiSzDeleteString(wchar_t *a1, wchar_t *Str2)
{
  wchar_t *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  wchar_t *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  void *Pool2; // rax
  void *v10; // rsi

  v3 = a1;
  if ( a1 && Str2 )
  {
    while ( 1 )
    {
      if ( !*v3 )
        return 1;
      v4 = wcsicmp(v3, Str2);
      v5 = -1LL;
      do
        ++v5;
      while ( v3[v5] );
      v6 = &v3[v5 + 1];
      if ( !v4 )
        break;
      v3 += v5 + 1;
    }
    if ( !*v6 )
    {
      *(_DWORD *)v3 = 0;
      return 1;
    }
    v7 = 2 * PnpMultiSzGetLen(&v3[v5 + 1]);
    if ( v7 )
    {
      v8 = v7;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v6, v8);
        memmove(v3, v10, v8);
        ExFreePoolWithTag(v10, 0);
        return 1;
      }
    }
  }
  return 0;
}
