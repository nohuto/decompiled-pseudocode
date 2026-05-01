/*
 * XREFs of DSA_EnumCallback @ 0x18065E108
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180665A30 (--1CPinList@@QEAA@XZ.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066FA60 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801FE380 (DSA_GetItemPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __stdcall DSA_EnumCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData)
{
  int i; // ebx
  PVOID ItemPtr; // rax

  if ( hdsa )
  {
    if ( pfnCB )
    {
      for ( i = 0; i < *(_DWORD *)hdsa; ++i )
      {
        ItemPtr = DSA_GetItemPtr(hdsa, i);
        if ( !((unsigned int (__fastcall *)(PVOID, void *))pfnCB)(ItemPtr, pData) )
          break;
      }
    }
  }
}
