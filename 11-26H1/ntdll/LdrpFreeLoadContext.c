/*
 * XREFs of LdrpFreeLoadContext @ 0x1800C4C20
 * Callers:
 *     LdrpCleanupEnclaveLoadState @ 0x1800C4AE4 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C4B80 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800C4CCC (LdrpFreeReplacedModule.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpFreeReplacedModule @ 0x1800C4CCC (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800C4D08 (LdrpHandlePendingModuleReplaced.c)
 */

LOGICAL __fastcall LdrpFreeLoadContext(PVOID BaseAddress)
{
  unsigned int v1; // ebx
  LOGICAL result; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v1 = 0;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 7) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced();
  if ( *((_QWORD *)BaseAddress + 11) )
  {
    if ( *((_DWORD *)BaseAddress + 26) )
    {
      do
      {
        v4 = *(_QWORD **)(*((_QWORD *)BaseAddress + 11) + 8LL * v1);
        if ( v4 )
        {
          v5 = v4[22];
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 32) & 0x80000) == 0 && *(_QWORD **)(v5 + 56) != v4 )
            {
              *(_QWORD *)(v5 + 56) = v4;
              LdrpFreeReplacedModule(v4);
            }
          }
        }
        ++v1;
      }
      while ( v1 < *((_DWORD *)BaseAddress + 26) );
    }
    result = RtlFreeHeap_0(LdrpHeap, 0, *((PVOID *)BaseAddress + 11));
  }
  if ( (*((_DWORD *)BaseAddress + 8) & 0x8000) != 0 )
    return RtlFreeHeap_0(LdrpHeap, 0, BaseAddress);
  return result;
}
