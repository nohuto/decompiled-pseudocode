/*
 * XREFs of HalpInterruptGetIdentifiers @ 0x1404F6820
 * Callers:
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     HalpNumaQueryProcessorNode @ 0x1405947B0 (HalpNumaQueryProcessorNode.c)
 *     HalpNumaSwapP0NodeToFront @ 0x140594ED0 (HalpNumaSwapP0NodeToFront.c)
 *     HalpMcLoadMicrocodeWorker @ 0x140595EF0 (HalpMcLoadMicrocodeWorker.c)
 *     Amd64InitializeCacheStatus @ 0x1405A6754 (Amd64InitializeCacheStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetIdentifiers(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r11d
  unsigned int i; // eax
  ULONG_PTR v8; // rcx
  unsigned __int64 v9; // r8
  int v10; // eax
  unsigned int j; // eax
  ULONG_PTR v12; // rdx
  unsigned __int64 v13; // rcx

  v6 = a1;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)HalpInterruptProcessorCount )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= (unsigned int)HalpInterruptProcessorCount )
          return 3221226021LL;
        v12 = HalpInterruptProcessorState;
        v13 = (unsigned __int64)j << 6;
        if ( !*(_BYTE *)(v13 + HalpInterruptProcessorState + 13)
          && !*(_BYTE *)(v13 + HalpInterruptProcessorState + 12)
          && !*(_BYTE *)(v13 + HalpInterruptProcessorState + 56) )
        {
          if ( !v6 )
          {
            if ( a2 )
              *a2 = *(_DWORD *)(v13 + HalpInterruptProcessorState);
            if ( a3 )
            {
              v10 = *(_DWORD *)(v13 + v12 + 4);
              goto LABEL_23;
            }
            return 0LL;
          }
          --v6;
        }
      }
    }
    v8 = HalpInterruptProcessorState;
    v9 = (unsigned __int64)i << 6;
    if ( !*(_BYTE *)(v9 + HalpInterruptProcessorState + 56) )
    {
      if ( *(_BYTE *)(v9 + HalpInterruptProcessorState + 13) )
      {
        --v6;
        if ( *(_DWORD *)(v9 + HalpInterruptProcessorState + 20) == a1 )
          break;
      }
    }
  }
  if ( a2 )
    *a2 = *(_DWORD *)(v9 + HalpInterruptProcessorState);
  if ( a3 )
  {
    v10 = *(_DWORD *)(v9 + v8 + 4);
LABEL_23:
    *a3 = v10;
  }
  return 0LL;
}
