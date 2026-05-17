/*
 * XREFs of LdrpFreeLoadContext @ 0x1800C7460
 * Callers:
 *     LdrpCleanupEnclaveLoadState @ 0x1800C7324 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C73C0 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800C7548 (LdrpHandlePendingModuleReplaced.c)
 */

__int64 __fastcall LdrpFreeLoadContext(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced();
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v1);
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 176);
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 32) & 0x80000) == 0 && *(_QWORD *)(v5 + 56) != v4 )
            {
              *(_QWORD *)(v5 + 56) = v4;
              LdrpFreeReplacedModule();
            }
          }
        }
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 104) );
    }
    result = RtlFreeHeap_0();
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap_0();
  return result;
}
