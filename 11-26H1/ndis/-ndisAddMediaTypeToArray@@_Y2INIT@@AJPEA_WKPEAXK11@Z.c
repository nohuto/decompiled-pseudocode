/*
 * XREFs of ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x14018EE40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisAddMediaTypeToArray(wchar_t *a1, int a2, int *a3)
{
  _DWORD *v4; // rax
  int i; // ecx
  void *Pool2; // rax
  void *v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r8d
  int v10; // ecx

  if ( a2 == 4 && a3 && (unsigned int)*a3 > 0x11 )
  {
    v4 = ndisMediumArray;
    for ( i = ndisMediumArraySize; i; i -= 4 )
    {
      if ( *a3 == *v4 )
        return 0LL;
      ++v4;
    }
    if ( (_DWORD)ndisMediumArraySize == 96 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 112LL, 1953317966LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ndisMediumArray;
        memmove(Pool2, ndisMediumArray, (unsigned int)ndisMediumArraySize);
        if ( v8 != &ndisMediumBuffer )
          ExFreePoolWithTag(v8, 0);
        ndisMediumArray = v7;
      }
    }
    v9 = ndisMediumArraySize;
    if ( (unsigned int)ndisMediumArraySize < 0x60 )
    {
      v10 = *a3;
      LODWORD(ndisMediumArraySize) = ndisMediumArraySize + 4;
      *((_DWORD *)ndisMediumArray + ((unsigned __int64)v9 >> 2)) = v10;
    }
  }
  return 0LL;
}
