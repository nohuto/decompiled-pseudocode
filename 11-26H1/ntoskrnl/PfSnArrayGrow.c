/*
 * XREFs of PfSnArrayGrow @ 0x140A94464
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x140A9439C (PfSnVolumeKeyQuery.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnArrayGrow(unsigned int a1, __int64 a2, __int64 a3, unsigned int *a4, const void **a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  void *Pool2; // rbp
  unsigned int v9; // eax

  if ( a1 < *a4 )
    return 1;
  v6 = (3 * *a4) >> 1;
  if ( v6 < 4 )
    v6 = 4;
  if ( a1 >= v6 )
  {
    v6 = a1 + 4;
    if ( a1 + 4 < a1 )
      return 0;
  }
  if ( 8 * (unsigned __int64)v6 > 0xFFFFFFFF )
    return 0;
  v7 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v9 = 8 * *a4;
    if ( v9 )
      memmove(Pool2, *a5, v9);
    if ( *a5 )
      ExFreePoolWithTag((PVOID)*a5, 0);
    *a5 = Pool2;
    *a4 = v6;
    return 1;
  }
  return v7;
}
