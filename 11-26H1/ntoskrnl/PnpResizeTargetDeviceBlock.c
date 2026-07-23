/*
 * XREFs of PnpResizeTargetDeviceBlock @ 0x1409B4A30
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpResizeTargetDeviceBlock(const void **a1, unsigned int a2)
{
  unsigned int v3; // esi
  _DWORD *v4; // rcx
  unsigned int v5; // r15d
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  _DWORD *CriticalMemory; // rax
  _DWORD *v12; // rdi
  const void *v13; // rbx

  v3 = 0;
  v4 = *a1;
  v5 = v4[39] + 120;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)v4 + v6 + 84) );
  v7 = 2 * v6 + 2;
  v8 = 0;
  if ( v7 != 2 )
    v8 = v7;
  v9 = v5 - v8 + 400;
  if ( v9 > v5 )
  {
    CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a2, 256LL, v9, 1265659472LL);
    v12 = CriticalMemory;
    if ( CriticalMemory )
    {
      v13 = *a1;
      memmove(CriticalMemory, *a1, v5);
      v12[16] = 1;
      v12[39] = v9 - 120;
      *((_QWORD *)v12 + 10) = v13;
      *a1 = v12;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
