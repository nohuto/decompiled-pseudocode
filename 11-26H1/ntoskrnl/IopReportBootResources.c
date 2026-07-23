/*
 * XREFs of IopReportBootResources @ 0x140CCB630
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopAllocateBootResources @ 0x1407A8AB0 (IopAllocateBootResources.c)
 *     PnpDetermineResourceListSize @ 0x140AA0E1C (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopReportBootResources(unsigned int a1, __int64 a2, _DWORD *a3)
{
  const void *v4; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  size_t v9; // rbp
  void *Pool2; // rax
  _QWORD *v11; // rax
  void *v12; // rcx

  v4 = a3;
  v6 = PnpDetermineResourceListSize(a3);
  if ( v6 )
  {
    if ( a2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( (*(_DWORD *)(v7 + 396) & 1) == 0 )
        return IopAllocateBootResources(a1, a2);
      if ( !*(_QWORD *)(v7 + 544) )
      {
        v9 = v6;
        Pool2 = (void *)ExAllocatePool2(256LL, v6, 0x20207050u);
        *(_QWORD *)(v7 + 544) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        memmove(Pool2, v4, v9);
      }
    }
    else
    {
      v7 = 0LL;
    }
    v11 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x20207050u);
    if ( !v11 )
    {
      if ( v7 )
      {
        v12 = *(void **)(v7 + 544);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(v7 + 544) = 0LL;
        }
      }
      return 3221225626LL;
    }
    if ( v7 )
      v4 = *(const void **)(v7 + 544);
    v11[2] = v4;
    v11[1] = a2;
    *v11 = IopInitReservedResourceList;
    IopInitReservedResourceList = v11;
  }
  return 0LL;
}
