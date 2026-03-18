/*
 * XREFs of MiReleaseTrimViewResources @ 0x140360084
 * Callers:
 *     MiTrimSharedPageFromView @ 0x14046BEB4 (MiTrimSharedPageFromView.c)
 *     MiDeleteActiveTrimView @ 0x14046C034 (MiDeleteActiveTrimView.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiReleaseTrimViewResources(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  ULONG_PTR v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 28) && MiFreeWsleList(*(_QWORD *)(a1 + 24), a2, v4, 0) )
        *(_DWORD *)a1 = 277;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      MiFlushTbList(v5);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 48) )
    {
      MiReleaseProcessorFlushList(v5, a2, v4);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 64) )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 )
        MiUnlockPageTableInternal(v2, v6);
      LOBYTE(v6) = *(_BYTE *)(a1 + 264);
      MiUnlockWorkingSetShared(v2, v6);
    }
    else
    {
      MiUnlockSystemVa(a1 + 72);
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
