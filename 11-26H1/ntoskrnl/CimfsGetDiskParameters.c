/*
 * XREFs of CimfsGetDiskParameters @ 0x140D09660
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140CC4C00 (IopGetBootDiskInformationLite.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CimfsGetDiskParameters(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  int v7; // eax

  v6 = -1073741811;
  if ( a1 && a2 && *(_DWORD *)(a1 + 4) == 6 && !*(_DWORD *)(a1 + 36) )
  {
    memset_0(a2, 0, 0x90uLL);
    a2[6] = *(_DWORD *)a1;
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 == 1 )
    {
      if ( a3 )
        *a3 = a1 + 44;
      *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 20);
      return 0;
    }
    if ( !v7 )
    {
      *a2 = 1;
      if ( a3 )
        *a3 = a1 + 44;
      *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 20);
      return 0;
    }
  }
  return v6;
}
