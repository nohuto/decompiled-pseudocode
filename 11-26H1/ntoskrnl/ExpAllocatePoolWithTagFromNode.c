/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x14039A460
 * Callers:
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C169D0 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // ebx
  int v10; // r12d
  int v11; // r15d
  int v12; // eax
  __int64 result; // rax

  v5 = a5;
  if ( a5 >= 0 )
  {
    v10 = 1;
  }
  else
  {
    v5 = a5 & 0x7FFFFFFF;
    if ( a1 )
      v10 = *(_DWORD *)(a1 + 72);
    else
      v10 = (unsigned __int16)KeNumberNodes;
  }
  v11 = 0;
  v12 = v5;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, a2, a3, a4, v12);
    if ( result )
      break;
    if ( --v10 )
    {
      if ( ++v11 != (unsigned __int16)KeNumberNodes )
      {
        v12 = *(_DWORD *)(qword_140E2D810 + 4LL * (v11 + v5 * (unsigned int)(unsigned __int16)KeNumberNodes));
        if ( v12 != -1 )
          continue;
      }
    }
    ++ExPoolFailures;
    return 0LL;
  }
  return result;
}
