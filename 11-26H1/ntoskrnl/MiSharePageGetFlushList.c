/*
 * XREFs of MiSharePageGetFlushList @ 0x1402E9CD8
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiSharePageGetFlushList(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 ProcessorFlushList; // rcx

  v2 = *a1;
  v4 = a1[14];
  v5 = *(_QWORD *)(v2 + 112);
  if ( !v4 )
  {
    ProcessorFlushList = a1[15];
    if ( !ProcessorFlushList )
    {
      ProcessorFlushList = MiGetProcessorFlushList(0LL, a2);
      a1[15] = ProcessorFlushList;
    }
    *((_DWORD *)a1 + 32) = 128;
    MiInitializeTbFlushList(ProcessorFlushList, v5, *(_DWORD *)(ProcessorFlushList + 12), 0, 128);
    a1[14] = v4;
  }
  return v4;
}
