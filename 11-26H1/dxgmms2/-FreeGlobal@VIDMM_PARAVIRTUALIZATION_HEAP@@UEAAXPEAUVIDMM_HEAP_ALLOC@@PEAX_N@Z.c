/*
 * XREFs of ?FreeGlobal@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400B5170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::FreeGlobal(VIDMM_PROCESS **this, struct VIDMM_HEAP_ALLOC *a2, void *a3)
{
  int v3; // eax
  void *v5; // rdx

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( *(_QWORD *)a2 )
    {
      v5 = (void *)*((_QWORD *)a2 + 2);
      if ( v5 )
      {
        VIDMM_PROCESS::UnmapHostAddressesFromGuest(this[1], v5, *((_QWORD *)a2 + 3), *((_QWORD *)a2 + 1), 0);
        *((_QWORD *)a2 + 2) = 0LL;
        *((_QWORD *)a2 + 3) = 0LL;
      }
      MmFreePagesFromMdl(*(PMDL *)a2);
      ExFreePoolWithTag(*(PVOID *)a2, 0);
      *(_QWORD *)a2 = 0LL;
    }
  }
  else if ( (v3 & 2) != 0 && *((_DWORD *)a2 + 6) )
  {
    ExFreePoolWithTag(*((PVOID *)a2 + 2), 0);
    *((_DWORD *)a2 + 6) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
  }
  operator delete(a2);
}
