/*
 * XREFs of MiUnlockAllBatchPages @ 0x140298560
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiFinishUnlinkBatch @ 0x140298600 (MiFinishUnlinkBatch.c)
 *     MiAcquirePageListSynchronization @ 0x1402999B0 (MiAcquirePageListSynchronization.c)
 *     MiCachedPageFinish @ 0x14029FC60 (MiCachedPageFinish.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiPurgeFinish @ 0x1402EBEC0 (MiPurgeFinish.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlockAllBatchPages(__int64 a1, __int64 a2)
{
  unsigned int v4; // r11d
  __int64 *v5; // rax
  unsigned int i; // edx
  __int64 v7; // r8
  int v8; // ecx

  if ( *(_DWORD *)(a1 + 56) )
  {
    v4 = *(_DWORD *)(a1 + 60);
    v5 = (__int64 *)(a1 + 136);
    for ( i = 0; i < v4; ++i )
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( v7 != a2 )
        {
          *v5 = 0LL;
          v8 = --*(_DWORD *)(a1 + 56);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v8 )
            break;
        }
      }
      ++v5;
    }
    if ( a2 )
    {
      *(_QWORD *)(a1 + 136) = a2;
      *(_DWORD *)(a1 + 60) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
}
