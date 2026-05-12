/*
 * XREFs of StorDlrmCleanup @ 0x140183C7C
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 * Callees:
 *     StorDlrmTerminateSystemThread @ 0x1401B0D44 (StorDlrmTerminateSystemThread.c)
 */

void __fastcall StorDlrmCleanup(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  PLIST_ENTRY v4; // rax
  PLIST_ENTRY v5; // rax

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == 1094997074 )
    {
      v2 = *(_QWORD *)(a1 + 6288);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 6288);
        *(_DWORD *)(v2 + 12) &= ~1u;
        StorDlrmTerminateSystemThread(v3);
        while ( 1 )
        {
          v4 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v2 + 120), (PKSPIN_LOCK)(v2 + 136));
          if ( !v4 )
            break;
          ExFreePoolWithTag(v4, 0x4D4C6152u);
        }
        while ( 1 )
        {
          v5 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v2 + 144), (PKSPIN_LOCK)(v2 + 160));
          if ( !v5 )
            break;
          ExFreePoolWithTag(v5, 0x4D4C6152u);
        }
        ExFreePoolWithTag((PVOID)v2, 0x4D4C6152u);
        *(_QWORD *)(a1 + 6288) = 0LL;
      }
    }
  }
}
