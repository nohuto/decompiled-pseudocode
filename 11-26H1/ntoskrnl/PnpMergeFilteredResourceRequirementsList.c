/*
 * XREFs of PnpMergeFilteredResourceRequirementsList @ 0x1407B55A4
 * Callers:
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpMergeFilteredResourceRequirementsList(_DWORD *Src, _DWORD *a2, int **a3)
{
  _DWORD *v5; // rbx
  int v6; // ebp
  int *Pool2; // rax
  int *v8; // rsi
  int *v10; // rax
  int *v11; // rdi

  *a3 = 0LL;
  v5 = Src;
  if ( Src && Src[7] )
    goto LABEL_18;
  if ( !a2 || !a2[7] )
    return 0LL;
  if ( Src && Src[7] )
  {
LABEL_18:
    if ( a2 && a2[7] )
    {
      v6 = *Src - 32 + *a2;
      Pool2 = (int *)ExAllocatePool2(0x100uLL);
      v8 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v5, (unsigned int)*v5);
        memmove((char *)v8 + (unsigned int)*v5, a2 + 8, (unsigned int)(v6 - *v5));
        *v8 = v6;
        v8[7] += a2[7];
        *a3 = v8;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  else
  {
    v5 = a2;
  }
  v10 = (int *)ExAllocatePool2(0x100uLL);
  v11 = v10;
  if ( v10 )
  {
    memmove(v10, v5, (unsigned int)*v5);
    *a3 = v11;
    return 0LL;
  }
  return 3221225626LL;
}
