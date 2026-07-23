/*
 * XREFs of MiFindBestOutswapPagefile @ 0x1403FE7B0
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x1403FE86C (MiWsSwapPageFileNumber.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiFindBestOutswapPagefile(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // edi
  _QWORD *v9; // r14
  unsigned int v11; // ebx

  v4 = MiWsSwapPageFileNumber();
  v6 = *(_DWORD *)(v5 + 22296);
  v7 = 0;
  *a2 = v4;
  v8 = 16;
  if ( !v6 )
    return *a2;
  v9 = (_QWORD *)(v5 + 22304);
  do
  {
    if ( (*(_BYTE *)(*v9 + 172LL) & 0xD0) == 0x80 )
    {
      if ( v8 == 16
        || (v11 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * v8 + 22304)),
            (unsigned int)MiPageFileLargestBitmapsRun(*v9) > v11) )
      {
        v8 = v7;
      }
    }
    ++v7;
    ++v9;
  }
  while ( v7 < v6 );
  if ( v8 == 16 )
    return *a2;
  return v8;
}
