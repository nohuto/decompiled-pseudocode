/*
 * XREFs of BiCreateFileDeviceElement @ 0x140897D04
 * Callers:
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateFileDeviceElement(const wchar_t *Src, _QWORD *a2, unsigned int *a3)
{
  int v4; // edi
  wchar_t *v5; // rax
  const wchar_t *v6; // r14
  __int64 v7; // rbx
  char *Pool2; // rsi
  size_t v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r15d
  unsigned int v14; // r13d
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rdx

  v4 = 0;
  if ( wcsnicmp(Src, L"\\Device\\HarddiskVolume", 0x16uLL) )
    return (unsigned int)-1073741811;
  v5 = wcschr(Src + 22, 0x5Cu);
  if ( (v6 = v5) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = v5 - Src;
    Pool2 = (char *)ExAllocatePool2(0x102uLL);
    if ( Pool2 )
    {
      v9 = 2LL * (unsigned int)v7;
      memmove(Pool2, Src, v9);
      v10 = -1LL;
      *(_WORD *)&Pool2[v9] = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)&Pool2[2 * v11] );
      v12 = -1LL;
      do
        ++v12;
      while ( v6[v12] );
      v13 = 2 * v12 + 46;
      v14 = v13 + 2 * (v11 + 11);
      v15 = (char *)ExAllocatePool2(0x102uLL);
      v16 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, v14);
        v17 = -1LL;
        *((_DWORD *)v16 + 5) = v13;
        *(_DWORD *)v16 = 3;
        do
          ++v17;
        while ( v6[v17] );
        wcscpy_s((wchar_t *)v16 + 12, v17 + 1, v6);
        *(_DWORD *)&v16[v13] = 2;
        do
          ++v10;
        while ( *(_WORD *)&Pool2[2 * v10] );
        wcscpy_s((wchar_t *)&v16[v13 + 20], v10 + 1, (const wchar_t *)Pool2);
        *a2 = v16;
        *a3 = v14;
      }
      else
      {
        v4 = -1073741670;
      }
      ExFreePoolWithTag(Pool2, 0x4B444342u);
      if ( v4 < 0 && v16 )
        ExFreePoolWithTag(v16, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
