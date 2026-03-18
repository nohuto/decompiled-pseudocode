/*
 * XREFs of ?UnlockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x1400B57F0
 * Callers:
 *     <none>
 * Callees:
 *     UnlockChildPages @ 0x14004D130 (UnlockChildPages.c)
 *     UnmapGpadl @ 0x14004D158 (UnmapGpadl.c)
 */

void __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::UnlockHeapAllocation(VIDMM_PARAVIRTUALIZATION_HEAP *this, PMDL *a2)
{
  __int64 v3; // rcx

  if ( ((_DWORD)a2[4] & 3) == 2 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 72LL);
    if ( *((_DWORD *)a2 + 6) )
    {
      UnlockChildPages(v3);
      IoFreeMdl(*a2);
    }
    else
    {
      UnmapGpadl();
    }
    *a2 = 0LL;
  }
}
